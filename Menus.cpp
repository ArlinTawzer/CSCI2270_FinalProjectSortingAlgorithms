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
        cout << "3. Selection Sort" << endl;
        cout << "4. Quick Sort" << endl;
		cout << "5. Go Back" << endl;

		cin >> input;
        //clear out cin
        cin.clear();
        cin.ignore(10000,'\n');

        switch (input)
        {
            case 1:
                cout << "===========================================" << endl;
            	cout << "A bubble sort has complexity of n^2" << endl;
                cout << "The most difficult order is when the array is in reverse order where the largest value is at the front and so on." << endl;
                break;
            case 2:
                cout << "===========================================" << endl;
                cout << "Insertion Sort has complexity of n^2." << endl;
                break;
            case 3:
                cout << "===========================================" << endl;
                cout << "Selection Sort has complexity of n^2." << endl;
                break;
            case 4:
                cout << "===========================================" << endl;
                cout << "Quick sort in the worst case scenario is n^2. However, it's generally of nlog(n) complexity" << endl;
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
		cout << "2. Use Special Array Case" << endl;
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
                initializeArray();
                cout << "Array Size successfully changed to: " << array_size << endl;
                break;
            case 2:
                cout << "===========================================" << endl;
            	cout << "Which case would you like to use?" << array_size << endl;
            	cout << "1. Last and First values switched" << endl;
            	cout << "2. Already sorted" << endl;
            	cout << "3. Perfectly Reversed" << endl;
            	cin >> input2;
                cin.clear();
                cin.ignore(10000,'\n');
                specialCases(input2);
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
