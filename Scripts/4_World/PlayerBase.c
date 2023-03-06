modded class PlayerBase extends ManBase
{
    private const float BOLT_COOLDOWN = 5; // In seconds.
    private float m_boltCurrentCD = 0.0;
    private bool m_CanCreateBolt = true;
    
    override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)	
	{
		// lower implement 
		super.CommandHandler(pDt,pCurrentCommandID,pCurrentCommandFinished);
        ProcessBoltCooldown(pDt);
    }
    // ================================================ //
    /*                      BOLTS                      */
    // ================================================ //
    void ProcessBoltCooldown(float pDt)
    {
        m_boltCurrentCD -= pDt;
        m_boltCurrentCD = Math.Clamp(m_boltCurrentCD, 0, BOLT_COOLDOWN);
        //Print("[Spaghetti Bolts] :: DEBUG :: Bolt CD? :: " + m_boltCurrentCD);
        m_CanCreateBolt = m_boltCurrentCD <= 0.1; // ~5s (4.9s)
        //Print("[Spaghetti Bolts] :: DEBUG :: Can Player Create Bolt? :: " + GetCanCreateBolt());
    }
    bool GetCanCreateBolt() { return m_CanCreateBolt; }
    void ResetBoltCD()
    {
        m_boltCurrentCD = BOLT_COOLDOWN;
    }
    // ================================================ //
    /*                     HOODS                        */
    // ================================================ //
    override void OnConnect()
    {
        //TODO: UNCOMMENT FOR RELEASE
        if (!GetGame().IsDedicatedServer())
            return;
        array<string> slotNames = 
        {
            "Shoulder",
            "Melee",
            "Headgear",
            "Mask",
            "Eyewear",
            "Gloves",
            "Armband",
            "Body",
            "Vest",
            "Back",
            "Hips",
            "Legs",
            "Feet"
        };
        vector extents = "1 0 1";
        // Purpose : Find suit config
        foreach (string slotStr: slotNames)
        {
            //TODO:
            //Print("[SpaghettiHoods] :: DEBUG :: Slot_Name :: " + slotStr);
            //Find object on slot
            ItemBase slotItem;
            ItemBase.CastTo(slotItem, FindAttachmentBySlotName(slotStr));
            if(slotItem)
            {
                // Grab Config of object on slot
                string cfg_Path = "cfgVehicles " + slotItem.GetType();
                if (GetGame().ConfigIsExisting(cfg_Path))
                {
                    // Find suit array of object if it exists
                    ref array<string> suitArr = new array<string>;
                    GetGame().ConfigGetTextArray(cfg_Path + " suit", suitArr);
                    foreach(string suitStr : suitArr)
                    {
                        // Iterate through slots... again, find any suit items, lock the slot.
                        foreach(string configSlotStr : slotNames)
                        {
                            ItemBase suitItem = ItemBase.Cast(FindAttachmentBySlotName(configSlotStr));
                            if (suitItem)
                            {
                                if (suitItem.GetType() == suitStr)
                                {
                                    //Print("[SpaghettiHoods] DEBUG :: Spawn Suit :: " + suitItem.GetType());
                                    suitItem.SetHealth01("","", slotItem.GetHealth01());
                                    InventoryLocation inventory_location = new InventoryLocation;
                                    suitItem.GetInventory().GetCurrentInventoryLocation( inventory_location );
                                    GetInventory().SetSlotLock( inventory_location.GetSlot(), true );
                                }
                            }
                        }
                    }
                }
            }
        }
        super.OnConnect();
    }
    override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
        SpawnSuit(item);
    }
    override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
        DeSpawnSuit(item);
	}
    // ================================================ //
    /*               IMPLEMENTED                        */
    // ================================================ //
    void SpawnSuit(EntityAI suit)
    {
        //TODO: Uncomment for release
        if (GetGame().IsDedicatedServer())
        {
            ItemBase suitItem = ItemBase.Cast(suit);
            if (suitItem)
            {
                string cfg_Path = "cfgVehicles " + suitItem.GetType();
                if (GetGame().ConfigIsExisting(cfg_Path))
                {
                    ref array<string> suitArr = new array<string>;
                    GetGame().ConfigGetTextArray(cfg_Path + " suit", suitArr);
                    SpawnSuitFromConfig(suitArr, suitItem);
                }
            }
        }
    }
    void SpawnSuitFromConfig(ref array<string> suitArray, EntityAI parent)
    {
        vector extents = "1 0 1";
        foreach(string suitStr : suitArray)
        {
            //=======================================//
            /*   Check for existing items in slot    */
            //=======================================//
            string cfg_Path = "cfgVehicles " + suitStr;
            if (GetGame().ConfigIsExisting(cfg_Path))
            {
                ref array<string> slotArr = new array<string>;
                GetGame().ConfigGetTextArray(cfg_Path + " inventorySlot", slotArr);
                ItemBase existingItem;
                foreach(string inventorySlotStr : slotArr)
                {
                    ItemBase.CastTo(existingItem, FindAttachmentBySlotName(inventorySlotStr));
                    if (existingItem)
                        break;
                }
                if (existingItem)
                {
                    //DropAllItemsInInventoryInBounds(existingItem, extents);
                    //extents
                    MiscGameplayFunctions.DropAllItemsInInventoryInBounds(existingItem, extents);
                    ServerDropEntity(existingItem);
                    //existingItem.DeleteSafe();
                }
            }
            //=======================================//
            /*              Spawn Item               */
            //=======================================//
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(SpawnSuitFromConfigEx, 100, false, suitStr, parent);
            // Sleepge
            
        }
    }
    void SpawnSuitFromConfigEx(string suitStr, EntityAI parent)
    {
        ItemBase suitItem = ItemBase.Cast(GetInventory().CreateAttachment(suitStr));
        if (suitItem)
        {
            InventoryLocation inventory_location = new InventoryLocation;
            //Print("[SpaghettiHoods] DEBUG :: Spawn Suit :: " + suitItem.GetType());
            suitItem.SetHealth01("","", parent.GetHealth01());
            suitItem.GetInventory().GetCurrentInventoryLocation( inventory_location );
            GetInventory().SetSlotLock( inventory_location.GetSlot(), true );
        }
    }
    void DeSpawnSuit(EntityAI suit)
    {
        //TODO: Uncomment/ Comment
        //Print("[SpaghettiHoods] DEBUG :: DeSpawn Suit");
        if (GetGame().IsDedicatedServer())
        {
            ItemBase suitItem = ItemBase.Cast(suit);
            if (suitItem)
            {
                string cfg_Path = "cfgVehicles " + suitItem.GetType();
                if (GetGame().ConfigIsExisting(cfg_Path))
                {
                    ref array<string> suitArr = new array<string>;
                    GetGame().ConfigGetTextArray(cfg_Path + " suit", suitArr);
                    DeSpawnSuitTest(suitArr);
                }
            }
        }
    }
    void DeSpawnSuitFromConfig(ref array<string> suitArray)
    {
        vector extents = "1 0 1";
        foreach(string suitStr : suitArray)
        {
            //TODO: Uncomment/ Comment
            string cfg_Path = "cfgVehicles " + suitStr;
            ref array<string> slotArr = new array<string>;
            GetGame().ConfigGetTextArray( cfg_Path + " inventorySlot", slotArr);
            ItemBase suitItem;
            foreach(string inventorySlotStr : slotArr)
            {
                ItemBase.CastTo(suitItem, FindAttachmentBySlotName(inventorySlotStr));
                if (suitItem)
                {
                    //Print("[SpaghettiHoods] DEBUG :: DeSpawn Suit :: " + suitItem.GetType());
                    InventoryLocation inventory_location = new InventoryLocation;
                    suitItem.GetInventory().GetCurrentInventoryLocation( inventory_location );
                    GetInventory().SetSlotLock( inventory_location.GetSlot(), false );
                    MiscGameplayFunctions.DropAllItemsInInventoryInBounds(suitItem, extents);
                    suitItem.DeleteSafe();
                }
            }
        }
    }
    void DeSpawnSuitTest(ref array<string> suitStrArray)
    {
        array<string> slotNames = 
        {
            "Shoulder",
            "Melee",
            "Headgear",
            "Mask",
            "Eyewear",
            "Gloves",
            "Armband",
            "Body",
            "Vest",
            "Back",
            "Hips",
            "Legs",
            "Feet"
        };
        vector extents = "1 0 1";
        foreach (string slotStr: slotNames)
        {
            //TODO:
            //Print("[SpaghettiHoods] :: DEBUG :: Slot_Name :: " + slotStr);
            ItemBase suitItem;
            ItemBase.CastTo(suitItem, FindAttachmentBySlotName(slotStr));
            if(!suitItem)
                continue;
            //TODO:
            //Print("[SpaghettiHoods] :: DEBUG :: Item Name :: " + suitItem.GetType());
            foreach(string suitStr : suitStrArray)
            {
                //Print("[SpaghettiHoods] :: DEBUG :: SuitStr :: " + suitStr);
                if (suitItem.GetType() == suitStr)
                {
                    InventoryLocation inventory_location = new InventoryLocation;
                    suitItem.GetInventory().GetCurrentInventoryLocation( inventory_location );
                    GetInventory().SetSlotLock( inventory_location.GetSlot(), false );
                    MiscGameplayFunctions.DropAllItemsInInventoryInBounds(suitItem, extents);
                    suitItem.DeleteSafe();
                    break;
                }
            }
        }
    }
};