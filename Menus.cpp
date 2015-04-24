#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Sorting::moreInformation() // use to give information on the sorting algorithms that we implement
{
	int input;
    while(input != 5)
    {
        cout << "===========================================" << endl;
    	cout << "What Would You Like More Information On?" << endl;
		cout << "1. Bubble Sort" << endl;
		cout << "2. Insertion Sort" << endl;
		cout << "5. Go Back" << endl;

		cin >> input;
        //clear out cin
        cin.clear();
        cin.ignore(10000,'\n');

        switch (input)
        {
            case 1:
                cout << "===========================================" << endl;
            	cout << "A bubble sort is the best sort" << endl;
                break;
            case 2:
                cout << "===========================================" << endl;
                cout << "Sorts the data using the insertion sort." << endl;
                cout << "This is considered a one up from Bubble sort. Definitely." << endl;
                break;
            case 3:
                break;
            case 4:
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
}

void Sorting::settings()
{
    int input;
    while(input != 5)
    {
        cout << "===========================================" << endl;
    	cout << "Welcome to the Settings menu, What would you like to do?" << endl;
		cout << "1. Change Array Size" << endl;
		cout << "5. Go Back" << endl;

		cin >> input;
        //clear out cin
        cin.clear();
        cin.ignore(10000,'\n');

        switch (input)
        {
            case 1:
                int input2;
                cout << "===========================================" << endl;
            	cout << "Current Array Size for generated array is: " << array_size << endl;
            	cout << "What would you like to change it to?" << endl;
            	cin >> input2;
                cin.clear();
                cin.ignore(10000,'\n');
                array_size = input2;
                cout << "Array Size successfully changed to: " << array_size << endl;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
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
}