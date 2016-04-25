#include "Room.h"
#include "Map.h"
#include <iostream>

// Additional headers that weren't required by the class definition
int Room::Money = 0;

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
void Room::setPositiony(int y)
{
	m_yCoord = y;
}
void Room::setPositionx(int x)
{
	m_xCoord = x;
}


void Room::setPosition(int x, int y)
{
	m_xCoord = x;
	m_yCoord = y;
}

void Room::AddMoney(int amount)
{
	Money += amount;
}



void Room::TakeInput()
{

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

int Room::GetMoney()
{
	return Money;
}


