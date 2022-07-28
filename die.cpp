#include <iostream>

#include "die.h"

using namespace std;

Die::Die(int faces, int value, int roll) : _faces{faces}, _value{value}
{
    if (faces == 0) // If you have 0 faces then you don't have dice to roll.
    {
        // TODO: Come back and fix this, if a user enters 0 faces, the program will crash.
        return;
    }
    else
    {
        srand(time(NULL));
        int values = 0;
        cout << "d" << faces << ": ";
        for (int j = 1; j <= roll; j++)
        {
            values = rand () % faces+1;
            cout << values << " ";
        }
        cout << endl;
        return;
    }
}

