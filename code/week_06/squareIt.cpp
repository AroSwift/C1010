
#include <iostream>
using namespace std;

double squareIt( double base, double square ) {
	double num_run, anwser;

	for( num_run = 2, anwser = base; num_run <= square; num_run++ ) {
		anwser *= base;
	}		  
	  
	return anwser;
}

int main() {
	
	double base, square;
	
	cout << "Please enter the base: ";
	cin >> base;

	cout << "Please enter the square: ";
	cin >> square;

	cout << base << " squared by " << square << " equals " <<  squareIt(base, square) << endl;

	return 0;

}
