#include "logic.h"

int main() {

	cout << "Sum of digits.\n";

	int num;
	cout << " Enter your number: ";
	cin >> num;

	cout << " The sum of the digits of a given number = "
		<< sum_all_digits_of_number(num) << endl;

	return 0;
}