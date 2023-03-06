class ActionUseArmorRepairKitCB: ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(1);
    };
};
//ActionUseArmorRepairKit
class ActionUseArmorRepairKit: ActionContinuousBase
{
    void ActionUseArmorRepairKit()
    {
        m_CallbackClass = ActionUseArmorRepairKitCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
        m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;
        m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
    };
    
    override void CreateConditionComponents()  
    {        
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    };
    
    override bool HasProneException()
    {
        return true;
    };

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return CanRepairSEVA(item) || CanRepairExo(item);
    }
    
    override bool HasTarget()
    {
        return false;
    };
    
    override string GetText()
    {
        return "Repair Suit";
    };
    
    override void OnFinishProgressServer(ActionData action_data)
    {
        if(action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player)
        {

            if (CanRepairExo(action_data.m_MainItem))
            {
                //Print("[Spaghetti Armor Kits] :: Repair Kit :: Repaired Exo");
                RepairExo(action_data.m_MainItem);
            }
            else if (CanRepairSEVA(action_data.m_MainItem))
            {
                //Print("[Spaghetti Armor Kits] :: Repair Kit :: Repaired SEVA");
                RepairSEVA(action_data.m_MainItem);
            }
            //MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, new ActionPutHoodDownDutyPS5Lambda(action_data.m_MainItem, "S13_combez_duty_1_hooddown", action_data.m_Player));
        }
    };

    bool CanRepairSEVA(ItemBase item)
    {
        EntityAI seva_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitSEVA");
        EntityAI sevapart_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitSEVAPart");
        // Exo checks
        EntityAI exo_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitExo");
        EntityAI exopart_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitExoPart");
        return ((seva_item && sevapart_item) && !(exo_item || exopart_item));
    }

    bool CanRepairExo(ItemBase item)
    {
        EntityAI exo_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitExo");
        EntityAI exopart_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitExoPart");
        // SEVA checks
        EntityAI seva_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitSEVA");
        EntityAI sevapart_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitSEVAPart");
        return ((exo_item && exopart_item) && !(seva_item || sevapart_item));
    }

    void RepairSEVA(ItemBase item)
    {
        EntityAI seva_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitSEVA");
        EntityAI sevapart_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitSEVAPart");
        seva_item.SetHealth( seva_item.GetHealth() + (seva_item.GetMaxHealth() / 2));
        //Parts are one use. It takes 2 parts to repair a seva fully.

        //Reduce health of the kit. (100 max health, 2 uses with 50 health per use)
        item.AddHealth(-50);
        sevapart_item.DeleteSafe();
    }
    void RepairExo (ItemBase item)
    {
        EntityAI exo_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitExo");
        EntityAI exopart_item = item.FindAttachmentBySlotName("S13_ArmorRepairKitExoPart");
        exo_item.SetHealth( exo_item.GetHealth() + (exo_item.GetMaxHealth() / 4));
        //Parts are one use.
        //Reduce health of the kit. (100 max health, 2 uses with 50 health per use)

        item.AddHealth(-25);
        exopart_item.DeleteSafe();
    }
};