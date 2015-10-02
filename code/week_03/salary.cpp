/*
 * File: salary.cpp
 * Author: Aaron Barlow
 * Date: 11 Sebtember 2015
 */


#include <iostream>
using namespace std;

int main() {

	// set rate and hours to double
	double rate, hours, salary;

	cout << "Please enter your hours: ";
	cin >> hours;

	cout << "Please enter your rate: $";
	cin >> rate;

	// If hours are greater than or equal to 40
	if ( hours <= 40 ) {
		salary = hours * rate;
	
	// If hours are less than 40
	} else {
		salary = 40 * rate + (hours - 40) * 1.5;
	}

	cout << "Your salary is: $" << salary << endl;

	return 0;

}

