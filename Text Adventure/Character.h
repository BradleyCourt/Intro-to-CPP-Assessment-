#pragma once
#include"String.h"
class Character
{
public:

	int GetHealth()
	{
		return m_health;
	}
	int getDamage()
	{
		return m_damage;
	}

	void attack(int attack)
	{
		m_damage = attack;
	}
	bool IsDead()
	{
		return m_health <= 0;
	}

	virtual void Damage(int damage);

	Character();

	virtual ~Character();

protected:
	int m_health;
	int m_damage;
	String m_name;
};
