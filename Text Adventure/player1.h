#pragma once

class Player
{
	char m_name[20];
	int m_score = (0);
public:
	void SetName(char name[20]);
	char GetName();

	int SetScore(int score);

};

