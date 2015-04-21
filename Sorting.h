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
    protected:
    private:
        int *copyArray();
        int *dataTable;
        int array_size; //use to know how many variables there are in the array
        void printArray(int *array);
};

#endif // SORTING_H
