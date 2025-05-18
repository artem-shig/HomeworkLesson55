#include "logic.h"

// f(123) --> f(12) + 3
//f(12) --> f(1) + 2

int sum_all_digits_of_number(int num) {

	if (num > -10 && num < 10) {
		return num;
	}

	return sum_all_digits_of_number(num / 10) + num % 10;
}

//int sum_all_digits_of_number(int num) {
//
//	int sum = 0;
//
//	while (num != 0) {
//		sum += num % 10;
//		num /= 10;
//	}
//
//	return sum;
//}