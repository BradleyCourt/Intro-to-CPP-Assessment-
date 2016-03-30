#include "Room.h"
#include "Player1.h"
#include "Darkwizard.h"
#include "Map.h"

Player1::Player1()
{
	
}


Player1::~Player1()
{
}

void Player1::nextRoom(int col, int row, std::vector<Room*> m_map)
{
	int vectorIndex = -1;
	for (unsigned int i = 0; i < m_map.size(); i++)
	{
		if ((m_map.at(i))->m_xCoord == col && (m_map.at(i))->m_yCoord == row)
		{
			//found a match
			vectorIndex = i;
			break;
		}
	}
	if (vectorIndex == -1) {
		//error found, room doesnt exist
		//message stating error
		cout << "vector out of range\n";
	}
	else 
	{
		m_Col = col;
		m_Row = row;
		std::cout << (m_map.at(vectorIndex)->enterText())->getString() << std::endl;
	}
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

int Player1::getCoordX()
{
	return m_Col;
}

int Player1::getCoordY()
{
	return m_Row;
}
