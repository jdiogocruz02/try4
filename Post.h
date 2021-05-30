//differentiates if post good or post very bad
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#ifndef Post_H
#define Post_H


class Post {
public:
	Post(int row, int col, char type);
	int getRow() const;
	int getCol() const;
	char getSymbol() const; // get char representation of Post
	bool isElectrified() const;
	//other methods
private:
	int row, col;
	char type;
};

#endif