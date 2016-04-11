#include "puzzleRoom1.h"
#include "String.h"
#include <iostream>



puzzleRoom1::puzzleRoom1()
{
}


puzzleRoom1::~puzzleRoom1()
{
}
void puzzleRoom1::puzzle()
{
	char puzzleAnswer[50];
	std::cout << "Right then Folks, lets see how the player can stand up to this challenge, lets start him off with something easy ehh?!!\n";
	String input1("Blizzard");
	std::cout << "Ok first puzzle of the night, Unscramble the word, *zalidBzr* \n Just a friendly reminder there is no time limit for this question and the capital letter is always the first letter!!";
	std::cin >> puzzleAnswer;
	if (input1.compare(puzzleAnswer) == 0)
	{
		std::cout << "\n" << "Excellent work, try this one on for size!";
		String input2("Murderous");
		std::cout << "\n" << "Try this out!  *oMsedurur*";
		std::cin >> puzzleAnswer;
		if (input2.compare(puzzleAnswer) == 0)
		{
			std::cout << "Nice going 2/2! The next room is to the North, better hurry for any hope of escaping with any cash monies";
		}
		else
		{
			std::cout << "1/2 nice effort, 'gunna need to be better than that to survive the later rounds player. The next room is to the North, at this rate you should be paying me to have you on this show.";
		}

	}
	else
	{
		std::cout << "\n" << "Oh well nice try player, try this one, you might find it a bit easier.";
		String input3("Windows");
		std::cout << "\n" << "Right then player lets make this word a bit easier! *wsdWnio*";
		std::cin >> puzzleAnswer;
		if (input3.compare(puzzleAnswer) == 0)
		{
			std::cout << "\n" << "nice effort, bring your A game next time, off to the next room with you, oh yeah the room is to the North";
		}
		else
		{
			std::cout << "\n" << "I dont know how but you failed both questions. I have no other option but to keep you here, down in this room here to torment you for the rest of eternity, hope that little game was fun while it lasted";
			system("PAUSE");
		}
	}



}