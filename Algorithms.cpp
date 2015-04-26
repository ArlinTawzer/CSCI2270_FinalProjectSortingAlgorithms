#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Sorting::Bubblesort()
{
	cout << "Applying bubble sort" << endl;
	int complexity = 0;

    int *dataNew = copyArray();
	printArray(dataNew);
    int swap;
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
    }
    //checkSort(dataNew);
    //printArray(dataNew);
    delete dataNew;
	return complexity;
}

int Sorting::ExchangeSort()
{
    cout << "Applying Exchange Sort" <<endl;
    int complexity = 0;

    int *dataNew = copyArray();
	printArray(dataNew);
    int swap;
    for(int i = 0; i < array_size-1; i++)
    {
        for(int j = i+1; j < array_size; j++){
            if(dataNew[i] < dataNew[j]){
                swap = dataNew[i];
                dataNew[i] = dataNew[j];
                dataNew[j] = swap;
            }
            complexity++;
        }
    }
    //checkSort(dataNew);
    //printArray(dataNew);
    delete dataNew;
	return complexity;
}

int Sorting::insertionSort()
{
    //getting a copy of the array
    int *dataNew = copyArray();
    dataNew = dataTable;
    //printArray(dataNew);
    int index = 0;
    int complexity = 0;

    for (int i=1; i<array_size; i++)
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

    //checkSort(dataNew);
    return (complexity);
}

//Still needs to be made compatible
int Sorting::QuickSort(int random[], int left, int right)
{
    int complexity = 0;     //setting up operations counter

    int i = left;         //first index
    int j = right;         //last index
    int temp;
    int pivot = random[ (left + right) / 2];      //finding the pivot

    while (i <= j)       //going through the vector
    {

        while(random[i] < pivot)     //as long as the numbers before the pivot are less than the pivot
        {
            i++;  //continue along the vector
        }

        while(random[j] > pivot)      // as long as the numbers after the pivot are greater than the pivot
        {
            j--;  // continue along the vector
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
        QuickSort(random, left, j);
    }

    if(i < right)
    {
        QuickSort(random, i, right);
    }
    return complexity;
}

int Sorting::SelectionSort()
{
    int minIndex;
    int complexity = 0;
    int tmp;
    int *dataNew = copyArray();
    dataNew = dataTable;

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

    return complexity;
}

int Sorting::ShellSort()
{
    int complexity = 0;
    int flag = 1;
    int temp;
    int d = array_size;

    while (flag > 0 || d > 1)
    {
        flag = 0;
        d = (d+1)/2;
        for (int i=0; i < array_size - d; i++)
        {
            if (dataTable[i+d] < dataTable[i])
            {
                temp = dataTable[i+d];
                dataTable[i+d] = dataTable[i];
                dataTable[i] = temp;
                flag = 1;
            }
            complexity++;
        }
        complexity++;
    }
    //checkSort(dataTable);
    //printArray(dataTable);
    return complexity;
}
