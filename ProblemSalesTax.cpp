/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 2 - Problem3(SalesTax)
*/
#include <iostream>

using namespace std;

// this function returns the total cost including tax
double addTax(double taxRate, double cost) {
  return cost * taxRate + cost;
}

int main () {
  double taxRate;
  double cost;

  // prompts user for tax rate and cost
  cout << "Enter the tax rate as a decimal(8% tax would be entered as 0.08): "; // assumes tax percentage is entered in deciaml form
  cin >> taxRate;
  cout << "Enter the cost: $";
  cin >> cost;

  // calls addTax function to calculate the total cost and output to screen
  cout << "The total cost including tax is $" << addTax(taxRate, cost) << endl;

  return 0;
}

// Implement a function called addTax. The function addTax has two formal parameters:
// taxRate(float), which is the amount of sales tax expressed as a percent; and cost(float),
// which is the cost of an item before tax. The function returnsthe value(float)of cost so that it includes sales tax.
