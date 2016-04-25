#include "PuzzleRoom.h"
#include "String.h"
#include <iostream>
//int PuzzleRoom::Correct = 0;

int PuzzleRoom::Correct = 0;

PuzzleRoom::PuzzleRoom()
{
}


PuzzleRoom::~PuzzleRoom()
{
}



void PuzzleRoom::TakeInput()

{
	system("CLS");

	if (RoomDone == false)
	{
		String input1;
		std::cout << "Right then Folks, lets see how the player can stand up to this challenge, lets  start him off with something easy ehh?!!\n\n";
		//String input1("blizzard");
		std::cout << "Ok first Puzzle of the night, Unscramble the word, *zalidBzr* \nJust a friendly reminder there is no time limit for this question and the       capital letter is always the first letter!!\n\n";
		input1.setString();
		if (input1.lowerCase().compare("blizzard"))
		{
			Correct++;
			std::cout << "\n" << "Excellent work, try this one on for size!\n\n";
			AddMoney(1000);
			std::cout << "$" << GetMoney() << "\n";
			String input2;//("Murderous");
			std::cout << "\n" << "Try this out!  *oMsedurur*\n\n";
			input2.setString();
			if (input2.lowerCase().compare("murderous"))
			{
				Correct++;
				std::cout << "\nNice going 2/2! The next room is to the North, better hurry for any hope of     escaping with any cash monies";
				AddMoney(1000);
				std::cout << "\nyour total money is now $" << GetMoney() << '\n';

			}
			else
			{
				std::cout << "\n\n1/2 nice effort, 'gunna need to be better than that to survive the later rounds player. The next room is to the North, at this rate you should be paying me to  have you on this show.";
				AddMoney(500);
				std::cout << "\nyour total money is now $" << GetMoney() << '\n';
			}

		}
		else
		{
			Correct;
			std::cout << "\n" << "Oh well nice try player, try this one, you might find it a bit easier.";
			String input3;//("Windows");
			std::cout << "\n" << "Right then player lets make this word a bit easier! *wsdWnio*\n\n";
			input3.setString();
			if (input3.lowerCase().compare("windows"))
			{
				std::cout << "\n" << "nice effort, bring your A game next time, off to the next room with you, oh     yeah the next room is to the North";
				AddMoney(500);
				std::cout << "\nyour total money is now $" << GetMoney() << '\n';
			}
			else
			{
				std::cout << "\n" << "I dont know how but you failed both questions. I have no other option but to    keep you here, down in this room here to torment you for the rest of eternity, hope that little game was fun while it lasted ";
				system("PAUSE");
			}
			RoomDone = true;
		}

	}
	
	else
	{
		std::cout << "\n Get a move on you've already done this";
	}
	}

int PuzzleRoom::GetCorrect()
{
	return Correct;
}





