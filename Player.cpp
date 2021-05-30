#include "Player.h"
using namespace std;

Player::Player(int row, int col)
{
	row = row;
	col = col;
}

int Player::getRow() const
{
	return row;
}

int Player::getCol() const
{
	return col;
}

char Player::getSymbol() const
{
	return 'H';
}

bool Player:: isAlive() const
{
	return (getSymbol() == 'H');
}

void Player::setAsDead()
{
	symbol = 'h';
}

void Player::setPosition(int row, int col)
{
	row = row;
	col = col;
}

void Player::move(Movement delta)
{
	row += delta.dRow;
	col += delta.dCol;
}

