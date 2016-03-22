#include "Player1.h"


Player1::Player1()
{
	
}



Player1::~Player1()
{
}

void Player1::attack(Character & target)
{
	{
		cout << "Player1 attacked for " << m_damage << '\n';

		target.Damage(m_damage);
	}
}