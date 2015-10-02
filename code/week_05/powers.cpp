/*
 * File: powers.cpp
 * Author: Aaron Barlow
 * Purpose: Do that powering stuff 
 */

#include <iostream>
using namespace std;


int main() {

	double exponent;
	int current_value, times_run = 0;
	const int i = 2;


	cout << "Please enter the exponent: ";
	cin >> exponent;

	for( current_value = exponent; current_value >= exponent && exponent >= times_run; current_value *= i, times_run++ ) {
		cout << current_value << endl;
	}

	return 0;
	
}

