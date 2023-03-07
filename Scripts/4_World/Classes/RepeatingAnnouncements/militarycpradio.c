class S13_MilitaryCP_Radio extends BaseRadio
{
    protected float ANNOUNCEMENT_DELAY = 45000;
    protected bool m_IsOn = false;
    protected EffectSound m_SoundLoop_Static;
	void S13_MilitaryCP_Radio()
	{
		SOUND_RADIO_TURNED_ON = "militaryCP_Soundset";
	}

    override void SoundTurnedOnNoiseStart()
	{
        PlaySoundSetLoop( m_SoundLoop_Static, "baseradio_staticnoise_SoundSet", 1.0, 1.0);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(LoopSoundMilitaryCP, ANNOUNCEMENT_DELAY, false);
	}

    override void SoundTurnedOnNoiseStop()
	{
		StopSoundSet( m_SoundLoop );
		StopSoundSet( m_SoundLoop_Static );
	}	

    override void OnWorkStart()
    {
        super.OnWorkStart();
        m_IsOn = true;
    }

    override void OnWorkStop()
	{
		super.OnWorkStop();
        m_IsOn = false;
	}

    void LoopSoundMilitaryCP()
    {
        if (m_IsOn)
        {
            PlaySoundSet( m_SoundLoop, SOUND_RADIO_TURNED_ON, 0, 0);
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(LoopSoundMilitaryCP, ANNOUNCEMENT_DELAY, false);
        }
    }
}

class S13_RostokPropaganda_Radio extends BaseRadio
{
    protected float ANNOUNCEMENT_DELAY = 45000;
    protected bool m_IsOn = false;
    protected EffectSound m_SoundLoop_Static;
	void S13_RostokPropaganda_Radio()
	{
		SOUND_RADIO_TURNED_ON = "rostokPropaganda_Soundset";
	}

    override void SoundTurnedOnNoiseStart()
	{
        PlaySoundSetLoop( m_SoundLoop_Static, "baseradio_staticnoise_SoundSet", 1.0, 1.0);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(LoopSoundRostokPropaganda, ANNOUNCEMENT_DELAY, false);
	}

    override void SoundTurnedOnNoiseStop()
	{
		StopSoundSet( m_SoundLoop );
		StopSoundSet( m_SoundLoop_Static );
	}	

    override void OnWorkStart()
    {
        super.OnWorkStart();
        m_IsOn = true;
    }

    override void OnWorkStop()
	{
		super.OnWorkStop();
        m_IsOn = false;
	}

    void LoopSoundRostokPropaganda()
    {
        if (m_IsOn)
        {
            PlaySoundSet( m_SoundLoop, SOUND_RADIO_TURNED_ON, 0, 0);
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(LoopSoundRostokPropaganda, ANNOUNCEMENT_DELAY, false);
        }
    }
}