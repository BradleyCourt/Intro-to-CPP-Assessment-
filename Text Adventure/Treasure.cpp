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
	system("CLS");
	if (QuizRoom::GetCorrect() == 5)
	{
		int tempMoney = 0;
		int timesLooted = 0;
		std::cout << "Congrats on getting all of those Quiz questions correct, it's like you've done this before?";
		std::cout << "\nAs your reward for every time you type loot, i'll chuck in an extra $250 for you, but you";
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
		//	std::cout << duration << " seconds have gone by" << std::endl;
			String input1;
			input1.setString();

			if (duration < timeLimit)
			{
				
				if (input1.lowerCase().compare("loot"))
				{
					std::cout << "$";
					tempMoney += 250;
					std::cout << tempMoney << '\n';

				}
				timesLooted++;
			}
			else
			{
				//no time left
				std::cout << '\n' << "You ran out of time!" << std::endl << '\n';
				std::cout << "\n you looted a total of " << timesLooted << "\ntimes and earnt $" << tempMoney << "\nyour total amount of money is now ";
				AddMoney(tempMoney);
				std::cout << GetMoney();
				std::cout << "\n the next room is to the North\n";
			}
			if (duration >= timeLimit) 
			{
				stillTimeLeft = false;
			}
		}
	}
	
	else
	{
		std::cout << "nice try in the quiz room but no treasure for you, better luck next time aha, proceed to the North";
	}
}