#include "logic.h"

//int sum_all_digits_of_number(int num, int sum) {
//
//	sum += num % 10;
//	num /= 10;
//
//	if (num == 0) {
//		return sum;
//	}
//
//	return sum_all_digits_of_number(num, sum);
//}

int sum_all_digits_of_number(int num, int sum) {

	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}