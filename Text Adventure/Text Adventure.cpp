#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Text Adventure.h"
#include "player1.h"
#include "String.h"
#include <fstream>
using namespace std;


int notmain()

{	

	

String anything = " IT'S ";
String anythingp2 = "yOu...";
String anythingp3 = "oh";
String anythingp4 = "Substring Test";

//anything.setString(); //works when append and prepend are commented out

anything.append(anythingp2);
anything.prepend(anythingp3);

//anything.stringReplace("oh", "Hello");



//String test = "testing replace string testing";
//
//test.stringReplace("testing", "workingnow");
//
//test.print();
// what your lookin foor "oh" what your replacing with "pi"

cout << anything.getCharacter(3) << " get character" <<'\n';
 cout << anything.length() << " get length" << '\n';


	
cout << (anything.lowerCase()).getString() << " lowercase" << endl;
cout << (anything.upperCase()).getString() << " uppercase" << endl;


cout << anything.subStringCheck("oh") << " substring check \n";
cout << anything.subStringCheckIndex("yOu", 0) << "substring check index\n";
//cout << "here";





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
	cout << "Your adventure begins in a deep dark dungeon, there is barely enough light to look around the pleace, you manage to sport an exit towards the right, there seems to be no other way out\n";
	cin >> userInput;

	//cout << userInput << endl

	// Is userInput == "right"
	if (strcmp(userInput, "right") == 0) // option 1 right
	{
		system("CLS");
		cout << "You enter the room " << endl << endl; // fallen tree, path is blocked
	}
	else
		{
			cout << "thats not a valid choice m9";
			getch();
		}
	
	cin >> userInput;
	 if (strcmp(userInput, "left") == 0)// option 1 left
	{

		system("CLS");
		cout << " you look deep into the well, unfortunately you look a bit too deep and fall    in, some water and debris break your fall" << endl << endl; // well and abandoned house
	}
	else if (strcmp(userInput, "right") == 0) // option 2 right
	{
		system("CLS");
		cout << "You entered the abandoned house, you ponder to yourself why you would enter such a place" << endl << endl;
	}
	else if (strcmp(userInput, "forward") == 0)// option 2 forward
	{
		system("CLS");
		cout << "you walk up and onto the asphalt road like a complete idiot, and got hit by a   car, good going your dead" << endl << endl; //DEATH
	}
	else
	{
		cout << "thats not a valid choice m9";
	}


	



	getch();
    return 0;
}


