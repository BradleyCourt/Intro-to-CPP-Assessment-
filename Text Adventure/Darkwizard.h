#pragma once
#include "Character.h"
#include <iostream>
#include "String.h"


using namespace std;

class Darkwizard: public Character
{
public:
	void attack(Character& target);
	
	Darkwizard();
	~Darkwizard();
};

