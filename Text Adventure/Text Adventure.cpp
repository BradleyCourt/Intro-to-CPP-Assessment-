#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Text Adventure.h"
#include "player1.h"
#include "String.h"
#include <fstream>
using namespace std;


int main()

{	
	char nameInput[50];
	char areYouSure[20];
	Player player1;
	cout << "please enter username " << endl;
	cin >> nameInput;
	player1.SetName(nameInput) ;

	cout << "your user name is ";
	//cout << player1.GetName() << endl;
	cout << nameInput;
	cout << " Are you happy with your choice, yes or no ";

	//myfile.close();

	cin >> areYouSure;
	

	if (strcmp(areYouSure, "yes") == 0)
	{
		cout << "your good to go, good luck" << endl << endl;
	}
	else if (strcmp(areYouSure, "no")==0)
	{
		//User();
	}
	else
	{
		cout << "I dont speak that language";
		getch();
	}

	//return player1;

	char userInput[50];

	ifstream in("Room1.txt", ios::in);
	char ch;
	while (in)
	{
		in.get(ch);
		if (in) cout << ch;
	}
	cout << "Your adventure begins in a deep dark dungeon, there is barely enough light to look around the pleace, you manage to sport an exit towards the right, there seems to be no other way out for now\n";
	cin >> userInput;

	// Is userInput == "right"
	if (strcmp(userInput, "right") == 0) // option 1 right
	{
		system("CLS");
		cout << "You enter the room " << endl << endl; // fallen tree, path is blocked
	}
	else
	{
		cout << "invalid choice\n";
	}
	



	getch();
    return 0;
}


