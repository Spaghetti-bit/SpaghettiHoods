/*
class CreateBoltActionInput : DefaultActionInput
{
    void CreateBoltActionInput(PlayerBase player)
    {
        SetInput("UACreateBolt");
    }
};
*/

modded class MissionGameplay extends MissionBase
{
    override void OnKeyPress(int key)
	{
		super.OnKeyPress(key);

        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
        if (player)
        {
            // TODO: Input variable.
            // V is the bolt key.
            if (key == KeyCode.KC_V)
            {
                if (player.GetCanCreateBolt())
                {
                    Print("[Spaghetti Bolts] :: DEBUG :: Can Player Create Bolt? :: " + player.GetCanCreateBolt());
                    player.ResetBoltCD();
                    Param1<int> params = new Param1<int>(key);
                    //Sending RPC (Client -> Server)
                    GetRPCManager().SendRPC("SpaghettiHoods", "RPC_CreateBoltInHands", params);
                }
            }
        }
	}
};

modded class MissionServer extends MissionBase
{
    void MissionServer()
    {
        if (GetRPCManager().AddRPC("SpaghettiHoods", "RPC_CreateBoltInHands", this, SingleplayerExecutionType.Server))
        {
            Print("[Spaghetti Bolts] :: DEBUG :: Bolt System started!");
        }
    }

    void RPC_CreateBoltInHands(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if(type != CallType.Server)
			return;

        Param1<int> data;
		if (!ctx.Read(data)) 
			return;

        //TODO:
        //Print("[Spaghetti Bolts] :: DEBUG :: KeyReleased ServerSide :: " + key);
        int keyPressed = data.param1;
        PlayerBase player = PlayerBase.Cast(sender.GetPlayer());
        EntityAI itemInHands = player.GetHumanInventory().GetEntityInHands();
        if (!itemInHands && player && (keyPressed == KeyCode.KC_V))
        {
            string itemType = "S13_Bolt";
            //Print("[Spaghetti Bolts] :: DEBUG :: Created Item in Hands :: " + itemType);
            player.GetHumanInventory().CreateInHands(itemType);
        }
    }
};
