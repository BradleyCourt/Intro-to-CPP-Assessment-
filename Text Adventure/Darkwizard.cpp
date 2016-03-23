#include "Darkwizard.h"



Darkwizard::Darkwizard()
{
}


Darkwizard::~Darkwizard()
{
}

void Darkwizard::attack(Character & target)
{
	{
		int temp3;
		temp3 = m_damage + rand() % 9 + 1;
		target.Damage(temp3);
		cout << "\Dark Wizards remaining Hp" << getHealth() << '\n';
		cout << "\Dark Wizards magic did " << temp3 << " damage" << '\n';
		

	
	}
}
