#include "logic.h"

//bool check_power_of_number(int num, int powerNumber, bool result) {
//
//	if (powerNumber % num == 0) {
//		powerNumber /= num;
//		result = true;
//	}
//	else if (powerNumber < num) {
//		return result;
//	}
//	else {
//		return false;
//	}
//
//	return check_power_of_number(num, powerNumber, result);
//}

bool check_power_of_number(int num, int powerNumber, bool result) {

	while (powerNumber > num) {
		if (powerNumber % num == 0) {
			powerNumber /= num;
			result = true;
		}
		else {
			return false;
		}
	}

	return result;
}