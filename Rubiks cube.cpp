// Rubiks cube.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#include "Cube.h"

using namespace std;

int main()
{
    Cube cube = Cube();
    bool forward = true;
    string input = " ";
    unordered_map <string, int> stringToInt = {
        {"white", 1},
        {"green", 2},
        {"red", 3},
        {"blue", 4},
        {"orange", 5},
        {"yellow", 6},
        {"l", 7},
        {"r", 8},
        {"u", 9},
        {"d", 10},
        {"f", 11},
        {"b", 12},
        {"l'", 13},
        {"r'", 14},
        {"u'", 15},
        {"d'", 16},
        {"f'", 17},
        {"b'", 18},
        {"q", 19}
    };

    cout << "Welcome to the Rubik's cube Program!\n";
    cout << "This program represents a rubiks cube! Ain't that cool?!?\n";
    cout << "Anyway, a few things to know. This program only currently shows one side at a time.\n";
    cout << "The green side of the rubiks cube is always facing up.\n";
    cout << "Movement is based off of the white side. We are working on changing that.\n"<< endl;
    cout << "You can type the full color name to see the other 5 sides of the cube, and can move it from there." << endl;
    cout << "To move use the Rubik's cube language/components/movement." << endl;
    cout << "(l,r,u,d,f,b, l\',r\', u\', d\', f\', b\'." << endl;
    cout << "Press Q to quit" << endl;
    cout << "Lets Begin!" << endl;


    while (forward) {
        cube.display("white");

        cout << "Enter: ";
        getline(cin, input);

        for (size_t i = 0; i < input.length(); ++i) {
            input[i] = tolower(input[i]);
        };

        switch (stringToInt[input]){
        case 1:
            cube.display(input);
            break;
        case 2: 
            cube.display(input);
            break;
        case 3:
            cube.display(input);
            break;
        case 4:
            cube.display(input);
            break;
        case 5:
            cube.display(input);
            break;
        case 6:
            cube.display(input);
            break;
        case 7:
            cube.lMove();
            break;
        case 8:
            cube.rMove();
            break;
        case 9:
            cube.uMove();
            break;
        case 10:
            cube.dMove();
            break;
        case 11:
            cube.fMove();
            break;
        case 12:
            cube.bMove();
            break;
        case 13:
            cube.lPermMove();
            break;
        case 14:
            cube.rPermMove();
            break;
        case 15:
            cube.uPermMove();
            break;
        case 16:
            cube.dPermMove();
            break;
        case 17:
            cube.fPermMove();
            break;
        case 18:
            cube.bPermMove();
            break;
        case 19:
            forward = false;
            break;
        default:
            cout << "invalid input" << endl;
        }

    }
}


