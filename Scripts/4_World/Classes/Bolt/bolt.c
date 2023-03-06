class S13_Bolt: SmallStone
{
    override void EOnContact(IEntity other, Contact extra)
    {
        super.EOnContact(other, extra);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DeleteSafe, 1000, false);
    }
};