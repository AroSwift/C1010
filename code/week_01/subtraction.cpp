/*
 * File: subtraction.cpp
 * Author: Aaron Barlow
 * Date: 8/31/2015
 * Purpose: Takes two integers and then subtracts, multiplies, divides, and prints results
 */

#include <iostream>
using namespace std;

int main () {

	// intializing variables
	double num1, num2;

	// Prompts user for number 1
	cout << "Please enter the first number: ";
	cin >> num1;

	// Prompts user for number 2
	cout << "Please enter the second number: ";
	cin >> num2;


	// Find the difference between number 1 and number 2
	double subtracted = num1 - num2;
	// Display difference between num1 and num2
	cout << "The difference between " << num1 << " and " << num2 << " is " << subtracted << "\n";
	
	// Find product of num1 and num2
	double product = num1 * num2;
	// Display product of num1 and num2
	cout << "The product of " << num1 << " and " << num2 << " is " << product << "\n";

	// Find quotient of number 1 and number 2
	double quotient = num1 / num2;
	// Display quotient of num1 and num1
	cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient << "\n";


	return(0);

} // End program
