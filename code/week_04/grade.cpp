/*
 * File: grade.cpp
 * Author: Aaron Barlow
 * Date: 16 September 2015
 */

using namespace std;
#include <iostream>


int main() {

	// Set vars
	char letterGrade;

	cout << "Please enter your grade: ";
	cin >> letterGrade;

	// if ( (letterGrade == 'A') || (letterGrade == 'a'))

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


	return 0;

}
