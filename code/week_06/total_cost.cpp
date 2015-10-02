#include <iostream>
using namespace std;

const double TAX_RATE = 9.25 * .01;


double CalculateTotalCost( int num_items, double item_cost ) {
	double total_cost;
	total_cost += num_items * item_cost;
	total_cost += total_cost * TAX_RATE;
	return total_cost;
}

int main() {
	int num_items;
	double item_cost, total_cost;

	cout << "How many of these items do you want to buy? \n";
	cin >> num_items;
	cout << "What is the cost of this item? \n";
	cin >> item_cost;

	total_cost = CalculateTotalCost( num_items, item_cost );

	cout << "The total cost = " << total_cost << endl;

	return 0;
}		  
