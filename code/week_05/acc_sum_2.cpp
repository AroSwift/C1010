/*
 * File: acc_sum.cpp
 * Author: Aaron Barlow
 * Purpose: Find the average of specified num of grades
 */

#include <iostream>
using namespace std;

int main() {

	double average = 0, total_grade, grade;
	int times_run = 0;
	bool again;
	char user_input;

	do {
		cout << "Enter numeric grade: ";
		cin >> grade;

		total_grade += grade;	

		cout << "Would you like to enter another grade? (y, n)";
		cin >> user_input;

		switch ( user_input ) {
			case 'Y': case 'y':
				again = true;
				break;
			case 'N': case 'n':
				again = false;
				break;
			default:
				again = false;
				break;
		}

		times_run++;

	} while( again == true );
	
	// calculate average
	average = total_grade/times_run;

	// Print average
	cout << "This is the average of " << times_run << " grades is " << average << endl;

	return 0;

}
