#include "userinterface.h"


using namespace std;

template<typename T> std::istream& read(T& var) {
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	return (std::cin >> var);
}

void UI::menudisplay()
{
	int choice;
	cout << "     Menu     " << endl;
	cout << "1. Rules" << endl;
	cout << "2. Play" << endl;
	cout << "3. Winners" << endl;
	cout << "0. Exit" << endl;
	cin >> choice;
	choices(choice);
}

void UI::choices(int choice)
{
	if (choice == 1)
	{
		int ret = 0;
		cout << ifstream("Rules.txt").rdbuf() << endl; // output the rules txt file
		cout << "To return to the main menu input 2: ";
		cin >> ret;
		if (ret == 2)
		{
			menudisplay();
		}
	}
	if (choice == 2)
	{
		cout << "What maze do you want to play? (Input maze number)" << endl;
		bool exists = false;
		while (exists == false)
		{
			string n;
			bool valid = false;
			while (valid == false) // check if maze number is valid
			{
				cin >> n;
				int i, totChar;
				totChar = 0;
				for (i = 0; n[i] != '\0'; i++)
				{
					totChar++;
				}
				if (totChar == 1) // corrects if the input was a single digit number
				{
					n = "0" + n;
					valid = true;
					break;
				}
				if (totChar == 2)
				{
					n = n;
					valid = true;
					break;
				}
				else //no 3 digit mazes here
				{
					valid = false;
					cout << "Input a valid maze number" << endl;
				}
			}
			string filename = "MAZE_" + n + ".txt";
			if (!ifstream(filename)) //check if the file for the maze exists and is openable
			{
				exists = false;
				cout << "Maze doesn't exist yet, maybe in the next dlc, for now try another one" << endl;
			}
			else
			{
				Game game(filename);
				game.play();
				exists = true;
			}
		}
	}
	if (choice == 3)
	{
		bool isopen = false;
		string winners;
		string n;
		while (!isopen)
		{
			cout << "What maze's leaderboard do you want to see?" << endl;
			bool valid = false;
			while (valid == false) // check if maze number is valid
			{
				cin >> n;
				int i, totChar;
				totChar = 0;
				for (i = 0; n[i] != '\0'; i++)
				{
					totChar++;
				}
				if (totChar == 1) // corrects if the input was a single digit number
				{
					n = "0" + n;
					valid = true;
					break;
				}
				if (totChar == 2)
				{
					n = n;
					valid = true;
					break;
				}
				else //no 3 digit mazes here
				{
					valid = false;
					cout << "Input a valid maze number" << endl;
				}
			}
			winners = "MAZE_" + n + "_WINNERS.txt";
			ifstream win(winners);
			if (!win.is_open()) //check if the file for the maze exists and is openable
			{
				cout << "Maze doesn't exist, therefore there isn't a leaderboard for it yet" << endl;
			}
			else
			{
				int ret;
				string line;
				cout << ifstream(winners).rdbuf() << endl;
				cout << "If you wish to return to the menu input 2" << endl;
				cin >> ret;
				if (ret == 2)
				{
					menudisplay();
				}
				else
				{
					cout << "That isn't allowed, self destructing in 3...2...1";
					exit(1);
				}
			}
		}
	}
	else
	{
		exit(1);
	}
}
