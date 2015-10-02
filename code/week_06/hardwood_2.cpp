/*
 * File: hardwood.cpp
 * Author: Aaron Barlow
 * Purpose: Have a do while to do a menu
 */

#include <iostream>
using namespace std;

int main() {

	int square_feet, down_payment, num_boxes;
	double sub_total, tax, total;
	char wood_type;
	bool again = true;

	// all in US dollars
	const double LAMINATE_COST = 2.59, ENGINEERED_HARDWORD = 3.19, SOLID_WOOD = 3.99;
	const int FLOORING_PER_BOX = 30;

	// Print message welcome message once
	cout << "Welcome to Wood Floors R Us! \n";


	do { // entire program

		do { // find flooring type
			cout << "To order you flooring, type \n";
			cout << "\t L: Laminate ($2.59/sq ft) \n";
			cout << "\t E: Engineered hardwood (3.19/sq ft) \n";
			cout << "\t W: Solid wood ($3.99/sq ft) \n";
			cout << "\t Q: to quit/exit \n";
			cout << "Floor type: ";
			cin >> wood_type;

			switch ( wood_type ) {
				case 'L': case 'l':
					sub_total = LAMINATE_COST;
					cout << "You ordered laminate \n";
					again = true;
					break;
				case 'E': case 'e':
					sub_total = ENGINEERED_HARDWOOD;
					cout << "You ordered engineered hardwood \n";
					again = true;
					break;
				case 'W': case 'w':
					sub_total = SOLID_WOOD;
					cout << "You ordered solid wood \n";
					again = true;
					break;
				case 'Q': case 'q':
					cout << "Goodbye \n";
					again = false;
					break;
				default:
					cout << "Invalid floor type \n";
					again  = false;
					break;
			} // end switch

		} while ( again == false ); // end find flooring type

		do { // find square feet amount

			cout << "Square feet required: ";
			cin >> square_feet;

			if ( square_feet <= 0 ) {
				cout << "Square feet must be positive. \n";
				again = true;
			} else { // calculate flooring per box
 				if ( square_feet % FLOORING_PER_BOX == 0 ) {
					num_boxes = (square_feet/FLOORING_PER_BOX);
				} else {
					 num_boxes = (square_feet/FLOORING_PER_BOX) + 1;
				}
				again = false;
			}

		} while ( again == false ); // end find square feet amount

		cout << "Number of boxes: " << num_boxes << endl; // num of boxes

		// Set decimal point 2 points after decimal
		cout.setf( ios::showpoint | ios::fixed );
		cout.precision(2);

		cout << "Sub total: $" << sub_total << endl; // display subtotal

		// calculate tax
		cout << "Tax (9.25%): $" << tax << endl; 
		cout << "Total: $" << total << endl;

		if ( total < 500 ) {
			down_payment = 0;
		} else {
			down_payment = 500;
		}
		
		cout << "Required down payment: $" << down_payment << endl;
	
	} while ( again == false ); // end entire program


	return 0;

}
