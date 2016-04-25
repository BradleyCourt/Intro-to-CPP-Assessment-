#pragma once
#include "Room.h"
#include "QuizRoom.h"
class Treasure :
	public QuizRoom
{
public:
	Treasure();
	virtual ~Treasure();
	void TakeInput();

};

