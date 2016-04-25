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
	int Correct = 0;
	if (PuzzleRoom::GetCorrect() == 2)
	{
		system("CLS");
		// harder questions
		std::cout << "Seeings you did well in the last puzzle room you will face somewhat similar puzzles, but they will be much harder! good luck :^)";
		std::cout << "\nFirst we will start with something you remember try unscrambling this \n monstrosity *itesenbesmA* \n";
		String input1;
		input1.setString();
		if (input1.lowerCase().compare("absenteeism"))
		{
			system("CLS");
			AddMoney(1000);
			GetMoney();
			Correct++;
			std::cout << "\nNice i didnt think youd actually get that one lets try something different";
			std::cout << '\n' << Correct << " / 3";

		}
		else
		{
			system("CLS");
			std::cout << "\nnice try, theres still 2 more questions to come";
			std::cout << '\n' << Correct << " / 3";
		}
		std::cout << "\nhow about a math question, those are fun always, find the formula and tell me whats next in this sequence of numbers *3,5,24*"; // squared minus 1
		String input2;
		input2.setString();
		if (input2.lowerCase().compare("575"))
		{
			system("CLS");
			AddMoney(1000);
			GetMoney();
			Correct++; 
			std::cout << "\ngreat job, im starting to get impressed";
			std::cout << '\n' << Correct << " / 3";
		}
		else
		{
			system("CLS");
			std::cout << "\nno big deal that was a pretty hard question, but the hardest is yet to come";
			std::cout << '\n' << Correct << " / 3";
		}
		std::cout << "\nfinal question, youll need to think about this one, tis a riddle";
		std::cout << "\nno matter how hard you look at my face, you wont find 13, what am i/n";
		String input3;
		input3.setString();
		if (input3.lowerCase().compare("clock"))
		{
			system("CLS");
			AddMoney(1000);
			GetMoney();
			Correct++;
			std::cout << "\nnice i knew you had it in you";
			std::cout << '\n' << Correct << " / 3";
		}
		else
		{
			system("CLS");
			std::cout << "nice attempt twas pretty hard";
			std::cout << '\n' << Correct << " / 3";
		}
		std::cout << "that was pretty difficult exit is to your east, nice going.";
	}
	else 
	{
		system("CLS");
		std::cout << "\nTime for another puzzle room, you didnt get all the questions last time, so i'll keep it simple this time around";
		std::cout << "\nwe shall revisit the word unsrambling, try this out, *eifDen*";
		String input4;
		input4.setString();
		if (input4.lowerCase().compare("define"))
		{
			system("CLS");
			AddMoney(500);
			GetMoney();
			Correct++;
			std::cout << "\ngood start keep it up";
			std::cout << '\n' << Correct << " / 3";
		}
		else
		{
			system("CLS");
			std::cout << "\nIts only gunna get harder!";
			std::cout << '\n' << Correct << " / 3";
		}
		std::cout << "\nsimilar to the first question, but a bit harder, hope you got the other one right, cause this ones tricky";
		std::cout << "\ntryy unscrambling this *tinoaerapO*";
		String input5;
		input5.setString();
		if (input5.lowerCase().compare("operation"))
		{
			system("CLS");
			AddMoney(500);
			GetMoney();
			Correct++;
			std::cout << "\nNice I knew you had it in you!";
			std::cout << '\n' << Correct << " / 3";
		}
		else
		{
			system("CLS");
			std::cout << "\nNice try, try to redeem yourself on the last question";
			std::cout << '\n' << Correct << " / 3";
		}
		std::cout << "\ntime for a random question, what is the name of the number with 15 zeros?";
		String input6;
		input6.setString();
		if (input6.lowerCase().compare("quadrillion"))
		{
			system("CLS");
			AddMoney(500);
			GetMoney();
			Correct++;
			std::cout << "\nSweet!";
			std::cout << '\n' << Correct << " / 3";
		}
		else 
		{
			system("CLS");
			std::cout << "\nBetter luck next time";
			std::cout << '\n' << Correct << " / 3";
		}
		std::cout << "well done, the exit is east, good one";
	}
}
