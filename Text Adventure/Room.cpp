#include "Room.h"
<<<<<<< HEAD
#include "Map.h"
#include <iostream>

// Additional headers that weren't required by the class definition

Room::Room()
{
	m_textOnEnter = "";
	
=======
Room::Room()
{
	m_textOnEnter = "";
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
}


Room::~Room()
{
}

String* Room::enterText()
{
	return &m_textOnEnter;
}

void Room::setEnterText(char* str)
{
	m_textOnEnter = str;
}

<<<<<<< HEAD
int Room::getPositionx()
{
	return m_xCoord;
}

int Room::getPositiony()
{
	return m_yCoord;
}


=======
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
void Room::setPosition(int x, int y)
{
	m_xCoord = x;
	m_yCoord = y;
}

<<<<<<< HEAD
void Room::TakeInput()
=======
void Room::introduction()
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
{
	//Do nothing
}

<<<<<<< HEAD
void Room::Introduction()
{
	
}

void Room::Puzzle()
{

}

void Room::Quiz()
{

}
void Room::Treasure()
{

}

bool Room::CanMoveNorth()
{
	return m_CanMoveNorth;
}

bool Room::CanMoveEast()
{
	return m_CanMoveEast;
}

bool Room::CanMoveSouth()
{
	return m_CanMoveSouth;
}

bool Room::CanMoveWest()
{
	return m_CanMoveWest;
}

=======
void Room::puzzle()
{

}
>>>>>>> 4b066a34e51bbf364627a58ab02a098bec47653b
