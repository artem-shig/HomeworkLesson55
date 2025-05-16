#include "logic.h"

//int find_max_digit(int num, int maxDigit) {
//
//	num = num < 0 ? -num : num;
//
//	if (num == 0) {
//		return maxDigit;
//	}
//
//	if (maxDigit < num % 10) {
//		maxDigit = num % 10;
//	}
//
//	return find_max_digit(num / 10, maxDigit);
//}

int find_max_digit(int num, int maxDigit) {

	num = num < 0 ? -num : num;

	while (num != 0) {
		if (maxDigit < num % 10) {
			maxDigit = num % 10;
		}
		num /= 10;
	}

	return maxDigit;
}