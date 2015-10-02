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
	string output, again;
	hours = 1;

	for ( employee = 1; employee++ ) {
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


		cout << "Would you like to enter another? (y,n) \n";
		cin >> again;

		switch ( again ) {
			case 'Y': case 'y':
				hours = 0;

		}


		}


		output = salary;
	}

	//cout << "Your salary is: $" << salary << endl;
	cout << "The salary for all employees is: " << endl;
  
	//for () {
	//	cout << output << endl;
	//}


	return 0;

}

