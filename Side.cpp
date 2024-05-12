#include "Side.h"

class Side {
private:
	vector<char> row1;
	vector<char> row2;
	vector<char> row3;

public:

	// This will set the color. 
	Side(char color) {
		row1.push_back(color);
		row1.push_back(color);
		row1.push_back(color);

		row2.push_back(color);
		row2.push_back(color); 
		row2.push_back(color);

		row3.push_back(color);
		row3.push_back(color);
		row3.push_back(color);
	}

	vector<char> getRow1() {
		return row1;
	}

	vector<char> getRight() {
		return { row1[3], row2[3], row3[3] };
	}

	vector<char> getLeft(){
		return { row1[1], row2[1], row3[1] };
	}

	vector<char> getRow3() {
		return row3;
	}

	vector<char> rMove(vector<char> movement) {
		// This should only change the last char of each vector.
		// We need to return what is currently in the right column of the vectors so that other sides can move with it. 
		vector<char> beforeMovement = { row1[3], row2[3], row3[3] };
		row1[3] = movement[1];
		row2[3] = movement[2];
		row3[3] = movement[3];

		return beforeMovement;
	}

	vector<char> lMove(vector<char> movement) {
		// This should only effect the first element in each vector.
		vector<char> beforeMovement = { row2[1], row2[1], row3[1] };
		row1[1] = movement[1];
		row2[1] = movement[2];
		row3[1] = movement[3];

		return beforeMovement;
	}

	vector<char> uMove(vector<char> movement) {
		//This should only effect the row1, as it only effects the top row of a rubiks cube.
		vector<char> beforeMovement = row1;
		row1 = movement;

		return beforeMovement;
	}

	vector<char> dMove(vector<char> movement) {
		// This should only effect the bottom row, as it only effects it on a rubiks cube. 
		vector<char> beforeMovement = row3; 
		row3 = movement;

		return beforeMovement;
	}

	void display() {
		cout << row1[1] << " " << row1[2] << " " << row1[3] << endl;
		cout << row2[1] << " " << row2[2] << " " << row2[3] << endl;
		cout << row3[1] << " " << row3[2] << " " << row3[3] << endl;
	}
};

