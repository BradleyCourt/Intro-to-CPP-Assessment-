#pragma once
#include <vector>
#include "Room.h"


class Player: public Character
{
public:
	void nextRoom(int col, int row, std::vector<Room*> m_map);

	int FindRoom(std::vector<Room*> m_map);

	void move(Map map);

	void attack(Character& target);
	int getCoordX();
	int getCoordY();
	int money = 0;
	Player();
	~Player();

protected:
	int m_Col = 0;
	int m_Row = 0;
};

