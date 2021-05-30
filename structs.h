#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#ifndef structs_H
#define structs_H
using namespace std;

struct Position
{
	int row, col;
};

struct Movement
{
	int dRow, dCol; // displacement, taking into account the chosen movement
};

#endif