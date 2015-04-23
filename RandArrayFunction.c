#include <iostream>
#include <random>

using namespace std;

int createRandArray(int size);

int main()
{
    return 0;
}

int createRandArray(int size)
{
    //Initialize the array
    int randArray[size];
    for (int i=0; i <size; i++)
    {
        randArray[i] = 0;
    }

    //counter of all numbers to add
    for (int i=1; i<size+1; i++)
    {
        int randIndex = rand() % size;
        while (randArray[randIndex] != 0)
        {
            randIndex = rand() % size;
        }
        randArray[randIndex] = i;
    }

    return randArray;
}
