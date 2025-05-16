#include "logic.h"

int main() {

	cout << "Max digit.\n";

	int num;
	cout << " Enter your number: ";
	cin >> num;

	if (num == 0) {
		return 0;
	}

	int maxDigit = INT_MIN;

	cout << " Max digit in a " << num << " is "
		<< find_max_digit(num, maxDigit) << endl;

	return 0;
}