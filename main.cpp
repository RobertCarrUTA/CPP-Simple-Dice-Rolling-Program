#include <iostream>
#include <string>

#include "die.h"

using namespace std;

int main ()
{
    Die dice {0, 0, 0};

    int diceNumber = 0;
    int faceNumber = 0;
    int rolls;
    int number = 0;
    int sum = 0;
    
    cout << "Nice to meet you. How many dice would you like to roll? ";
    cin >> diceNumber;
    cin.ignore();

    cout << "How many faces does each die have? ";
    cin >> faceNumber;
    cin.ignore();
    dice.setFaces(faceNumber);
    
    cout << "How many times do you wish to roll the dice? ";
    cin >> rolls;
    cin.ignore();
    dice.setRoll(rolls);

    // In this loop we show the user the results of the dice rolls
    for (int i = 0; i < diceNumber + 1; i++) 
    { 
        cout << "Roll " << i << ": ";
        
        for (int j = 1; j <= dice.getRoll(); j++)
        {
            number = rand () % (dice.getFaces())+1;
            dice.setValue(number);
            cout << dice.getValue() << " ";
            sum = sum + dice.getValue();
        }
        cout << "Sum: " << sum << endl;
        sum = 0;
        number = 0;
    }
}
 
