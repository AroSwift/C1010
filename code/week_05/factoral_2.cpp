/*
 * File: factoral.cpp
 * Author: Aaron Barlow
 * Purpose: Calculate factoral
 */


#include <iostream>
using namespace std;

double factoral( int values, int given ) {
	if (given == 0) {
		return 1;
	} else {
		double factoral = values;
		return factoral(values, given);
	}

}



int main() {


	double user_input, values, factoral = 1;

	cout << "Please enter the number you wish to factor: ";
	cin >> user_input;

	for( assend = 1; values <= user_input; assend++ ) {
		factoral *= values;
	}

	cout << user_input << "!" << " = " << factoral << endl;

	return 0;

}

