#include <iostream>

using namespace std;

int main() {
	string input;
	cout << "enter a string to reverse: ";
	cin >> input;

	for (size_t i = 0; i < input.length()/2; ++i) {
		char first = input[i];
		char last = input[input.length()-1-i];

		input[i] = last;
		input[input.length()-1-i] = first;
	}

	cout << "reversed: " << input << endl;
	return 0;
}
