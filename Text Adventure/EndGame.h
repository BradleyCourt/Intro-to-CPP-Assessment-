#pragma once
#include "Room.h"
class EndGame :
	public Room
{
public:
	EndGame();
	virtual ~EndGame();
	void TakeInput();
};

