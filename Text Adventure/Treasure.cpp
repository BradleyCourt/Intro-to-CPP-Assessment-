#include "Treasure.h"
#include <chrono>
#include <iostream>
#include <conio.h>
#include "String.h"
using namespace std::chrono;
Treasure::Treasure()
{
//	loot();
}


Treasure::~Treasure()
{
}
void Treasure::TakeInput()
{
	if (QuizRoom::GetCorrect() == 5)
	{ 
	int tempMoney = 0;
	int timesLooted = 0;
	char userInput[50];
	std::cout << "Congrats on getting all of those Quiz questions correct, it's like you've done this before?";
	std::cout << "\n As your reward for every time you type loot, i'll chuck in an extra $250 for you, but you";
	std::cout << " only have 10 seconds to do so, so be quick!";
	bool stillTimeLeft = true;
	int timeLimit = 10;
	std::cout << "Press the space bar when you are ready to begin." << std::endl;
	while (true)
	{
		if (getch() == 32)
		{
			std::cout << "Starting the timer, get looting" << std::endl;
			break;
		}
	}
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	while (stillTimeLeft == true)
	{
		high_resolution_clock::time_point t2 = high_resolution_clock::now();
		auto duration = duration_cast<seconds>(t2 - t1).count();
		//std::cout << duration << std::endl;
		String input1 = "loot";
		std::cin >> userInput;
		if (duration < timeLimit)
		{
			if (input1.compare(userInput) == 0)
			{
				std::cout << "You got monies" << std::endl;
				tempMoney += 250;
				std::cout << '\n' << tempMoney;

			}
			timesLooted++;
		}
		else
		{
			//no time left
			std::cout << '\n' << "You ran out of time!" << std::endl;
			std::cout << "you looted a total of " << timesLooted << " times and earnt $" << tempMoney << " your total amount of money is now ";
			Money += tempMoney;
			std::cout << Money;
			std::cout << "\n the next room is to the North";
		}

			break;
		}
	}
	else
	{
		std::cout << "nice try in the quiz room but no treasure for you, better luck next time aha, proceed to the North";
	}
}