#include <iostream>
#include <fstream>  //allows istream/ostream
#include <string>
#include <stdlib.h>
#include "Sorting.h"

using namespace std;

/*
Function Description:
Displays a menu on the terminal window. Have to incorporate with the main in order to actually run the functions.

Pre-conditions: Nothing needs to be passed in.
Post-conditions: Displays a menu so the user knows exactly what to input.
*/
void displayMenu()
{
    cout << "======Main Menu======" << endl;
    cout << "1. Initialize Array" << endl;
    cout << "2. Apply Algorithms" << endl;
    cout << "3. Learn more" << endl; //we can use this to talk about the various algorithms and their complexities
    cout << "4. Settings" << endl;
    cout << "5. Quit" << endl;
    return;
}

int main()
{
    Sorting test = Sorting();

    //get the users input
    int input;
    string title;
    while(input != 5)
    {
        displayMenu();
        cin >> input;
        //clear out cin
        cin.clear();
        cin.ignore(10000,'\n');

        switch (input)
        {
            case 1: //initialize array
                test.initializeArray();
                break;
            case 2: //apply algorithms
                test.runAlgorithms();
                break;
            case 3: //learn more
                test.moreInformation();
                break;
            case 4: // change the array settings
                test.settings();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(10000,'\n');
                break;
        }
    }
    return 0;
}
