# 2270SortingAlgorithms

 Group Members: Soham Shah, Dmytro Ryzhkov, Girish Ramkumar, Arlin Tawzer
 
 Contributors:

The purpose of this program is to write code to compare the algorithmic complexity of various sorting algorithms over a randomized data set. We will do this by first randomizing integers from 1 through 1000 and placing them into an array. Then we will clone the array several times. Each of the cloned arrays will have a seperate sorting algorithm applied to it and we will then output which algorithm took the least algorithmic cost.

Dependencies: This program uses the C++ libraries.

System Requirements: This code should be able to compile and run on most operating systems used.

Documentation:

SortingImplementation.cpp:
copyArray() - Returns a copy of the random array for the sorting algorithm to run.
initializeArray() - Initializes an array when called.
printArray(array) - Prints off the array you pass in.
checkSort(array) - Ensures that the array passed in is in fact sorted.
createRandArray() - Uses random integers to create the array to be sorted in the class.
runAlgorithms() - Runs each sorting algorithm implemented and prints off its cost.
specialCases(int) - Takes in input from settings menu to create a pre-made array.

SortingAlgorithms.cpp:
bubbleSort() - Sorts an array using the bubble sort algorithm and returns complexity counter.
insertionSort() - Sorts an array using the insertion sort algorithm and returns complexity counter.
shellSort() - Sorts an array using the shell sort algorithm and returns complexity counter.
exchangeSort() - Sorts an array using the exchange sort algorithm and returns complexity counter.
selectionSort() - Sorts an array using the selection sort algorithm and returns complexity counter.
quickSort() - Sorts an array using the quick sort algorithm and returns the operation count.
gnomeSort() - Sorts an array using the gnome sort algorithm and returns the operation count.

Open Issues/Bugs/Improvements:
- New pre-made special array options under the settings menu.
- More sorting algorithms to compare to the existing ones.
- Fixing any found tweaks and bugs.
