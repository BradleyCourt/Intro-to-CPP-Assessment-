#pragma once
#include "Room.h"
class StartRoom : public Room
{
public:
	StartRoom();
	virtual ~StartRoom();

	void TakeInput();

//	virtual void introduction();


	virtual void UpdateMap(int &currentRoom);
};

