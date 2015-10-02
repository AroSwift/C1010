
#include <iostream>
using namespace std;


int main() {


	int i, product, n;

	cout << "Enter n: ";
	cin >> n;

	for( i = 0, product = 1; i <= n; i++, product *= 2 ){
		cout << i << "\t" << product << endl;
	}


	cout << "Goodbye\n";

	return 0;


}

