#include <iostream>
using namespace std;

int main() {
	int i = 3;
	while (i != 36) {
		i += 3;
		cout << i << endl;
	}

	string input;
	while(input != "banana") {
		cout << "apple";
		cin >> input;
		
	}
	int j;
	int x;
	cout << "input a number to square it" << endl;
	cin >> j;
	cout << "input 0 to stop sqauring" << endl;
	do {
		j = j * j;
		cout << j;
		cout << "input?";
		cin >> x;
		
	} while (x != 0);
}
