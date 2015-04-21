#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Sorting::Sorting() // constructor
{
	array_size = 1000;
}

Sorting::~Sorting() //destructor
{

}

void Sorting::initializeArray()
{
	createRandArray();
}

void Sorting::runAlgorithms()
{
	int BubblesortValue = Bubblesort();
	cout << "Bubblesort cost: " << BubblesortValue << endl;
}

int Sorting::Bubblesort()
{
	cout << "Applying bubble sort" << endl;
	int complexity = 0;

	int *dataNew = copyArray();
	printArray(dataNew);
	/*int swap;
    for(int i = 0; i < array_size-1; i++)
    {
        for(int j = 0; j < array_size - i - 1; j++){
            if(dataNew[j] > dataNew[j+1]){
                swap = dataNew[j];
                dataNew[j] = dataNew[j+1];
                dataNew[j+1] = swap;
            }
            complexity++;
        }
    }*/
    //checkSort(dataNew);
    //printArray(dataNew);
	return complexity;
}

void Sorting::createRandArray()
{
	cout << "creating the random array" << endl;
    //Initialize the array
    int randArray[array_size];
    srand(time(NULL));
    for (int i=0; i < array_size; i++)
    {
        randArray[i] = 0;
    }

    //counter of all numbers to add
    for (int j=1; j<array_size+1; j++)
    {
        int randIndex = rand() % array_size;
        while (randArray[randIndex] != 0)
        {
            randIndex = rand() % array_size;
        }
        randArray[randIndex] = j;
    }
    printArray(randArray);
    cout << endl;
    cout << "Done generating random array" << endl;
    dataTable = randArray;
}

int *Sorting::copyArray()
{
	int dataNew[array_size];
	for (int i=0; i < array_size; i++)
    {
        dataNew[i] = dataTable[i];
    }
    return dataNew;
}

void Sorting::printArray(int *array)
{
	for (int i=0; i < array_size; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}

bool Sorting::checkSort(int *array) //function checks whether a given array is sorted or not.
{
	bool sorted = true;
	for (int i = 0; i< array_size; i++)
	{
		if (array[i]<array[i-1])
			sorted = false;
	}
	if (sorted)
		cout << "data was successfully sorted" << endl;
	else
		cout << "the algorithm failed to successfully sort the data" << endl;

	return sorted;
}


void Sorting::moreInformation() // use to give information on the sorting algorithms that we implement
{
	int input;
    while(input != 5)
    {
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
            	cout << " a bubble sort is the best sort" << endl;
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
	