#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

	char again;
	bool repeat = true;
	string suit_type, card_type;
	srand( time(NULL) ); // intilize random seed

	while ( repeat == true ) {

		int random_card = rand() % 12 + 1;
		int random_suit = rand() % 4 + 1;

		switch( random_suit ) {
			case 1:
				suit_type = "Hearts";
				break;
			case 2:
				suit_type = "Diamonds";
				break;
			case 3:
				suit_type = "Clubs";
				break;
			case 4:
				suit_type = "Spades";
				break;
		}

		switch( random_card ) {
			case 1:
				cout << "Ace of " << suit_type << endl;
			case 11:
				cout << "Jack of " << suit_type << endl;
				break;
			case 12:
				cout << "Queen of " << suit_type << endl;
				break;
			case 13:
				cout << "King of " << suit_type << endl;
				break;
			default:
				cout << random_card << " of " << suit_type << endl;
				break;
		}

		cout << "Would you like to try again? (Y, N) \n";
		cin >> again;

		switch( again ) {
			case 'Y': case 'y':
				repeat = true;
				break;
			case 'N': case 'n':
				repeat = false;
				break;
			default:
				repeat = false;
				break;
		}

	} // end while loop

	return 0;

}
