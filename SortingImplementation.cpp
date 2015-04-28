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
/*
Function Description:
This function calls the createRandArray function to create a initial array with random values.

Pre-conditions: Nothing needs to be passed in. Just initializes the array.
Post-conditions: Returns nothing but now the random array has been created and is ready to be used for the sorting algorithms.
*/
void Sorting::initializeArray()
{
	createRandArray();
}
/*
Function Description:
Calls each sorting function and displays the operation count that each sorting function returns.
This function makes it easier to compare the operation count for each sort that has been implemented.

Pre-conditions: Nothing has to be passed in since this functions only consists of running the already implemented methods and the standard cout statements for each.
Post-conditions: Displays the cost for each kind of sort that the team has implemented so the user can see which sort is the most efficient.
*/
void Sorting::runAlgorithms()
{
    //Preliminary Check to make sure the array is initialized
    if (dataTable == nullptr)
    {
        cout << "Initialize Array first please" << endl;
        return;
    }

    //Bubble Sort
	int BubblesortValue = Bubblesort();
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

	// Quick Sort
	int quickSortValue = QuickSort();
	cout << "Quick Sort cost: " << quickSortValue << endl;

	//Gnome Sort
	int gnomeSortValue = GnomeSort();
	cout << "Gnome Sort cost: " << gnomeSortValue << endl;
}
/*
Function Description:
The createRandArray function creates an array inside the function, with a specified size that is used as a global structure which can be changed.
The function then fills the array with random numbers at each index from 0 to 1000.

Pre-conditions: Nothing needs to be passed in since the array created inside is then copied over to the global array structure.
Post-conditions: Each time this function is called it frees the memory for the previous time the global array structure has been used and then sets the global
                 array structure equal to a completely new random array.
*/
void Sorting::createRandArray()
{
	cout << "Creating the random array..." << endl;
    //Initialize the array and delete the old one
    if (dataTable != NULL)
    {
        //cout << " In if" << endl;
        delete[] dataTable;
    }
    int *randArray = new int[array_size];

    srand(time(NULL));                    //imported a library that has a rand method
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
    cout << "Done generating random array." << endl;
    dataTable = randArray;          //Changing the global variable
}

/*
Function Description:
This function copies the random array after it has been initialized. This function is used in each implementation of the sorting algorithms to ensure that
all the sorting algorithms are sorting the same array at the same time.

Pre-conditions: Requires nothing to be passed in.
Post-conditions: Returns a copy of the global array structure so that we are not sorting the global array.
*/
int *Sorting::copyArray()
{
	int *dataNew = new int[array_size];
	for (int i=0; i < array_size; i++)
    {
        dataNew[i] = dataTable[i];
    }
    return dataNew;
}
/*
Function Description:
The printArray function prints out each index of the array. Extremely helpful in debugging the sorting algorithms.

Pre-conditions: We have to pass in the array that we want printed out index by index.
Post-conditions: Returns nothing but displays the entire array on the terminal window.
*/
void Sorting::printArray(int *array)
{
	for (int i=0; i < array_size; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}
/*
Function Description:
Checks the array to see if the array has been sorted properly. By properly we mean that the array goes from the minimum value to the maximum value.
This check runs through each element in the array and compares it to the adjacent element.

Pre-conditions: Pass in the array that you want to check.
Post-conditions: Returns a boolean to the user to see if their implementation of a sorting algorithm has worked or not. Also lets the user know through cout statements.
*/
bool Sorting::checkSort(int *array) //function checks whether a given array is sorted or not.
{
	bool sorted = true;
	for (int i = 1; i< array_size; i++)
	{
		if (array[i]<array[i-1])
			sorted = false;
	}
	if (sorted)
		cout << "Data was successfully sorted." << endl;
	else
		cout << "The algorithm failed to successfully sort the data." << endl;

	return sorted;
}
/*
Function Description:
This function creates special test case arrays for the sorting algorithms to run through.

Pre-conditions: Takes in the user input when they are in the sub menu
Post-conditions: Changes the ordering of the global array and prints it out for the user to see.
*/
void Sorting::specialCases(int value)
{
    if (dataTable == nullptr)
    {
        cout << "Initialize Array first please" << endl;
        return;
    }
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

