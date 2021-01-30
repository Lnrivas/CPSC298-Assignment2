/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 2 - Problem2(ZeroBoth)
*/
#include <iostream>

using namespace std;

// function to set both integer parameters to 0
void zeroBoth(int& a, int& b) {
  a = 0;
  b = 0;
}

int main () {
  int a;
  int b;

  // prompts user for two integers
  cout << "Enter an integer: ";
  cin >> a;
  cout << "Enter another integer: ";
  cin >> b;

  // passes both integers to zeroBoth function to set them to 0, and prints both integers afterwards 
  zeroBoth(a, b);
  cout << "The first integer is now: " << a << endl;
  cout << "The second integer is now: " << b << endl;

  return 0;
}

// Implement a void function called zeroBoth that has two call-by-reference parameters, both of which are variables of type int, and sets thevalues of both variables to 0.
