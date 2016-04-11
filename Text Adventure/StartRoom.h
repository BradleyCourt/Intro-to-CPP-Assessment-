#pragma once
#include "Room.h"
class startRoom : public Room
{
public:
	startRoom();
	virtual ~startRoom();

	virtual void introduction();


	virtual void UpdateMap(int &currentRoom);
};

