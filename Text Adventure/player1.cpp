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

		cout << "\nPlayer's remaining Hp" << getHealth() << '\n';

		if (target.getHealth() <= 0)
		{
			m_damage = 17;
		}
	}

}