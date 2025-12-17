class FloatDamageSet
{
public:
    FloatDamageSet(){}
    FloatDamageSet& operator=(const FloatDamageSet& __rgt)
    {
        for (int i = 0; i < MAX_ACTOR_NUM; ++i) {
            m_fltDmg[i] = __rgt.m_fltDmg[i];
        }
        return *this;
    }

    FloatDamage m_fltDmg[MAX_ACTOR_NUM];
};
