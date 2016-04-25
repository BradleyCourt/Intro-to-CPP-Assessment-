#pragma once
#include "Room.h"

class QuizRoom :
	public Room
{
public:
	QuizRoom();
	virtual ~QuizRoom();
	int GetCorrect();
	void TakeInput();
	
	//virtual void Quiz();
	//Room::Money;
private:
	static int Correct;

};

