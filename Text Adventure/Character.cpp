#include "Character.h"




void Character::Damage(int damage)
{
	m_health -= damage;
}

Character::Character()
{
	m_health = 100;
	m_damage = 10;
}

Character::~Character()
{

}