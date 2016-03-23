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
		int temp2;
		temp2 = m_damage + rand() % 9 + 1;
		target.Damage(temp2);
		cout << "\nPlayer's remaining Hp = " << getHealth() << '\n';
		cout << "\nPlayer's attack did " << temp2<< " " << " damage" << '\n';
		

		if (target.getHealth() <= 0)
		{
			m_damage = 17;
		}
	}

}