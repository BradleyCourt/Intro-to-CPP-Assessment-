#include "Room.h"
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

void Room::setPosition(int x, int y)
{
	m_xCoord = x;
	m_yCoord = y;
}

void Room::introduction()
{
	//Do nothing
}

void Room::puzzle()
{

}
