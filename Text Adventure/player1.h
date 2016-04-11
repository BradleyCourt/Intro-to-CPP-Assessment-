#pragma once
#include "Character.h"
#include <iostream>
#include "String.h"
#include <vector>
#include "Player1.h"
#include "Room.h"
using namespace std;

class Player1: public Character
{
public:
	void nextRoom(int col, int row, std::vector<Room*> m_map);
	void attack(Character& target);
	int getCoordX();
	int getCoordY();

	Player1();
	~Player1();

protected:
	int m_Col = 0;
	int m_Row = 0;
};

