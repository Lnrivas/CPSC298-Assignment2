/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 2 - Problem1(IntArray)
*/
#include <iostream>

using namespace std;

int main () {
  int numberArray[10] = {0,0,0,0,0,0,0,0,0,0}; // creates int array and fills it with 0s
  int checkIfNonNegative = 1; // where the user input is stored and then put into array if its nonnegative
  short count = 0; // counter for while loop so no more than 10 ints are entered

  while (checkIfNonNegative > 0 && count < 10) { // gets user input of 10 ints, stopping at 10 or when a negative is entered
    cout << "Enter a nonnegative integer: ";
    cin >> checkIfNonNegative;
    numberArray[count] = checkIfNonNegative;
    ++count;
  }

  for (int i = 0; i < 10; ++i) { // prints all nonnegative ints in array 
    if (numberArray[i] > 0) {
      cout << numberArray[i] << " ";
    }
  }
  cout << endl;

  return 0;
}

// Write a program that will read up to ten nonnegative integers into an array called numberArray and then write/printthe integers back to the screen(console output).
// For this exercise you need notuse any functions.
