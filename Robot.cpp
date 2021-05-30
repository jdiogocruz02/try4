#include "Robot.h"
using namespace std;


Robot::Robot(int x, int y,char symbol)
{
	row = x;
	col = y;
}

Position Robot::getPosition()
{
	Position pos;
	pos.row = row;
	pos.col = col;
	return pos;
}


void Robot::setPosition(int x,int y)
{
	row = x;
	col = y;
}



void Robot::setAsDead(int id)
{
	symbol = 'r';
	counter--;
	if (counter == 0)
	{
		cout << "All robots have died!Now find the exit and be free! :3" << endl;
	}
}

int Robot::getRow()
{
	return row;
}

int Robot::getCol()
{
	return col;
}

char Robot::getSymbol()
{
	return symbol;
}
void Robot::robotcounter()
{
	counter += 1;
}
