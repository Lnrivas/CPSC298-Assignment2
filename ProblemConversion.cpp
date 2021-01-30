/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 2 - Problem4(Conversion)
*/
#include <iostream>
#include <string>

using namespace std;

// prompts user for inches and returns it
int getInches() {
  int tempInches;
  cout << "Inches: ";
  cin >> tempInches;
  return tempInches;
}

// prompts user for feet and returns it
int getFeet() {
  int tempFeet;
  cout << "Feet: ";
  cin >> tempFeet;
  return tempFeet;
}

// converts the amount of feet and inches into meters and centimeters
void calculate(int inches, int feet, int& meters, int& centimeters) {
  double totalFeet = feet;
  totalFeet += inches / 12.0;
  centimeters = totalFeet * 0.3048 * 100; /////////////////////////////////////////////////////////////
  meters = centimeters / 100.0;
  centimeters %= 100;
}

// prints the amount of meters and centimeters
void printInfo(int meters, int centimeters) {
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

int main () {
  string again;
  do {
    int inches = getInches(); //gets amount of inches from user
    int feet = getFeet(); //gets amount of feet from user
    int meters;
    int centimeters;
    calculate(inches, feet, meters, centimeters); //converts the feet and inches into meters and centimeters
    printInfo(meters, centimeters); //prints the amount of meters and centimeters
    cout << "Type \"exit\" to exit or anything else to continue" << endl; 
    cin >> again; //check if program should repeat or end
  } while (again != "exit");
  return 0;
}

// Write a program that will read in a length in feet and inches and output the equivalent length in meters and centimeters.
// Use at least threefunctions: one for user input,one or more for calculating, and one for output(console).
// Include a loop that lets the user repeat this computation for new input values until the user says he or
// she wants to end the program(user has to type exit).There are 0.3048 meters in a foot, 100 centimeters in a meter,
// and 12 inches in a foot.
