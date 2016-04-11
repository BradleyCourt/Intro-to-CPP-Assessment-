#pragma once
#include "Room.h"

class PuzzleRoom :
	public Room
{
public:
	PuzzleRoom();
	virtual ~PuzzleRoom();
	void TakeInput();
	bool RoomDone = false;
	//virtual void CorrectAnswers();
	int GetCorrect();
	Room::Money;
private:
	static int Correct;
};



