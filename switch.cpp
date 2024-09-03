#include <iostream>

using namespace std;

int main() {

	char mode;
	cout << "enter program mode: ";
	cin >> mode;

	string state;

	switch (mode) {
		case 'n':
			cout << "running in normal mode" << endl;
			state = "normal";
			break;
		case 'v':
			cout << "running in verbose mode" << endl;
			state = "verbose";
			break;
		case 'h':
			cout << "running help" << endl;
			state = "help";
			break;
		default:
			cout << "running in normal mode" << endl;
			state = "normal";
	}

	return 0;
}
		


