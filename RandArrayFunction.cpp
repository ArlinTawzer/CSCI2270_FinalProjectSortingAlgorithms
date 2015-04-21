#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int createRandArray(int* randArray);

int main()
{
    int theArray[1000];
    createRandArray(theArray);
    int counter = 0;

    for(int i=0; i<1000; i++)
    {
        counter++;
        cout << theArray[i] << endl;
    }
    return 0;
}

int createRandArray(int* randArray)
{
    //Initialize the array
    int size1 = 1000;
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
    }
    return *randArray;
}
