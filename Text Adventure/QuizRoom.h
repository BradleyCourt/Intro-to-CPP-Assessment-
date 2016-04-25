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

private:
	static int Correct;

};

