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
        int *dataTable;
};

#endif // SORTING_H
