#include "logic.h"

int main() {

	cout << "Power of a number.\n";

	int num;
	cout << " Enter your number: ";
	cin >> num;

	int powerNumber;
	cout << " Enter your number to the power of " << num << ": ";
	cin >> powerNumber;

	string msg = check_power_of_number(num, powerNumber) ? to_string(powerNumber) + " is a power of a " + to_string(num)
		: to_string(powerNumber) + " is not a power of a " + to_string(num);

	cout << " Result: " << msg << endl;

	return 0;
}