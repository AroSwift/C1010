/*
 File: coal.cpp
 Author: Aaron Barlow
 Date: 9/07/2015
 Purpose: This application calculates how much energy coal produces  
*/

#include <iostream>
using namespace std;

int main() {

	// Set variables to be used to calculate the  percentage of common elements in coal
	double Carbon, Hydrogen, Oxygen, Sulfur;

	// Display welcome message
	cout << "Welcome to the Coal Calorific Value Calculator! \n";

	// Prompts user for percentage of carbon, hydrogen, oxygen, and sulfur
	cout << "Please enter the percent of carbon, hydrogen, oxygen, and sulfur in this coal: \n";
	cin >> Carbon >> Hydrogen >> Oxygen >> Sulfur;

	// Calculate coal calorific value
	double calorific_value = (337 * Carbon) + (1442 * (Hydrogen - Oxygen/8)) + (93 * Sulfur);
	calorific_value *= .01; // Convert to kilo Joules per kilogram

	// Display Coal Calorific value in kJ/kg
	cout << "Coal Calorific Value: " << calorific_value << " kJ/kg" << endl;

	// Display thank you message
	cout << "Thank you for using this program! \n";

	return 0;
	
}
