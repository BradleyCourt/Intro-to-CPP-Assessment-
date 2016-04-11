#include "SecondPuzzleRoom.h"

#include <iostream>


SecondPuzzleRoom::SecondPuzzleRoom()
{
	//std::cout << Correct;
}

SecondPuzzleRoom::~SecondPuzzleRoom()
{
}

void SecondPuzzleRoom::TakeInput()
{
	if (PuzzleRoom::GetCorrect() == 2)
	{
		// harder questions
		std::cout << "Seeings you did well in the last puzzle room you will face somewhat similar puzzles, but they will be much harder! good luck :^)";
		char PuzzleAnswer[50];
	}
	else
	{
		std::cout << "not working yet";
		// easier questions
	}
}
//int SecondPuzzleRoom::Correct()
//{
//	return 0;
//}
//
//void SecondPuzzleRoom::RunRoom()
//{
//	if(Correct == 2)
//}