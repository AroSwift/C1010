/*
 *File: Input_OutPut.cpp
 *Author: Aaron Barlow
 *Date: 9 September 2015
 */

#include <iostream>
using namespace std;

int main() {

	double x = 42.1298;

	cout << "The answer to the question of \n";
	cout << "Life, the Universe, and Everything is ";
			 
	// Do NOT allow any number after decimal
	cout.setf( ios::fixed );
	cout.precision(0);

 	cout << x << ", not ";
	
	// Allow one number after decimal
	cout.setf( ios::fixed | ios::showpoint );
	cout.precision(1);	
				
	cout<< x << " and not $";
	
	// Allow two numbers after decimal
	cout.setf( ios::fixed | ios::showpoint );
	cout.precision(2);

	 cout << x << endl;


	return 0;

}

