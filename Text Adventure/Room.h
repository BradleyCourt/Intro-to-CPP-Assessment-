#pragma once
#include "String.h"
class Room
{
protected:
	String m_textOnEnter;

public:
	Room();
	~Room();
	int m_xCoord;
	int m_yCoord;

	String* enterText();
	void setEnterText(char* str);
	void setPosition(int x, int y);

	enum MapName
	{
		STARTROOM,
		PUZZLE1
	};
	
	virtual void introduction();
	virtual void puzzle();
};

