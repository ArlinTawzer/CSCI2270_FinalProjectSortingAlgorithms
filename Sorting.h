#ifndef SORTING_H
#define SORTING_H
#include <vector>

class Sorting
{
    public:
        Sorting();
        ~Sorting();
        void initializeArray();
        void runAlgorithms();
        void createRandArray();
        int Bubblesort();
        void moreInformation();
        int insertionSort();
        void settings();
        int QuickSort();
        int QuickSort(int random[], int left, int right);
        int GnomeSort();
        int SelectionSort();
        int ShellSort();
        void specialCases(int value);
    protected:
    private:
        int array_size; //use to know how many variables there are in the array
        int *dataTable = nullptr;
        int *copyArray(); //return a copy of the array so that it can be sorted
        void printArray(int *array); //print out all the values in the array
        bool checkSort(int *array); //check the array and make sure it is sorted
};

#endif // SORTING_H
