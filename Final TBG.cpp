#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

//function declarations (needed for each one you write)
void thingsforall(string s);
void shop();

//global variables (in general, not a good idea, but for this small of a game, ok)
string inventory[5];
string wall = "Oops you ran into a wall";

int main() {

	int room = 1;
	string input;

	cout << "You wake up to find yourself in a SPOOPY dungeon. Can you escape? Good luck!" << "\n" << "If you want to know what commands you can do type help" << endl;

	do {
		switch (room) {
		case 1:
			cout << "You are in room 1." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 2;
			else
				thingsforall(input);
			break;
		case 2:
			cout << "You are in room 2." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 10;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 3;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 1;
			else
				thingsforall(input);
			break;
		case 3:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 4;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 2;
			else
				thingsforall(input);
			break;
		case 4:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 5;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 3;
			else
				thingsforall(input);
			break;
		case 5:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 13;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 4;
			else
				thingsforall(input);
			break;
		case 6:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 14;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 7;
			else
				thingsforall(input);
			break;
		case 7:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 8;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 6;
			else
				thingsforall(input);
			break;
		case 8:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 16;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 7;
			else
				thingsforall(input);
			break;
		case 9:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 17;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 10;
			else
				thingsforall(input);
			break;
		case 10:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 2;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 9;
			else
				thingsforall(input);
			break;
		case 11:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 19;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 12;
			else
				thingsforall(input);
			break;
		case 12:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 20;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 11;
			else
				thingsforall(input);
			break;
		case 13:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 5;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 21;
			else
				thingsforall(input);
			break;
		case 14:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 6;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 15;
			else
				thingsforall(input);
			break;
		case 15:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 14;
			else
				thingsforall(input);
			break;
		case 16:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 8;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 24;
			else
				thingsforall(input);
			break;
		case 17:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 9;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 25;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 18;
			else
				thingsforall(input);
			break;
		case 18:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 19;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 17;
			else
				thingsforall(input);
			break;
		case 19:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 11;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 27;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 18;
			else
				thingsforall(input);
			break;
		case 20:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 12;
			else
				thingsforall(input);
			break;
		case 21:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 13;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 22;
			else
				thingsforall(input);
			break;
		case 22:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 23;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 21;
			else
				thingsforall(input);
			break;
		case 23:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 24;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 22;
			else
				thingsforall(input);
			break;
		case 24:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 16;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 23;
			else
				thingsforall(input);
			break;
		case 25:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 17;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 33;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 26;
			else
				thingsforall(input);
			break;
		case 26:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 25;
			else
				thingsforall(input);
			break;
		case 27:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 19;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 35;
			else
				thingsforall(input);
			break;
		case 28:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 36;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 29;
			else
				thingsforall(input);
			break;
		case 29:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 30;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 28;
			else
				thingsforall(input);
			break;
		case 30:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 31;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 29;
			else
				thingsforall(input);
			break;
		case 31:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 39;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 32;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 30;
			else
				thingsforall(input);
			break;
		case 32:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 40;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 31;
			else
				thingsforall(input);
			break;
		case 33:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 25;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 34;
			else
				thingsforall(input);
			break;
		case 34:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 42;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 33;
			else
				thingsforall(input);
			break;
		case 35:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 27;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 43;
			else
				thingsforall(input);
			break;
		case 36:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 28;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 37;
			else
				thingsforall(input);
			break;
		case 37:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 45;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 38;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 36;
			else
				thingsforall(input);
			break;
		case 38:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 37;
			else
				thingsforall(input);
			break;
		case 39:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 31;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 47;
			else
				thingsforall(input);
			break;
		case 40:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 32;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 48;
			else
				thingsforall(input);
			break;
		case 41:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 49;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 42;
			else
				thingsforall(input);
			break;
		case 42:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 34;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 41;
			else
				thingsforall(input);
			break;
		case 43:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 35;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 51;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 44;
			else
				thingsforall(input);
			break;
		case 44:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 45;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 43;
			else
				thingsforall(input);
			break;
		case 45:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 37;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 53;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 44;
			else
				thingsforall(input);
			break;
		case 46:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 54;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 47;
			else
				thingsforall(input);
			break;
		case 47:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 39;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 55;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 46;
			else
				thingsforall(input);
			break;
		case 48:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 40;
			else
				thingsforall(input);
			break;
		case 49:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 41;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 50;
			else
				thingsforall(input);
			break;
		case 50:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 58;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 49;
			else
				thingsforall(input);
			break;
		case 51:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 43;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 59;
			else
				thingsforall(input);
			break;
		case 52:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 60;
			else
				thingsforall(input);
			break;
		case 53:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 45;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 61;
			else
				thingsforall(input);
			break;
		case 54:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 46;
			else if (input.compare("go south") == 0 || input.compare("south") == 0 || input.compare("s") == 0)
				room = 62;
			else
				thingsforall(input);
			break;
		case 55:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 47;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 56;
			else
				thingsforall(input);
			break;
		case 56:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 55;
			else
				thingsforall(input);
			break;
		case 57:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 58;
			else
				thingsforall(input);
			break;
		case 58:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 50;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 57;
			else
				thingsforall(input);
			break;
		case 59:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 51;
			else
				thingsforall(input);
			break;
		case 60:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 52;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 61;
			else
				thingsforall(input);
			break;
		case 61:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 53;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 60;
			else
				thingsforall(input);
			break;
		case 62:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go north") == 0 || input.compare("north") == 0 || input.compare("n") == 0)
				room = 54;
			else if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 63;
			else
				thingsforall(input);
			break;
		case 63:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go east") == 0 || input.compare("east") == 0 || input.compare("e") == 0)
				room = 64;
			else if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 62;
			else
				thingsforall(input);
			break;
		case 64:
			cout << "You are in room 11." << endl;
			getline(cin, input);
			transform(input.begin(), input.end(), input.begin(), ::tolower);
			if (input.compare("go west") == 0 || input.compare("west") == 0 || input.compare("w") == 0)
				room = 63;
			else
				thingsforall(input);
			break;
		}
	} while (input.compare("quit") != 0);
}

