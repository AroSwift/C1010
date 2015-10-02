/*
 File: coal_2.cpp
 Author: Aaron Barlow
 Purpose: This application calculates how much energy coal produces
*/

#include <iostream>
using namespace std;

int main() {

	// Elements in coal
	double carbon, hydrogen, sulfur, oxygen;
	string error; // Holds all min and max percentage errors

	// Min and max percentages allowed for four elements
	const double MIN_CARBON = 44,  MAX_CARBON = 79,
					 MIN_HYDROGEN = 2, MAX_HYDROGEN = 5,
					 MIN_SULFUR = 0.5, MAX_SULFUR = 4.5,
					 MIN_OXYGEN = 1,   MAX_OXYGEN = 30;

	// Display welcome message
	cout << "Welcome to the Coal Calorific Value Calculator! \n";
	// Prompts user for percentage of carbon, hydrogen, oxygen, and sulfur

	cout << "Please enter the percent of carbon, hydrogen, sulfur and oxygen in this coal: \n";
	cin >> carbon >> hydrogen >> sulfur >> oxygen;

	// Add error when Carbon is between 44 and 79
	if ( (carbon < MIN_CARBON) || (carbon > MAX_CARBON) ) {
		error += "Carbon must be between 44% and 79%. \n";
	}

	// Add error when Hydrogen is between 2 and 5
	if ( (hydrogen < MIN_HYDROGEN) || (hydrogen > MAX_HYDROGEN)) {
		error += "Hydrogen must be between 2% and 5%. \n";
	}

	// Add error when Sulfur is between 0.5 and 4.5
	if ( (sulfur < MIN_SULFUR) || (sulfur > MAX_SULFUR)) {
		error += "Sulfur must be between 0.5% and 4.5%. \n";
	}

	// Add error when Oxygen is between 1 and 30
	if ( (oxygen < MIN_OXYGEN) || (oxygen > MAX_OXYGEN) ) {
		error += "Oxygen must be between 1% and 30%. \n";
	}


	// Find the total percentage in coal
	double total_percent = carbon + hydrogen + oxygen + sulfur;

	// Ensure that total percentages are less than or equal to 100
	if (total_percent > 100) {
		cout << "Percentages cannot add up to more than 100. \n";

	// If error is not empty display items in error
	} else if (!( error.empty() )) {
		cout << error;
	} else { // perform calculation
		// Calculate coal calorific value
		double calorific_value = (337 * carbon) + (1442 * (hydrogen - oxygen/8)) + (93 * sulfur);
		calorific_value *= .01; // Convert to kilo Joules per kilogram

		// Make calorific_value output exactly 1 digit to the right of the decimal
		cout.setf( ios::fixed | ios::showpoint );
		cout.precision(1);

		// Display Coal Calorific value in kJ/kg
		cout << "Coal Calorific Value: " << calorific_value << " kJ/kg" << endl;
	}

	// Display thank you message
	cout << "Thank you for using this program! \n";

	return 0;

}
