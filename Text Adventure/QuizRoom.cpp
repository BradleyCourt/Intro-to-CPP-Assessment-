#include "QuizRoom.h"
#include "String.h"
#include <iostream>
#include <Windows.h>

int QuizOver =1;
char QuizAnswer;
int totalScore = 0;
int QuizRoom::Correct = 0;

QuizRoom::QuizRoom()
{

}


QuizRoom::~QuizRoom()
{
}
void QuizRoom::TakeInput()
{
	system("CLS");

	char Answer[50];
	std::cout << "You may have made it through that Puzzle room, but can you stand the heat of the QUIZ ROOOOM, I will ask you question and all you have to do is answer as many as you can correctly in the time lot given, simple enough?";
	std::cout << "\n there are 5 questions in total can you muster your brain power to get all 5 right? if so they might be something in it for you";
	std::cout << "ok lets begin, Question 1 What piece in chess has the least value? \n Bishop \n Rook \n Pawn \n";
	String answer1 = "Pawn";
	std::cin >> Answer;
	if (answer1.compare(Answer) == 0)
	{
		system("CLS");
		Correct++;
		std::cout << "Correct, Onto the second question!\n";
		totalScore++; 
		std::cout << "\n" << totalScore << " / 1\n";
		Money += 500;
		std::cout << "$" << Money;
	}
	else
	{
		system("CLS");
		std::cout << "Nice try, try the next one!\n";
	}
	String answer2 = "Bowser";
	std::cout << "Question 2 What is the name of the main antagonist in the mario franchise? \n Kamek\n Bowser\n Goomba\n";
	std::cin >> Answer;

	if (answer2.compare(Answer) == 0)
	{
		system("CLS");
		Correct++;
		std::cout << "Correct, Onto the Third question!\n";
		totalScore++;
		std::cout << "\n" << totalScore << " / 2\n";
		Money += 500;
		std::cout << "$" << Money << "\n";
	}
	else
	{
		system("CLS");
		std::cout << "\n" << "Nice try, the next one!\n";
	}
	String answer3 = "Crash";
	std::cout << "Question 3 What is the name of playstations marsupial mascot? \n Crash \n Coco \n Steve\n";
	std::cin >> Answer;

	if (answer3.compare(Answer) == 0)
	{
		system("CLS");
		Correct++;
		std::cout << "\nCorrect, Onto the Fourth question!  \n";
		totalScore++;
		std::cout << "\n" << totalScore << " / 3\n";
		Money += 500;
		std::cout << "$" << Money << "\n";
	}
	else
	{
		system("CLS");
		std::cout << "Nice try, the next one!\n";
	}
	
	std::cout << "Question 4, The OUYA isnt a well known console amongst gamers, but who made it? \n Android \n Apple \n Sony \n Microsoft\n";
	String answer4 = "Android";
	std::cin >> Answer;
	if (answer4.compare(Answer) == 0)
	{
		system("CLS");
		Correct++;
		std::cout << "\nCorrect, Onto the Last question!  \n";
		totalScore++;
		std::cout << "\n" << totalScore << " / 4 \n";
		Money += 500;
		std::cout << "$" << Money << "\n";
	}
	else
	{
		system("CLS");
		std::cout << "Nice attempt, that was a hard question, onto the grand finale\n";
	}
	std::cout << "Final Question!!!, Which character does this quote originate from, *Show me your moves!* \n BloodFalcon\n CaptainFalcon\n Fox \n Mario\n";
	String answer5 = "CaptainFalcon";
	std::cin >> Answer;
	if (answer5.compare(Answer) == 0)
	{
		system("CLS");
		Correct++;
		std::cout << "\nWell done! you completed the Quiz\n";
		totalScore++;
		Money += 500;
		std::cout << "$" << Money << "\n";
		std::cout << "Your total score was" << totalScore << " / 5";
	}
	else
	{
		system("CLS");
		std::cout << "\nYour total score was" << totalScore << " / 5";
	}
	if (totalScore == 5)
	{
		std::cout << "\nTreasure room unlocked!!";
	}

}

int QuizRoom::GetCorrect()
{
	return Correct;
}
