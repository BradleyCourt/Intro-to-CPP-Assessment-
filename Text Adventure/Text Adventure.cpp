#include "stdafx.h"
#include <iostream>
#include <conio.h>
//#include "Text Adventure.h"
#include "String.h"
#include <fstream>
#include "Character.h"
#include "Player1.h"
#include "Darkwizard.h"
#include <time.h>

using namespace std;

int main()

{
	Player1 player; // inherited from character
	Darkwizard enemy; // inherited from character
	srand(time(NULL));
	int temp;


	bool correctPassword = false;
	bool hasLetter1 = false;
	bool hasLetter2 = false;
	bool hasLetter3 = false;


	char userInput[50];
	char password[10];


	cout << "\n Your adventure begins in a dungeon like area, its dark but you can still see, there only seems to be one exit to the east of the room, you do however notice a panel on the wall.\n";
	cout << "\n your options are, look, right";
	while (true)
	{
		String input1("right");
		String input2("look");
		cin >> userInput;
		if (input1.compare(userInput) == 0) // option 1 right
		{
			//system("CLS");
			if (hasLetter1 == false)
			{
				cout << "\nyou should probably look at the panel first\n";

			}
			else if (hasLetter1 == true)
			{

				system("CLS");

				cout << "\nYou enter the next room, it appears to be much brighter, you see an open door to the north and another closed to the south, most noteable of all though is a console, INPUTS, checkConsole, North, South\n" << endl << endl;
				cout << "\nyou currently have one letter, 'O'\n";
				break;
			}
		}


		if (input2.compare(userInput) == 0)  // Look at the panel
		{

			cout << "\nYou peer a the panel and notice the letter 'O'? how peculiar, better take note of it anyway\n";
			hasLetter1 = true;


		}


	}
	while (true)
	{
		String answer("WOOF");
		String input1("checkConsole");
		String input2("walkTowards");
		String input3("North");
		String input4("South");

		cin >> userInput;
		if (input1.compare(userInput) == 0)  // Look at the panel
		{
			cout << "you check the console\n";
			cout << "what is the password?";

			cin >> password;

			if (strcmp(password, answer.getString()) == 0)
			{
				correctPassword = true;
				cout << "access granted";
				cout << "\n while pondering to yourself about how insecure the code was, a door has opened up infront of you with sunlight beaming out of it";
				cout << " type walkTowards";
				cin >> userInput;

				if (input2.compare(userInput) == 0)
				{
					cout << "final boss";
				}
			}
			else
			{
				cout << "maybe you should find the parts of the code first";
			}
		}
		//	cin >> userInput;
		while (true)
		{
			cout << "you walk through the door north of where you were, in the darkness you see a sparkle in the distance, with no little time to react you see a spell fly down the hallway torwards INPUTS, Catch, Dodge, Attack \n";

			String input1("Dodge");
			String input2("Catch");
			String input3("Attack");
			cin >> userInput;

			if (input1.compare(userInput) == 0)
			{
				cout << "you attempt to dodge the attack, you successfully dodge, and the battle erupts";
			}
			else if (input2.compare(userInput) == 0)
			{
				cout << "you attempt to catch it, and it obliterates your body, not so smart eh?";
				getch();
			}
			else if (input3.compare(userInput) == 0)
			{
				cout << "you attempt to attack through the attack, your throw your strongest right hook at the attack, and the attack dissipates, the fight begins.";
			}
			else
			{
				cout << "invalid choice";
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
		}
	
	getch();
    return 0;
}


