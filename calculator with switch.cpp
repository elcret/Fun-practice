//this code acts as a calculator

#include <iostream>
using namespace std;

int main() {
	int x, y, choice;
	cout << "enter two numbers, seperated by a space: ";
	cin >> x >> y;

	cout << "choose an operation to do: \n";
	cout << "1. add\n";
	cout << "2. subtract\n";
	cout << "3. multiply\n";
	cout << "4. divide\n";
	cout << "enter a choice 1-4: ";
	cin >> choice;

	switch (choice) {
		case 1: 
			cout << "result = " << x + y;
			break;
		case 2:
			cout << "result = " << x - y;
			break;
		case 3:
			cout << "result = " << x * y;
		case 4: 
			if (y == 0) {
				cout << "you cannot divide by zero!!";
			} else {
				cout << "result = " << x / y;
				break;
		default :
			cout << "invalid choice.";
			}
	}
	return 0;
}