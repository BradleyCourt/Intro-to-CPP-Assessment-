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
		cout << "DarkWizard attacked for " << m_damage << '\n';

		target.Damage(m_damage);

		cout << "\n DarkWizard's remaining Hp" << getHealth() << '\n';

	}
}
