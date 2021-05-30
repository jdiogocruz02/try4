//is the law,enforces police brutality
//reads initial maze
//has player and maze attributes and a robot data structure
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <thread>
#include <chrono>
#include "Player.h"
#include "Robot.h"
#include "Maze.h"
#include "Post.h"
#ifndef Game_H
#define Game_H


class Game {
public:
	Game(const string& filename);
	Game() = default;
	bool play(); 
	void moveRobots();
	void winners(std::chrono::steady_clock::time_point end, std::chrono::steady_clock::time_point start);
private:
	void showGameDisplay() const;
	bool isValid();
	vector<vector<char>>mazeo;
	Maze maze;
	Player player;
	Position expos;
	vector<Robot> robots;
	vector<Post> posts;
	vector<Position> exits;
	//other attributes
};

#endif