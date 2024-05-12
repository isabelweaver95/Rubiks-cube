#include "Cube.h"

#include <unordered_map>

class Cube {
private:
	Side white = Side('w');
	Side red = Side('r');
	Side blue = Side('b');
	Side orange = Side('o');
	Side green = Side('g');
	Side yellow = Side('y');

public:

	void rMove(){
		vector<char> start = blue.getRight();
		start = white.rMove(start);
		start = green.rMove(start);
		start = yellow.rMove(start);
		blue.rMove(start);
	}

	void rPermMove() {
		vector<char> start = green.getRight();
		start = white.rMove(start);
		start = blue.rMove(start);
		start = yellow.rMove(start);
		green.rMove(start);
	}

	void lMove(){
		vector<char> start = green.getLeft();
		start = white.lMove(start);
		start = blue.lMove(start);
		start = yellow.lMove(start);
		green.lMove(start);

	}

	void lPermMove(){
		vector<char> start = blue.getLeft();
		start = white.lMove(start);
		start = green.lMove(start);
		start = yellow.lMove(start);
		blue.lMove(start);
	}

	void uMove() {
		vector<char> start = orange.getRow1();
		start = white.uMove(start);
		start = red.uMove(start);
		start = yellow.uMove(start);
		orange.uMove(start);
	}

	void uPermMove() {
		vector<char> start = red.getRow1();
		start = white.uMove(start);
		start = orange.uMove(start);
		start = yellow.uMove(start);
		red.uMove(start);
	}

	void dMove() {
		vector<char> start = red.getRow3();
		start = white.dMove(start);
		start = orange.dMove(start);
		start = yellow.dMove(start);
		red.dMove(start);
	}

	void dPermMove() {
		vector<char> start = orange.getRow3();
		start = white.dMove(start);
		start = red.dMove(start);
		start = yellow.dMove(start);
		orange.dMove(start);
	}

	void fMove() {
		vector<char> start = red.getRight();
		start = green.dMove(start);
		start = orange.lMove(start);
		start = blue.uMove(start);
		red.rMove(start);
	}

	void fPermMove() {
		vector<char> start = orange.getLeft();
		start = green.dMove(start);
		start = red.rMove(start);
		start = blue.uMove(start);
		orange.lMove(start);
	}

	void bMove() {
		vector<char> start = orange.getRight();
		start = green.uMove(start);
		start = red.lMove(start);
		start = blue.dMove(start);
		orange.rMove(start);
	}

	void bPermMove() {
		vector<char> start = red.getLeft();
		start = green.uMove(start);
		start = orange.rMove(start);
		start = blue.dMove(start);
		red.lMove(start);
	}

	void display(string side = "white") {
		//This will put the elements into a map.
		//The reason I wanted to do this is so that I could use a switch statement.
		//This number corrisponds to the side.
		unordered_map <string, int> stringToInt = {
			{"white", 1},
			{"green", 2},
			{"red", 3},
			{"blue", 4},
			{"orange", 5},
			{"yellow", 6}
		};

		switch (stringToInt[side]) {
		case 1:
			cout << "Please note that the green side is on top." << endl;
			cout << "Meaning the green side is facing the sky." << endl;
			white.display();
			break;
		case 2:
			cout << "Please note that the Yellow side is on top." << endl;
			cout << "Meaning the Yellow side is facing the sky." << endl;
			green.display();
			break;
		case 3:
			cout << "Please note that the green side is on top." << endl;
			cout << "Meaning the green side is facing the sky." << endl;
			red.display();
			break;
		case 4:
			cout << "Please note that the White side is on top." << endl;
			cout << "Meaning the White side is facing the sky." << endl;
			blue.display();
			break;
		case 5:
			cout << "Please note that the green side is on top." << endl;
			cout << "Meaning the green side is facing the sky." << endl;
			orange.display();
			break;
		case 6:
			cout << "Please note that the green side is on top." << endl;
			cout << "Meaning the green side is facing the sky." << endl;
			yellow.display();
			break;
		default:
			cout << "invalid";
		}
	}
};