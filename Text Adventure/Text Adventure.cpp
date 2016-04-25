#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "String.h"
#include <fstream>
#include "Character.h"
#include "Player.h"
#include "Darkwizard.h"
#include <time.h>
#include "Room.h"
#include "Map.h"
#include <vector>
#include "StartRoom.h"
#include "Text Adventure.h"
#include "PuzzleRoom.h"
#include "QuizRoom.h"
#include "Treasure.h"
#include "startRoom.h"
#include "Text Adventure.h"
#include "PuzzleRoom1.h"
using namespace std;

int main()
{
	Map map;
	Player player; // inherited from character
	Darkwizard enemy; // inherited from character
	//srand(time(NULL));
	int temp;
	map.initialize();
	//map.UpdateMap(0);

	bool playing = true;



	//map.at(0)->Introduction();
	//map.at(currentRoom())->Introduction()
	{

		/* map.pointerToVect().at(0)->TakeInput();*/

		String test;

		while (playing == true)
		{
			map.m_map.at(player.currentRoom(map.m_map))->TakeInput();
			player.move(map);
			
		}

	}
	
	/*while (true)

	{
		player.move(map);
		(map.m_map.at(player.FindRoom(map.pointerToVect())))->TakeInput();
	}
*/
	
	 //		String input1("Dodge");
	 //		String input2("Catch");
	 //		String input3("Attack");
	 //		cin >> userInput;

	 //		if (input1.compare(userInput) == 0)
	 //		{
	 //			cout << "you attempt to dodge the attack, you successfully dodge, and the battle erupts";
	 //			break;
	 //		}
	 //		else if (input2.compare(userInput) == 0)
	 //		{
	 //			cout << "you attempt to catch it, and it obliterates your body, not so smart eh?";
	 //			getch();
	 //		}
	 //		else if (input3.compare(userInput) == 0)
	 //		{
	 //			cout << "you attempt to attack through the attack, your throw your strongest right hook at the attack, and the attack dissipates, the fight begins.";
	 //			break;
	 //		}
	 //		else
	 //		{
	 //			cout << "invalid choice";

	 //		}

	 //	}

	 //}
	 //while (true)
	 //{



	 //	if (player.getHealth() <= 0)
	 //	{
	 //		cout << "Dark Wizard won the fight, Game over";

	 //		system("PAUSE");
	 //	}
	 //	//	player.getHealth();
	 //	player.attack(enemy);

	 //	if (enemy.getHealth() <= 0)
	 //	{
	 //		cout << "Player won the fight, your base attack has increased to 17";
	 //		player.setHealth();
	 //		cout << '\n' << "current hp " << player.getHealth();


	 //		break;
	 //	}
	 //	//enemy.getHealth();
	 //	enemy.attack(player);
	 //}

		/*	cout << "you walk through the door north of where you were, in the darkness you see a sparkle in the distance, with no little time to react you see a spell fly down the hallway torwards INPUTS, Catch, Dodge, Attack \n";

			String input1("Dodge");
			String input2("Catch");
			String input3("Attack");
			cin >> userInput;

			if (input1.compare(userInput) == 0)
			{
				cout << "you attempt to dodge the attack, you successfully dodge, and the battle erupts";
				break;
			}
			else if (input2.compare(userInput) == 0)
			{
				cout << "you attempt to catch it, and it obliterates your body, not so smart eh?";
				getch();
			}
			else if (input3.compare(userInput) == 0)
			{
				cout << "you attempt to attack through the attack, your throw your strongest right hook at the attack, and the attack dissipates, the fight begins.";
				break;
			}
			else
			{
				cout << "invalid choice";

			}

		}
			
		}
	while (true)
	{



		if (player.getHealth() <= 0)
		{
			cout << "Dark Wizard won the fight, Game over";

			system("PAUSE");
		}
		//	player.getHealth();
		player.attack(enemy);

		if (enemy.getHealth() <= 0)
		{
			cout << "Player won the fight, your base attack has increased to 17";
			player.setHealth();
			cout << '\n' << "current hp " << player.getHealth();


			break;
		}
		//enemy.getHealth();
		enemy.attack(player);
	}
	*/
	getch();
	return 0;
}