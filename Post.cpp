#include"Post.h"
#include"Game.h"
using namespace std;

Post::Post(int row, int col, char type)
{
	row = row;
	col = col;
	type = type;
}

int Post::getRow() const
{
	return row;
}

int Post::getCol() const
{
	return col;
}

char Post::getSymbol() const
{
	return type; 
}

bool Post::isElectrified() const
{
	char symb = getSymbol();
	if (symb == '+')
	{
		return false;
	}
	else
	{
		return true;
	}
}

