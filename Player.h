//has the code to move the player around
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "structs.h"
#ifndef Player_H
#define Player_H
using namespace std;
class Player
{
public:
	Player(int row, int col);
	Player() = default;
	void setPosition(int row, int col);
	int getRow() const;
	int getCol() const;
	char getSymbol() const;
	bool isAlive() const;
	void setAsDead();
	void move(Movement delta);
private:
	Position playerpos;
	int row, col;
	bool alive;
	char symbol;
};

#endif