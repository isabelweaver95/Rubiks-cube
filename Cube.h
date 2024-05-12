#pragma once
#include <iostream>
#include "Side.h"

using namespace std;

class Cube
{
private:
	Side white;
	Side red;
	Side blue;
	Side orange;
	Side green;
	Side yellow;

public:
	Cube();

	//These are move function
	void rMove();
	void rPermMove();
	void lMove();
	void lPermMove();
	void uMove();
	void uPermMove();
	void dMove();
	void dPermMove();
	void fMove();
	void fPermMove();
	void bMove();
	void bPermMove();
	
	//this will display the side.
	void display(string);
};

