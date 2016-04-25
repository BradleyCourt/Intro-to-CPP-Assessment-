#pragma once
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

public:
	Room();
	~Room();
	int m_xCoord;
	int m_yCoord;

	String* enterText();
	void setEnterText(char* str);
	
		int getPositionx();
	int getPositiony();
	void setPositiony(int y);
	void setPositionx(int x);
	void setPosition(int x, int y);
	void AddMoney(int amount);

	virtual void TakeInput();
	virtual void Introduction();
	virtual void Puzzle();
	virtual void Quiz();

	void Treasure();
	bool CanMoveNorth();
	bool CanMoveEast();
	bool CanMoveSouth();
	bool CanMoveWest();
	int GetMoney();
	int MoneyTotal = 0;
private:
	static int Money;
};

