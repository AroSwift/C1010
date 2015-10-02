/*
 File: force.cpp
 Author: Aaron Barlow
 Purpose: to calculate the force of an object
 
  Algorithm:
 	1. Prompt for mass and acceleration
	2. Read prompt
	3. Display "force = ___" - mass * acceleration

	Test 1:
		1. Enter 5
		2. Enter 10
		3. Expect: force = 50 newtons

	Test 2:
		1. Enter -99
		2. Enter -2.2
		3. Expect: 217.8 newtons
 */


#include <iostream>
using namespace std;

int main() {

	// mass in kg, acceleration in meters per sec^2, force in newtons	
	double mass, acceleration, force;

	// Prompt user for mass and acceleration
	cout << "Please enter the mass (kg) and then acceleration (meters per second) of an object \n";
	cin >> mass >> acceleration;

	// Calculate force
	force = mass * acceleration;

	// Display force
	cout << "Force = " << force << " newtons" << endl;

	return 0;

}

