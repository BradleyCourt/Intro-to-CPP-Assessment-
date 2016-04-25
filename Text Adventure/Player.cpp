#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "String.h"
#include <fstream>
#include "Character.h"
#include "Player.h"
#include <time.h>
#include "Room.h"
#include "Map.h"
#include <vector>
#include "StartRoom.h"
#include "Text Adventure.h"
#include "PuzzleRoom.h"
#include "QuizRoom.h"

using namespace std;


Player::Player()
{
	
}


Player::~Player()
{
}

Map map;
Player player; // inherited from character


void Player::nextRoom(int col, int row, std::vector<Room*> m_map)
{
	int vectorIndex = -1;
	for (unsigned int i = 0; i < m_map.size(); i++)
	{
		if ((m_map.at(i))->m_xCoord == col && (m_map.at(i))->m_yCoord == row)
		{
			//found a match
			vectorIndex = i;
			break;
		}
	}
	if (vectorIndex == -1) {
		//error found, room doesnt exist
		//message stating error
		cout << "Cant go this way\n";
	}
	else
	{
		m_Col = col;
		m_Row = row;
		std::cout << (m_map.at(vectorIndex)->enterText())->getString() << std::endl;
	}
}

int Player::currentRoom(std::vector<Room*> m_map)
{
	int vectorIndex = -1;
	for (unsigned int i = 0; i < m_map.size(); i++)
	{
		if ((m_map.at(i))->m_xCoord == m_Col && (m_map.at(i))->m_yCoord == m_Row)
		{
			//found a match
			vectorIndex = i;
			break;
		}
	}
	return vectorIndex;
}
//void getLocation(Map m)
//{
//	unsigned int getLoc = -1;
//	for (unsigned int i = 0; i < Ro; i++)
//	{
//
//	}
//}



int Player::FindRoom(std::vector<Room*> m_map)
{
	int vectorIndex = -1;
	for (unsigned int i = 0; i < m_map.size(); i++)
	{
		if ((m_map.at(i))->m_xCoord == getCoordX() && (m_map.at(i))->m_yCoord == getCoordY())
		{
			//found a match
			vectorIndex = i;
			break;
		}
	}
	return vectorIndex;
}

void Player::move(Map map)
{
	char userInput[50];

	String input1 = ("North");

	while (true)
	{
		input1.setString();
		if (input1.lowerCase().compare("north"))
		{
			//	if ((map.pointerToVect()).at(FindRoom(map.pointerToVect())).allowMoveNorth() == true)
			nextRoom((getCoordX()), (getCoordY() + 1), map.pointerToVect());
			break;
		}
		if (input1.lowerCase().compare("east"))
		{
			nextRoom((getCoordX() + 1), (getCoordY()), map.pointerToVect());
			//map.pointerToVect()[Map::MapName::PUZZLE1]->Puzzle();
			break;
		}
		if (input1.lowerCase().compare("south"))
		{
			nextRoom((getCoordX()), (getCoordY() - 1), map.pointerToVect());
			break;
		}
		if (input1.lowerCase().compare("west"))
		{
			nextRoom((getCoordX() - 1), (getCoordY()), map.pointerToVect());
			break;
		}
		std::cout << "type in a valid answer \n";
	}
}

	int Player::getCoordX()
	{
		return m_Col;
	}

	int Player::getCoordY()
	{
		return m_Row;
	}
