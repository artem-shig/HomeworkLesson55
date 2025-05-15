#include "logic.h"

int main() {

	cout << "Solution of the function.\n";

	double x;
	unsigned int n;
	cout << "Enter your x ang n: ";
	cin >> x >> n;

	if (x == 0 || n == 0) {
		return -1;
	}

	double result = 0;
	result = function(x, n);

	cout << "f(x;n) = " << result << endl;

	return 0;
}