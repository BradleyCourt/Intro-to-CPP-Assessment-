#include "Room.h"
#include "Map.h"
#include <iostream>

// Additional headers that weren't required by the class definition

Room::Room()
{
	m_textOnEnter = "";
	
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

int Room::getPositionx()
{
	return m_xCoord;
}

int Room::getPositiony()
{
	return m_yCoord;
}


void Room::setPosition(int x, int y)
{
	m_xCoord = x;
	m_yCoord = y;
}

void Room::TakeInput()
{
	//Do nothing
}

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

