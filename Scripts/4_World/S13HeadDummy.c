class S13HeadDummy_Base extends Clothing
{
    override void OnWasDetached(EntityAI parent, int slot_id)
    {
        super.OnWasDetached(parent,slot_id);
        this.DeleteSafe();
    }
};