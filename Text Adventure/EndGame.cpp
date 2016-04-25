#include "EndGame.h"
#include <iostream>


EndGame::EndGame()
{
}


EndGame::~EndGame()
{
}

void EndGame::TakeInput()
{
	system("CLS");
	std::cout << "congratulations on escaping, you got out of here with " << GetMoney() << " Well done";
}