#include "Character.h"




void Character::Damage(int damage)
{
	m_health -= damage;
}
void Character::setHealth(int health)
{
	m_health = health;
}

Character::Character()
{
	m_health = 100;
	m_damage = 10;
	m_setHealth = 150;
}

Character::~Character()
{

}