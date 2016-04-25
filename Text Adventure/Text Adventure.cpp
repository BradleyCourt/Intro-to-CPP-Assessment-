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
#include "Treasure.h"
#include "startRoom.h"
#include "Text Adventure.h"
#include "PuzzleRoom1.h"
using namespace std;

int main()
{
	Map map;
	Player player; // inherited from character
	//srand(time(NULL));
	int temp;
	map.initialize();
	//map.UpdateMap(0);

	bool playing = true;



	//map.at(0)->Introduction();
	//map.at(currentRoom())->Introduction()
	{

		/* map.pointerToVect().at(0)->TakeInput();*/

		String test;

		while (playing == true)
		{
			map.m_map.at(player.currentRoom(map.m_map))->TakeInput();
			player.move(map);
			
		}

	}
	
	getch();
	return 0;
}