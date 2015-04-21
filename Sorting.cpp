#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Sorting::Sorting() // constructor
{

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
	int complexity = 0;

	return complexity;
}

void Sorting::createRandArray()
{
	cout << "creating the random array" << endl;
    //Initialize the array
    int size1 = 1000;
    int randArray[size1];
    srand(time(NULL));
    for (int i=0; i < size1; i++)
    {
        randArray[i] = 0;
    }

    //counter of all numbers to add
    for (int j=1; j<size1+1; j++)
    {
        int randIndex = rand() % size1;
        while (randArray[randIndex] != 0)
        {
            randIndex = rand() % size1;
        }
        randArray[randIndex] = j;
        cout << randArray[randIndex] << ", ";
    }
    cout << endl;
    cout << "Done generating random array" << endl;
    dataTable = randArray;
}