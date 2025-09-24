// this code checks the users grade
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "enter the score you got on your test (1-100): ";
	cin >> score;

	if (score >= 90) {
		cout << "you got an A!!! yay good job!! ";
	}
	else if (score >= 80) {
		cout << "you got a B!! not too bad;) ";	
	}
	else if (score >= 70) {
		cout << "you got a C... might need to do some more studying...";
	}
	else if (score >= 60) {
		cout << "you got a D, like how bro ";
	}
	else {
		cout << "you got a F. just drop the class buddy. ";
	}
	return 0;
}