/*
 * File: rock-paper.cpp
 * Author: Aaron Barlow
 * Purpose: Play rock paper sissor
 */

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;


int main() {

	// set char vars
	char rock, paper, sissor, user_selected, computer_selected, again;
	int play = 1;

   srand( time(0) );

	while ( play != 0 ) {
		cout << "Please enter (P) for paper,(R) for rock, and (S) for sissors: ";
		cin >> user_selected;

		// randimize 
		int random = rand() % 3 + 1;
		
		// Determine computers anwser
		if ( random ==  1) {
			computer_selected = 'R';
		} else if ( random ==  2) {
			computer_selected = 'P';
		} else if ( random == 3 ) {
			computer_selected = 'S';
		} else {
			cout << "ERROR \n";
		}


		// Decide who won
		switch ( user_selected ) {
			case 'R': case 'r':
				if ( computer_selected == 'R' ) {
					cout << "You tied! \n";
				} else if ( computer_selected == 'S' ) {
					cout << "You won! Rock beats Sissors \n";
				} else if ( computer_selected == 'P' ) {
					cout << "You lose! Paper beats Rock \n";
				} else {
					cout << "Oops! Computer is too slow! \n";
				}
				break;
			case 'P': case 'p':
				if ( computer_selected == 'P' ) {
					cout << "You tied! \n";
				} else if ( computer_selected == 'R' ) {
					cout << "You won! Paper beats rock \n";
				} else if ( computer_selected == 'S') { 
					cout << "You lose! Sissors beats Paper \n";
				}  else {
					cout << "Oops! Computer is too slow! \n";
				}
				break;
			case 'S': case 's':
				if ( computer_selected == 'S' ) {
					cout << "You tied! \n";
				} else if ( computer_selected == 'P' ) {
					cout << "You won! Sissors beats Paper \n";
				} else if ( computer_selected == 'R' ) {
					cout << "You lose! Rock beats Sissors \n";
				} else {
					cout << "Oops! Computer is too slow! \n";
				}
				break;
			default:
				cout << "You all janky! \n";
				break;
		} // end user_selected switch

		cout << "Would you like to play again? (y,n) ";
		cin >> again;

		switch ( again ) {
			case 'Y': case 'y': 
				play = 1;
				break;
			case 'N': case 'n':
				play = 0;
				break;
			default:
				play = 0;	
			  	break;
		} // end again switch


	} // end while

	return 0;

}


