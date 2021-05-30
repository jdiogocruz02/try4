#include "Maze.h"
#include <sstream>
using namespace std;


Maze::Maze(int numRows, int numCols, string filename)
{
	int linen = 0;
	int chara = 0;
	string line;
	ifstream file(filename);
	while (!file.eof()) // loop to output the contents of the txt file while saving each line as an element in an array, loops ends when contents of the file end
	{
		getline(file, line); //get one line from the file
		if (linen == 0)
		{
			stringstream ss;
			int i = 0;
			/* Storing the whole string into string stream */
			ss << line;

			/* Running loop till the end of the stream */
			string temp;
			int found;
			while (!ss.eof()) {

				/* extracting word by word from stream */
				ss >> temp;

				/* Checking the given word is integer or not */
				if (stringstream(temp) >> found) 
				{
					if (i == 0)
					{
						numRows = found;
						i++;
					}
					else
					{
						numCols = found;
					}
				}
				/* To save from space at the end of string */
				temp = "";
			}
		}
		else
		{
			maze.resize(getnumRows(), vector<char>(line.length()));
			maze[linen][chara] = line[chara];
		}
		chara++;
		linen++;
	}
	file.close();
}

int Maze::getnumRows() const
{ 
	return numRows;
}

int Maze::getnumCols() const
{
	return numCols;
}

