#include <iostream>
#include <fstream>  //allows istream/ostream
#include <string>
#include <stdlib.h>
#include "Sorting.h"

using namespace std;

void displayMenu()
{
    cout << "======Main Menu======" << endl;
    cout << "1. Initialize Array" << endl;
    cout << "2. Apply Algorithms" << endl;
    cout << "3. Display results" << endl;
    cout << "4. Learn more" << endl; //we can use this to talk about the various algorithms and their complexities
    cout << "5. Settings" << endl;
    cout << "6. Quit" << endl;
    return;
}

int main()
{
    Sorting test;

    //get the users input
    int input;
    string title;
    while(input != 6)
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
            case 3:  //display results
                break;
            case 4: //learn more
                test.moreInformation();
                break;
            case 5:
                test.settings();
                break;
            case 6:
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
