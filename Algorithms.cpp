#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
Function Description:
This function applies the algorithm for bubble sort to the array that is created by the initializeArray function.
The algorithm loops through the entire array and compares each index with the next and swaps them accordingly.
Shifts the greater value up the array.

Pre-conditions: Requires nothing to be passed in since the copyArray function is used within.
Post-conditions: Returns the number of operations that had to be done in order to sort the array. Memory freed by deleting the array created.
*/
int Sorting::Bubblesort()
{
	//cout << "Applying bubble sort" << endl;
	int complexity = 0;

    int *dataNew = copyArray();
	int swap;
    for(int i = 0; i < array_size-1; i++)
    {
        for(int j = 0; j < array_size - i - 1; j++){
            if(dataNew[j] > dataNew[j+1]){
                swap = dataNew[j];                 //swapping the values that are adjacent to each other
                dataNew[j] = dataNew[j+1];
                dataNew[j+1] = swap;
            }
            complexity++;
        }
        complexity++;
    }
    //checkSort(dataNew);
    //printArray(dataNew);
    delete[] dataNew;
	return complexity;
}



/*
Function Description:
This function applies the algorithm for insertion sort to the array that is created by the initializeArray function.
The algorithm finds a value thats out of place and compares it down the array and inserts it when the previous index is less than the value in question.

Pre-conditions: Requires nothing to be passed in since the copyArray function is used within.
Post-conditions: Returns the number of operations that had to be done in order to sort the array. Memory freed by deleting the array created.
*/
int Sorting::insertionSort()
{
    //getting a copy of the array
    int *dataNew = copyArray();

    //printArray(dataNew);
    int index = 0;
    int complexity = 0;

    for (int i=1; i<array_size; i++)
    {
        index = dataNew[i];
        int j = i;
        while (j>0 && dataNew[j-1]>index)    //comparing the value to the value prior
        {
            dataNew[j] = dataNew[j-1];    //going down the array until the while loop is violated
            j--;
            complexity++;
        }
        dataNew[j] = index;      //Once the loop is exited the value is placed where it should belong
        complexity++;
    }
    //printArray(dataNew);

    //checkSort(dataNew);
    delete[] dataNew;
    return (complexity);
}

