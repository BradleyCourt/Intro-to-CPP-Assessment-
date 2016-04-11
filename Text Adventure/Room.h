#pragma once
<<<<<<< HEAD

#include "String.h"

// Forward declaration to avoid recursive header include
class Map;

class Room
{
protected:
	String m_textOnEnter; // Requires String which comes from String.h
	Map* m_map;
	bool m_CanMoveNorth = true;
	bool m_CanMoveEast = true;
	bool m_CanMoveSouth = true;
	bool m_CanMoveWest = true;
=======
#include "String.h"
class Room
{
protected:
	String m_textOnEnter;

>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
public:
	Room();
	~Room();
	int m_xCoord;
	int m_yCoord;

	String* enterText();
	void setEnterText(char* str);
<<<<<<< HEAD
	int getPositionx();
	int getPositiony();
	void setPosition(int x, int y);
	
	virtual void TakeInput();
	virtual void Introduction();
	virtual void Puzzle();
	virtual void Quiz();
	void Treasure();
	bool CanMoveNorth();
	bool CanMoveEast();
	bool CanMoveSouth();
	bool CanMoveWest();
	int Money = 0;

=======
	void setPosition(int x, int y);

	enum MapName
	{
		STARTROOM,
		PUZZLE1
	};
	
	virtual void introduction();
	virtual void puzzle();
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
};

