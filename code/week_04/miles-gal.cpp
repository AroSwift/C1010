/*
 * File: miles-gal.cpp
 * Author: Aaron Barlow
 * Date: 14 September 2015
 */

#include <iostream>
using namespace std;

int main() {

	// set miles and gallons
	double miles, gallons;

	// Prompt for miles
	cout << "Please enter miles: ";
	cin >> miles;

	// Prompt for gallons
	cout << "Please enter gallons: ";
	cin >> gallons;

	if ( (miles < 0) && (gallons <= 0)) {
		cout << "Nay, you all janky \n";
	} else if (miles <0 ) {
		cout << "Miles all janky \n";
	} else if (gallons <= 0) {
		cout << "Gallons all janky \n";
	} else {
		double mpg = miles/gallons;
		// 
		cout << "The MPG is: " << mpg << endl;
	}

	return 0;

}
