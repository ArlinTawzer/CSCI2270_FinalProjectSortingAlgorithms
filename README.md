# 2270SortingAlgorithms

Project Summary:
The purpose of this program is to write code to compare the algorithmic complexity of various sorting algorithms over a randomized data set. We will do this by first randomizing integers from 1 through 1000 and placing them into an array. Then we will clone the array several times. Each of the cloned arrays will have a separate sorting algorithm applied to it and we will then output which algorithm took the least algorithmic cost.

How to Run:
In order to use the main part of the program the user must first initialize the array before they can call the sort option from the main menu. They can then compare the cost for each algorithm implemented. They can then learn about the different algorithms by navigating to the more information menu and selecting which algorithm they want to learn about. They can also change the array itself by going to the settings menu and playing around with the size of the array and how the array is ordered and how that affects the cost of each of the sorts. The array must be initialized before you can change the settings of the array.

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
selectionSort() - Sorts an array using the selection sort algorithm and returns complexity counter.
quickSort() - Sorts an array using the quick sort algorithm and returns the operation count.
gnomeSort() - Sorts an array using the gnome sort algorithm and returns the operation count.

Dependencies: This program uses the C++ libraries.

System Requirements: This code should be able to compile and run on most operating systems used.

Group Members: Soham Shah, Dmytro Ryzhkov, Girish Ramkumar, Arlin Tawzer

Contributors:

Open Issues/Bugs/Improvements:
- New pre-made special array options under the settings menu.
- More sorting algorithms to compare to the existing ones.
- Fixing any found tweaks and bugs.
- Can add more to the description of each algorithm.
- Implement the display results option. This option could offer a better way to view the comparisons between each sort after the array has been changed in the settings menu.
