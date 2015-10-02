/*
 * File: factoral.cpp
 * Author: Aaron Barlow
 * Purpose: Calculate factoral
 */


#include <iostream>
using namespace std;


int main() {


	double user_input, assend, factoral = 1;

	cout << "Please enter the number you wish to factor: ";
	cin >> user_input;

	for( assend = 1; assend <= user_input; assend++ ) {
		factoral *= assend;
	}

	cout << user_input << "!" << " = " << factoral << endl;

	return 0;

}

