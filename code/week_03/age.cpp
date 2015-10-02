/*
 * File: age.cpp
 * Author: Aaron Barlow
 * Date: Sebtember 2015
 */

#include <iostream>
using namespace std;

int main() {

	// vars
	int age;

	cout << "What is your age: ";
	cin >> age;

	if ((age >= 18) && (age < 21)) {
		cout << "You can vote \n";
	} else if ((age >= 21) && (age < 25)) {
		cout << "You can drink \n";
	} else if ((age >= 25) && (age < 65)) {
		cout << "You can rent a car \n";
	} else if (age >= 65) {
		cout << "You can collect social security \n";
	} else {
		cout << "You are too young to do anything. \n";
	}




	return 0;

}

