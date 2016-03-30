#pragma once
#include <vector>
#include "Room.h"
#include "startRoom.h"
#include "puzzleRoom1.h"
class Map
{
public:
	Map();
	virtual ~Map();
	
	virtual void UpdateMap(int currentRoom);

	void initialize()
	{
		{
			startRoom *tempRoom = new startRoom();
			tempRoom->setPosition(0, 0);
			
			m_map.push_back(tempRoom);
		}
		{
			puzzleRoom1 *tempRoom = new puzzleRoom1();
			tempRoom->setPosition(1, 0);
			tempRoom->setEnterText("die");
			m_map.push_back(tempRoom);
		}
		{
			//Third room here

		}
	}
	std::vector<Room*> pointerToVect() {
		return m_map;
	}

	enum MapName
	{
		STARTROOM,
		PUZZLE1
	};
protected:
	// Rooms[3][3];
	std::vector<Room*> m_map;
	

};