/*
Function Description:
This function calls the other quick sort function which has the algorithm implemented. This function just passes in an array and the beginning and end index to the
other quick sort function.

Pre-conditions: Requires nothing to be passed in since it just calls another function.
Post-conditions: Returns the number of operations that had to be done in order to sort the array. Memory freed by deleting the array created.
*/
int Sorting::QuickSort()
{
    int *dataNew = copyArray();

    int beginingIndex = 0;
    int endIndex = array_size;

    int QuickSortCost = 0;

    QuickSortCost = QuickSort(dataNew, beginingIndex, endIndex);

    //checkSort(dataNew);
    delete[] dataNew;   //Freeing the memory
    return QuickSortCost;
}
/*
Function Description:
This function applies the algorithm for quick sort to the array that is created by the initializeArray function.
The algorithm picks a pivot point in the middle of the array. Once that is done it compares each side of the pivot to the pivot itself.
The function is called recursively if the left and right sub arrays are not sorted.

Pre-conditions: Requires an array, the starting index and the ending index to be passed in.
Post-conditions: Returns the number of operations that had to be done in order to sort the array.
*/
int Sorting::QuickSort(int random[], int left, int right)
{
    int complexity = 0;     //setting up operations counter

    int i = left;         //first index
    int j = right;         //last index
    int temp;
    int pivot = random[ (left + right) / 2];      //finding the pivot

    while (i <= j)       //going through the array
    {

        while(random[i] < pivot)     //as long as the numbers before the pivot are less than the pivot
        {
            i++;  //continue along the array
        }

        while(random[j] > pivot)      // as long as the numbers after the pivot are greater than the pivot
        {
            j--;  // continue along the array
        }

        if (i <= j)   // if the two indexes meet
        {
            temp = random[i];
            random[i] = random[j];
            random[j] = temp;
            i++;
            j--;
            complexity++;
        }
    }

    if (left < j)
    {
        complexity += QuickSort(random, left, j);
    }

    if(i < right)
    {
        complexity += QuickSort(random, i, right);
    }
    return complexity;
}
/*
Function Description:
This function applies the algorithm for selection sort to the array that is created by the initializeArray function.
The algorithm loops through the array and finds the minimum and shifts that down to the first index and each subsequent
minimum is then placed in the next index.

Pre-conditions: Requires nothing to be passed in since the copyArray function is used within.
Post-conditions: Returns the number of operations that had to be done in order to sort the array. Memory freed by deleting the array created.
*/
int Sorting::SelectionSort()
{
    int minIndex;
    int complexity = 0;
    int tmp;
    int *dataNew = copyArray();

    for (int i = 0; i < array_size - 1; i++)   //Iterating through array
    {
        minIndex = i;    //setting the first index to min
        for(int j = i + 1; j < array_size; j++)  //second loop for comparison
        {
            if(dataNew[j] < dataNew[minIndex]) //if theres a minimum thats not in the first index
                minIndex = j;
            if(minIndex != i)   //setting it to be in the proper index
            {
                tmp = dataNew[i];
                dataNew[i] = dataNew[minIndex];
                dataNew[minIndex] = tmp;
            }
            complexity++;
        }
        complexity++;
    }
    delete[] dataNew;
    return complexity;
}
/*
Function Description:
This function applies the algorithm for shell sort to the array that is created by the initializeArray function.
The algorithm starts by comparing values that are many indexes apart and places them according to that comparison.
The algorithm then does this over and over again reducing the gap each time.

Pre-conditions: Requires nothing to be passed in since the copyArray function is used within.
Post-conditions: Returns the number of operations that had to be done in order to sort the array. Memory freed by deleting the array created.
*/
int Sorting::ShellSort()
{
    int complexity = 0;
    int flag = 1;
    int temp;
    int d = array_size;

    int *dataNew = copyArray();

    while (flag > 0 || d > 1)    //Looping through the array until the gap is less than 1
    {
        flag = 0;
        d = (d+1)/2;           //Decreasing the gap
        for (int i=0; i < array_size - d; i++)
        {
            if (dataNew[i+d] < dataNew[i])      //comparing two values that are separated by a gap
            {
                temp = dataNew[i+d];      // this is the swap
                dataNew[i+d] = dataNew[i];
                dataNew[i] = temp;
                flag = 1;
            }
            complexity++;
        }
        complexity++;
    }
    //checkSort(dataNew);
    //printArray(dataNew);
    delete[] dataNew;
    return complexity;
}
 /*
Function Description:
This function applies the algorithm for gnome sort to the array that is created by the initializeArray function.
The algorithm finds the first instance where two values that are next to each other are in the wrong order and then it swaps them.
It then goes back one index and compares it to the value next to it and continues swapping.

Pre-conditions: Requires nothing to be passed in since the copyArray function is used within.
Post-conditions: Returns the number of operations that had to be done in order to sort the array. Memory freed by deleting the array created.
*/
int Sorting::GnomeSort()
{
    int complexity = 0;
    int *dataNew = copyArray();
    int temp;

    int position = 0;

    while(position < array_size)
    {
        if (dataNew[position] >= dataNew[position-1] || position == 0)    //Start the index at one to compare it with the value at the previous index
        {
            position = position +1;    //Iterate if the array at those two points are correct
        }
        else
        {
            temp = dataNew[position];                         //Swap the values in the array
            dataNew[position] = dataNew[position -1];
            dataNew[--position] = temp;
            complexity++;
        }
    }
    //checkSort(dataNew);
    //printArray(dataNew);
    delete[] dataNew;
    return complexity;
}
