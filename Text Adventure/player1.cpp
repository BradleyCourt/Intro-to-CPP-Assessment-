#include "player1.h"
#include <iostream>

void Player::SetName(char name[20])
{
	strcpy(m_name, name);
}
char Player::GetName()
{
	return 0;
}
char* GetName(char name[])
{
	return name;
};

int Player::SetScore(int score = 0)
{
	m_score = score;
	return score;
}