/*
 *File: coins.cpp
 *Author: Aaron Barlow
 *Purpose: Calculate number of nickens, dimes, quarters, and pennies and display number of cents
 *
 *	Algorithm:
 *		1. Prompt for pennies
 *		2. Read pennies
 *		3. Prompt for nickels
 *		4. Read nickels
 *		5. Prompt for dimes
 *		6. Read dimes
 *		7. Prompt for quarters
 *		8. Read quarters
 *		9. Calculate number of cents 
 *		10. Display number of cents
 *
 *	Test 1:
 *		1. Enter 10
 *		2. Enter 10
 *		3. Enter 10
 *		4. Enter 10
 *		5. Expect: 2.05
 *
 *	Test 2:
 *		1. Enter .5
 *		2. Enter .5
 *		3. Enter .5
 *		4. Enter .5
 *		5. Expect: 0.205
 *
 *
 *
 */

#include <iostream>
using namespace std;


int main() {

	// Initalize variables
	double nickels, dimes, quarters, pennies;

	// Ask for pennies
	cout << "Enter number of pennies: \n";
	cin >> pennies;

	// Ask for nickels
	cout << "Enter number of nickels: \n";
	cin >> nickels;

	// Ask for dimes
	cout << "Enter number of dimes: \n";
	cin >> dimes;

	// Ask for quarters
	cout << "Enter number of quarters: \n";
	cin >> quarters;


	// Calculate number of cents
	pennies *= .01;
	nickels *= .05;
	dimes	*= .10;
	quarters *= .25;
	double total_cents = pennies + nickels + dimes + quarters;

	// Display total cents
	cout << "Total number of cents = " << total_cents  << endl;


	return 0; // Expect no errors

}

