/*
 * File: acc_sum.cpp
 * Author: Aaron Barlow
 * Purpose: Find the average of specified num of grades
 */

#include <iostream>
using namespace std;

int main() {

	double sum, average, total_grade, grade;
	int times_run;
	const int RUN = 10;


	for( sum = 0, average = 1, times_run = 0; times_run < RUN; times_run++ ) {
		cout << "Enter numeric grade: ";
		cin >> grade;
	
		total_grade +=	grade;
	}

	// calculate average
	sum = total_grade/RUN;

	// Print average
	cout << "This is the average of " << RUN << " grades is " << sum << endl;

	return 0;

}
