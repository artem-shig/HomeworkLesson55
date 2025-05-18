#include "logic.h"

int find_max_digit(int num) {

	num = num < 0 ? -num : num;

	if (num == 0) {
		return 0;
	}

	int lastDig = num % 10;
	int t = find_max_digit(num / 10);

	return lastDig > t ? lastDig : t;
}

//int find_max_digit(int num) {
//
//	num = num < 0 ? -num : num;
//
//	int maxDigit = num % 10;
//	num /= 10;
//
//	while (num != 0) {
//		if (maxDigit < num % 10) {
//			maxDigit = num % 10;
//		}
//		num /= 10;
//	}
//
//	return maxDigit;
//}