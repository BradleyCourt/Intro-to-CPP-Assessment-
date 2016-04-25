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
	std::cout << "You passed my puzzle room pretty easily, but can you stand the heat of my quiz  room?\n";
	std::cout << "\nThere are 5 questions in total can you muster your brain power to get all 5     right? if so they might be something in it for you\n";
	std::cout << "\nRight lets begin, Question 1 What piece in chess has the least value?\n\nBishop\nRook\nPawn\n";
	String input1;
	input1.setString();
	if (input1.lowerCase().compare("pawn"))
	{
		system("CLS");
		Correct++;
		std::cout << "Correct, Onto the second question!\n";
		totalScore++; 
		std::cout << "\n" << totalScore << " / 1\n";
		AddMoney(500);
		std::cout << "$" << GetMoney();
	}
	else
	{
		system("CLS");
		std::cout << "Nice try, try the next one!\n";
	}
	String input2;
	std::cout << "\nQuestion 2 What is the name of the main antagonist in the mario franchise?\nKamek\nBowser\nGoomba\n";

	input2.setString();
	if (input2.lowerCase().compare("bowser"))
	{
		system("CLS");
		Correct++;
		std::cout << "Correct, Onto the Third question!\n";
		totalScore++;
		std::cout << "\n" << totalScore << " / 2\n";
		AddMoney(500);
		std::cout << "$" << GetMoney() << "\n";
	}
	else
	{
		system("CLS");
		std::cout << "\n" << "Nice try, the next one!\n";
	}
	String input3;
	std::cout << "\nQuestion 3 What is the name of playstations marsupial mascot?\nCrash\nCoco\nSteve\n";
	input3.setString();
	if (input3.lowerCase().compare("crash"))
	{
		system("CLS");
		Correct++;
		std::cout << "\nCorrect, Onto the Fourth question!  \n";
		totalScore++;
		std::cout << "\n" << totalScore << " / 3\n";
		AddMoney(500);
		std::cout << "$" << GetMoney() << "\n";
	}
	else
	{
		system("CLS");
		std::cout << "Nice try, the next one!\n";
	}
	
	std::cout << "\nQuestion 4, The OUYA isnt a well known console amongst gamers, but who made it?\nAndroid\nApple\nSony\nMicrosoft\n";
	String input4;
	input4.setString();
	if (input4.lowerCase().compare("android"))
	{
		system("CLS");
		Correct++;
		std::cout << "\nCorrect, Onto the Last question!  \n";
		totalScore++;
		std::cout << "\n" << totalScore << " / 4 \n";
		AddMoney(500);
		std::cout << "$" << GetMoney() << "\n";
	}
	else
	{
		system("CLS");
		std::cout << "Nice attempt, that was a hard question, onto the grand finale\n";
	}
	std::cout << "\nFinal Question!, Which character does this quote originate from, *Show me your moves!*\nBloodFalcon\nCaptainFalcon\nFox\nMario\n";
	String input5;
	input5.setString();
	if (input5.lowerCase().compare("captainfalcon"))
	{
		system("CLS");
		Correct++;
		std::cout << "\nWell done! you completed the Quiz\n";
		totalScore++;
		AddMoney(500);
		std::cout << "$" << GetMoney() << "\n";
		std::cout << "Your total score was" << totalScore << " / 5";
	}
	else
	{
		system("CLS");
		std::cout << "\nYour total score was" << totalScore << " / 5";
	}
	if (totalScore == 5)
	{
		std::cout << "\nWell done your preformance in the quizzing room has opened up the treasure room for you\nHead to the east\n";
		std::cout << "\nyour total money is now $" << GetMoney() << '\n';
	}
	else
	{
		std::cout << "\nnice attempt east is the way to go now, but you dont get access to the bonuses  in that room\n";
		std::cout << "\nyour total money is now $" << GetMoney() << '\n';
	}

}

int QuizRoom::GetCorrect()
{
	return Correct;
}
