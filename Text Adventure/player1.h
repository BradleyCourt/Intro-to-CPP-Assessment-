#pragma once
#include "Character.h"
#include <iostream>
#include "String.h"

using namespace std;

class Player1: public Character
{
public:
	void attack(Character& target);

	Player1();
	~Player1();
};

