#include "logic.h"

int main() {

	cout << "Max digit.\n";

	int num;
	cout << " Enter your number: ";
	cin >> num;

	if (num == 0) {
		return 0;
	}

	cout << " Max digit in a " << num << " is "
		<< find_max_digit(num) << endl;

	return 0;
}