#include "logic.h"

//double function(double x, unsigned int n) {
//
//    return n == 0 ? 1 : (x / n) * function(x, n - 1);
//}

double function(double x, unsigned int n) {

	int factorial = 1;
	double xPower = 1.0;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	for (int i = 0; i < n; i++)
	{
		xPower *= x;
	}

    return n == 0 ? 1 : xPower / factorial;
}