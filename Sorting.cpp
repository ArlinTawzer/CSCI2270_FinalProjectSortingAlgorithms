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
}

int Sorting::Bubblesort()
{
	cout << "Applying bubble sort" << endl;
	int complexity = 0;

	int *dataNew = copyArray();



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
}
	