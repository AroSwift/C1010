/*
 * File: grade.cpp
 * Author: Aaron Barlow
 * Date: 16 September 2015
 */

using namespace std;
#include <iostream>


int main() {

	// Set vars
	bool again = true;
	char letterGrade, input_again;

	do {
		cout << "Please enter your grade: ";
		cin >> letterGrade;
		switch ( letterGrade ) {
			case 'A': case 'a':
				cout << "Excellent!";
				break;
			case 'B': case 'b':
				cout << "Good job.";
				break;
			case 'C': case 'c':
				cout << "Average";
				break;
			case 'D': case 'd':
				cout << "You passed.... barely :(";
				break;
			default:
				cout << "Fail";
			}
		cout << "Would you like to enter another grade? (y,n) \n";
		cin >> input_again;
	
		switch ( input_again ) {
			case 'Y': case 'y':
				again = true;
				break;
			case  'N': case 'n':
				again = false;
				break;
		}

	} while ( again == true );

	return 0;

}
