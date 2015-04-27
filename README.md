# 2270SortingAlgorithms

 Authors: Soham Shah, Dmytro Ryzhkov, Girish Ramkumar, Arlin Tawzer

The purpose of this program is to write code to compare the algorithmic complexity of various sorting algorithms over a randomized data set. We will do this by first randomizing integers from 1 through 1000 and placing them into an array. Then we will clone the array several times. Each of the cloned arrays will have a seperate sorting algorithm applied to it and we will then output which algorithm took the least algorithmic cost.

Documentation:

SortingImplementation.cpp:
copyArray() - returns a copy of the random array for the sorting algorithm to run
printArray(array) - prints off the array you pass in
checkArray(array) - ensures that the array passed in is in fact sorted
createRandArray() - uses random integers to create the array to be sorted in the class
runAlgorithms() - runs each sorting algorithm implemented and prints off its cost
specialCases(int) - Takes in input from settings menu to create a pre-made array

SortingAlgorithms.cpp:
bubbleSort() - Sorts using the bubble sort algorithm and returns complexity counter
insertionSort() - Sorts using the insertion sort algorithm and returns complexity counter
shellSort() - Sorts using the shell sort algorithm and returns complexity counter
exchangeSort() - Sorts using the exchange sort algorithm and returns complexity counter
selectionSort() - Sorts using the selection sort algorithm and returns complexity counter

To add:
- New pre-made array options under the settings menu
- New sorting algorithms to compare to the existing ones
- Fixing tweaks and bugs
