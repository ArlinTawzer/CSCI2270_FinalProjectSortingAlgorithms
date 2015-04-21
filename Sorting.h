#ifndef SORTING_H
#define SORTING_H

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
    protected:
    private:
        int *dataTable;
        int array_size; //use to know how many variables there are in the array
        int *copyArray(); //return a copy of the array so that it can be sorted
        void printArray(int *array); //print out all the values in the array
        bool checkSort(int *array); //check the array and make sure it is sorted
};

#endif // SORTING_H
