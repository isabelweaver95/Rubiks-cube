#pragma once
#include <iostream>

#include<vector>;
using namespace std;

#ifndef Side_H
#define Side_H

class Side
{
private:
	vector<char> row1;
	vector<char> row2;
	vector<char> row3;

public:
	Side(char color);

	//These are getters, we do not need one for row2, because that is not an option of movement. 
	vector<char> getRow1();
	vector<char> getRight();
	vector<char> getLeft();
	vector<char> getRow3();

	//These will be the movement of each side. We only care about the elements surrounding the middle element.
	vector<char> rMove(vector<char>);
	vector<char> lMove(vector<char>);
	vector<char> uMove(vector<char>);
	vector<char> dMove(vector<char>);

	//This will display the elements.
	void display();
};


#endif
