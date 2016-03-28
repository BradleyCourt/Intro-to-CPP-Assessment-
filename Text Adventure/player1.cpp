#include "Player1.h"
#include "Darkwizard.h"

Player1::Player1()
{
	
}



Player1::~Player1()
{
}

void Player1::attack(Character & target)
{
	{
		char action[50];
		String input1("Attack");
		String input2("Dodge");
		int temp2;
		temp2 = m_damage + rand() % 9 + 1;
		cout << "\nPlayer's remaining Hp = " << getHealth() << '\n';
		cout << "what would you like to do, Attack\n";
		cout << " DELETE THIS SOON you will automaticly dodge if enemy attack is less than 14\n";
		cin >> action;
		if (input1.compare(action) == 0)
		{
			target.Damage(temp2);
			cout << "\nPlayer's attack did " << temp2 << " " << " damage" << '\n';
			//cout << "\nPlayer's remaining Hp = " << getHealth() << '\n';
		}
	
		if (target.getHealth() <= 0)
		{
			m_damage = 17;
		}
	}

}