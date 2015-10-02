/*
 * File: intrest.cpp
 * Author: Aaron Barlow
 * Date: 11 Sebtember 2015
 */

#include <iostream>
using namespace std;


int main() {

	// set variables
	double intrest_due, total_amount, min_payment, account, intrest, intrest_rate;
	char again = 'Y';

	while ( again == 'Y' ) {

		// Ask user for bank balance
		cout << "Please enter the amount in your bank account: $";
		cin >> account;
	
		// Find intrest due
		if ( account <= 1000 ) {
			double intrest_rate = 1;
			account = (account - 1000) * 1;
		} else {
			double intrest_rate = 1.5;
			account = ((account - 1000) * 1);
			intrest = account
		}

		if ( min_payment > 10) {
			min_payment = min_payment; 
		} else {
			
		}

		
		total_amount = account * intrest_rate;

		cout << "You own: " << total_amount << endl;
		cout << "Minimum payment: " << min_payment << endl;

		cout << "Would you like to start again? \n"
		 	 << "'Y' for Yes and 'N' for No \n";
		cin >> again;

	}

	cout << "You own: $" << total_amount << endl;

	return 0;

}

