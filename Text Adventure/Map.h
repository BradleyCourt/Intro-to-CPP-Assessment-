#pragma once
#include <vector>
#include "Room.h"
<<<<<<< HEAD
#include "StartRoom.h"
#include "PuzzleRoom.h"
#include "QuizRoom.h"
#include "Treasure.h"
#include "SecondPuzzleRoom.h"
=======
#include "startRoom.h"
#include "puzzleRoom1.h"
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
class Map
{
public:
	Map();
	virtual ~Map();
<<<<<<< HEAD
	std::vector<Room*> m_map;
=======
	
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
	virtual void UpdateMap(int currentRoom);

	void initialize()
	{
		{
<<<<<<< HEAD
			StartRoom *tempRoom = new StartRoom();
			tempRoom->setPosition(0, 0);
			tempRoom->setEnterText("Room 1* - Start Room!\n You've already been here? get moving!");
			m_map.push_back(tempRoom);
		}
		{
			PuzzleRoom *tempRoom = new PuzzleRoom();
			tempRoom->setPosition(1, 0);
			tempRoom->setEnterText("Room 2* - Puzzle Room!\n");
			m_map.push_back(tempRoom);
		}
		{
			QuizRoom *tempRoom = new QuizRoom();
			tempRoom->setPosition(1, 1);
			tempRoom->setEnterText("Room 3* - Quiz Room");
			m_map.push_back(tempRoom);
		}
		{
			Treasure *tempRoom = new Treasure();
			tempRoom->setPosition(2, 1);
			tempRoom->setEnterText("Room 4* - Treasure Room");
			m_map.push_back(tempRoom);
		}
		{
			SecondPuzzleRoom * tempRoom = new SecondPuzzleRoom();
			tempRoom->setPosition(2, 2);
			tempRoom->setEnterText("Room 5* - Second Puzzle Room");
			m_map.push_back(tempRoom);
		}
	}
	std::vector<Room*> pointerToVect()
	{
=======
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
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
		return m_map;
	}

	enum MapName
	{
		STARTROOM,
<<<<<<< HEAD
		PUZZLE1,
		QUIZ1,
		TREASURE,
		PUZZLE2
	};
protected:
	// Rooms[3][3];

=======
		PUZZLE1
	};
protected:
	// Rooms[3][3];
	std::vector<Room*> m_map;
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
	

};

