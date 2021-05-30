//moves the robots after the player
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "structs.h"
#include <vector>
#ifndef Robot_H
#define Robot_H


class Robot {
public:
	Robot(int x, int y,char symbol);
	Position getPosition();
	void setPosition(int x, int y);
	void setAsDead(int id);
	char getSymbol();
	int getRow();
	int getCol();
	void robotcounter();
private:
	int counter;
	int id;
	int row, col;
	char symbol;
};

#endif