void thingsforall(string s) {
	if (s.compare("go north") == 0 || s.compare("north") == 0 || s.compare("n") == 0)
		cout << wall << endl;
	else if (s.compare("go south") == 0 || s.compare("south") == 0 || s.compare("s") == 0)
		cout << wall << endl;
	else if (s.compare("go east") == 0 || s.compare("east") == 0 || s.compare("e") == 0)
		cout << wall << endl;
	else if (s.compare("go west") == 0 || s.compare("west") == 0 || s.compare("w") == 0)
		cout << wall << endl;
	else if (s.compare("look") == 0)
		cout << "You don't see anything special." << endl;
	else if (s.compare("inventory") == 0)
		for (int i = 0; i < 5; i++) {
			cout << inventory[i] << endl;
		}
	else if (s.compare("help") == 0) {
		cout << "The commands you can do are:" << endl;
		cout << "go north, go south, go east, go west, north, south, east, west, n, s, e, w" << endl;
		cout << "look" << endl;
		cout << "pickup" << endl;
		cout << "open" << endl;
	}
	else if (s.compare("pickup") == 0)
		cout << "There is nothing to pickup." << endl;
	else if (s.compare("look") == 0)
		cout << "There is nothing to open." << endl;
	else if (s.compare("shop") == 0)
		shop();
	else
		cout << "sorry, not an option." << endl;
}

void shop() {
	string input;
	do {
		cout << "Welcom to the shop. \n Choose one item" << endl;
		cout << "A for axe." << endl;
		cout << "Sw for Sword." << endl;
		cout << "Sh for Sheild." << endl;
		cin >> input;
		if (input == "A")
			inventory[2] = "Axe";
		else if (input == "Sw")
			inventory[2] = "Sword";
		else if (input == "Sh")
			inventory[2] = "Shield";
	} while (input != "quit");
}
