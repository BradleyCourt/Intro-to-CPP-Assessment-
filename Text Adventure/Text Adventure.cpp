#include "stdafx.h"
#include <iostream>
#include <conio.h>
//#include "Text Adventure.h"
#include "String.h"
#include <fstream>
#include "Character.h"
#include "Player1.h"
#include "Darkwizard.h"

using namespace std;
int main()

{	
	Player1 player; // inherited from character
	Darkwizard enemy; // inherited from character

	player.attack(enemy);

	enemy.attack(player);
	
	
	bool correctPassword = false;
	bool hasLetter1 = false;
	bool hasLetter2 = false;
	bool hasLetter3 = false;


	char userInput[50];
	char password[10];
	ifstream Room1("Room1.txt", ios::in);
	char ch;
	while (Room1)
	{
		Room1.get(ch);
		if (Room1) cout << ch;
	}
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
			Room1.close();
			if (hasLetter1 == false)
			{
				cout << "\nyou should probably look at the panel first\n";

			}
			else if (hasLetter1 == true)
			{


				cout << "\nYou enter the next room, it appears to be much brighter, you see an open door to the north and another closed to the south, most noteable of all though is a console, \n" << endl << endl;
				cout << "\nyou currently have one letter, 'O'\n";
				break;
			}
		}

		system("CLS");
		ifstream Room2("Room2.txt", ios::in);
		char ch;
		while (Room2)
		{
			Room2.get(ch);
			if (Room2) cout << ch;
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

		cin >> userInput;
		if (input1.compare(userInput) == 0)  // Look at the panel
		{
			cout << "you check the console\n";
			cout << "what is the password?";
			
			cin >> password;
			if (strcmp(password, answer.getString()) == 0)
			{
				correctPassword == true;
				cout << "access granted";
				cout << "\n while pondering to yourself about how insecure the code was, a door has opened up infront of you with sunlight beaming out of it";
				cout << " type walkTowards";
				if (input2.compare(userInput) == 0)
				{
					Room2.close();

				}
			}
			else
			{
				cout << "maybe you should find the parts of the code first";
			}
			
		}
	}



	getch();
    return 0;
}


