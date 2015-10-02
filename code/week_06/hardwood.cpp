/*
 * File: hardwood.cpp
 * Author: Aaron Barlow
 * Purpose: Have a do while to do a menu
 */

#include <iostream>
using namespace std;

int main() {

	char user_input;
	bool again = true;

	do {
		cout << "H hardwood \n";
		cout << "L laminate \n";
		cout << "E engineered hardwood \n";
		cout << "Q quit \n";
		cin >> user_input;

		switch( user_input ) {
			case 'H': case 'h':
				cout << "You ordered hardwood. \n";
				break;
			case 'L': case 'l':
				cout << "You ordered laminate \n";
				break;
			case 'E': case 'e':
				cout << "You ordered engineered hardwood \n";
				break;
			case 'Q': case 'q':
				cout << "Goodbye \n";
				again = false;
				break;
			default:
				cout << "Try again \n";
				break;
		}

	} while ( again == true );


	return 0;

}
