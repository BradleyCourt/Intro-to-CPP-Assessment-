#pragma once
#include"String.h"
class Character
{
public:

	int getHealth()
	{
		return m_health;
	}
	int setHealth()
	{
		return  m_health = 150;
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

	virtual void setHealth(int health);
	

	Character();

	virtual ~Character();

protected:
	int m_health;
	int m_damage;
	int m_setHealth;
	String m_name;
};
