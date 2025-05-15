#include "logic.h"

int main() {

	cout << "Sum of digits.\n";

	int num;
	cout << " Enter your number: ";
	cin >> num;

	int sum = 0;

	cout << " The sum of the digits of a given number = "
		<< sum_all_digits_of_number(num, sum) << endl;

	return 0;
}