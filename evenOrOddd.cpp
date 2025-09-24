//this code asks the user for a number and prints wether its even or odd
#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "enter any number: ";
	cin >> a;

	if (a % 2 == 0) {
		cout << "the number is even";
	}
	else {
		cout << "The number is odd;";
	}
	return 0;
		
	
}