#include "logic.h"

int main() {

	cout << "Power of a number.\n";

	int num;
	cout << " Enter your number: ";
	cin >> num;

	int powerNumber;
	cout << " Enter your number to the power of " << num << ": ";
	cin >> powerNumber;

	bool result = false;

	if (num == 1 && powerNumber == 1) {
		result = true;
	}
	else if (num <= 1 || powerNumber <= 0) {
		result = false;
	}
	else {
		result = check_power_of_number(num, powerNumber);
	}

	string msg = result ? to_string(powerNumber) + " is a power of a " + to_string(num)
		: to_string(powerNumber) + " is not a power of a " + to_string(num);

	cout << " Result: " << msg << endl;

	return 0;
}