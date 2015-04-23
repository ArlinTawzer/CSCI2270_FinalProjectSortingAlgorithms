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
	int insertionSortValue = insertionSort();
	cout << "BubbleSort cost: " << Bubblesort() << endl;
	cout << "InsertionSort cost: " << insertionSort() << endl;
}

int Sorting::Bubblesort()
{
	cout << "Applying bubble sort" << endl;
	int complexity = 0;

	vector<int> dataNew = dataTable;
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
    //int randArray[array_size];
    vector<int> randArray(array_size);
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

void Sorting::printArray(vector<int> array)
{
	for (int i=0; i < array_size; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}

bool Sorting::checkSort(vector<int> array) //function checks whether a given array is sorted or not.
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

int Sorting::insertionSort()
{
    //getting a copy of the array
    vector<int> dataNew(array_size);
    dataNew = dataTable;
    //printArray(dataNew);
    int index = 0;
    int complexity = 0;

    for (int i=1; i<dataNew.size(); i++)
    {
        index = dataNew[i];
        int j = i;
        while (j>0 && dataNew[j-1]>index)
        {
            dataNew[j] = dataNew[j-1];
            j--;
            complexity++;
        }
        dataNew[j] = index;
        complexity++;
    }
    //printArray(dataNew);

    checkSort(dataNew);
    return (complexity);
}


