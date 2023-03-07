class S13_ArmorRepairKitBase: Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUseArmorRepairKit);
	}
    // CanReceiveAttachment
    // IsKindOf(SEVA) / Exo
    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		ItemBase item = ItemBase.Cast( attachment );
		if (item.IsKindOf("S13_ArmorRepairSuitBase"))
        {
            return true;
        }
        return super.CanReceiveAttachment(attachment, slotId);
    }
}
//Allows for ruined items to be placed into the armorkits
class S13_ArmorRepairSuitBase: Clothing
{
    override bool CanPutAsAttachment(EntityAI parent)
	{
        if(parent.IsKindOf("S13_ArmorRepairKitBase") && !parent.IsRuined())
        {
            return true;
        }
		if (!super.CanPutAsAttachment(parent))
		{
			return false;
		}
		if (!IsRuined() && !parent.IsRuined())
		{
			return true;
		}
		return false;
	}
}

class s13_sevasuit_cb: S13_ArmorRepairSuitBase 
{
	override bool CanPutAsAttachment(EntityAI parent)
	{
        if(parent.IsKindOf("S13_ArmorRepairKitBase") && !parent.IsRuined())
        {
            return true;
        }
		if (!super.CanPutAsAttachment(parent))
		{
			return false;
		}
		if (!IsRuined() && !parent.IsRuined())
		{
			return true;
		}
		return false;
	}
}
modded class NH_Exo_System_v1_BaseColor: S13_ArmorRepairSuitBase
{
	override bool CanPutAsAttachment(EntityAI parent)
	{
        if(parent.IsKindOf("S13_ArmorRepairKitBase") && !parent.IsRuined())
        {
            return true;
        }
		if (!super.CanPutAsAttachment(parent))
		{
			return false;
		}
		if (!IsRuined() && !parent.IsRuined())
		{
			return true;
		}
		return false;
	}
}