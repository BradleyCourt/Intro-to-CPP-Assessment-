#include <iostream>
#include <vector>
#include <time.h>
#include <chrono>
#include <thread>

#include "Creature.h"
#include "Ogre.h"
#include "Snake.h"
#include "Flamestrike.h"
void sleep(float time)
{
	std::this_thread::sleep_for(std::chrono::milliseconds((int)(time * 1000)));
}

int main()
{
	srand(time(NULL));
	std::vector<Creature*> creatureList;

	creatureList.push_back((new Ogre())->AddPrefix("Red"));
	creatureList.push_back((new Ogre())->AddPrefix("Blue"));
	creatureList.push_back(new Snake());
	creatureList.push_back(new Flamestrike());

	std::cout << "Welcome to the Monster Mash Arena!\n\n";

	std::cout << "Our contestants tonight are:\n\n";
	for (Creature* creature : creatureList)
	{
		sleep(1.5f);
		std::cout << creature->GetName() << "\n";		
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << ".";
		sleep(0.5f);
	}

	std::cout << "Fight!\n\n";

	while (true)
	{
		int liveCount = 0;
		Creature* lastAlive = nullptr;

		for (Creature* creature : creatureList)
		{
			if (!creature->IsDead())
			{
				creature->Update(creatureList);
				sleep(3.5f);
				std::cout << "\n";
				liveCount++;
				lastAlive = creature;
			}			
		}

		if (liveCount == 1 && lastAlive)
		{
			std::cout << "\nAll other creatures are dead, " << lastAlive->GetName() << " is the WINNER!\n\n";
			std::cout << "Thanks for watching!\n\n";
			break;
		}
	}

	system("PAUSE");

    return 0;
}

