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

    //Bubble Sort
	int BubblesortValue = Bubblesort();
    BubblesortValue =  Bubblesort();
    cout << "Bubble Sort Cost: " << BubblesortValue << endl;

    //Insertion sort
    int insertionSortValue = insertionSort();
	cout << "Insertion Sort cost: " << insertionSortValue << endl;

	//Selection Sort
	int selectionSortValue = SelectionSort();
	cout << "Selection Sort cost: " << selectionSortValue << endl;

	//Shell Sort
	int shellSortValue = ShellSort();
	cout << "Shell Sort cost: " << shellSortValue << endl;

	// Have to add quick sort in here once the format is switched to arrays again
	// Going to add Selection Sort
}

void Sorting::createRandArray()
{
	cout << "creating the random array" << endl;
    //Initialize the array
    int *randArray = new int[array_size];

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
    //printArray(randArray);
    cout << endl;
    cout << "Done generating random array" << endl;
    dataTable = randArray;
}

int *Sorting::copyArray()
{
	int *dataNew = new int[array_size];
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
	for (int i = 1; i< array_size; i++)
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

void Sorting::specialCases(int value)
{
    //no need to allocate new memory, just copy over new values
    if (value == 1)
    {
        dataTable[0] = array_size;
        dataTable[array_size-1] = 1;
        for (int i=1; i < array_size-2; i++)
        {
            dataTable[i] = i+1;
        }
        printArray(dataTable);
        cout << "First and Last values are out of place" << endl;
    }
    else if (value == 2)
    {
        for (int i=0; i < array_size; i++)
        {
            dataTable[i] = i+1;
        }
        printArray(dataTable);
        cout << "Array is already sorted" << endl;
    }
    else if (value == 3)
    {
        for (int i=0; i<array_size; i++)
        {
            dataTable[i] = array_size-i;
        }
        printArray(dataTable);
        cout << "Array is perfectly reversed" << endl;
    }
}

