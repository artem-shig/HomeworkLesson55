#include "logic.h"

bool check_power_of_number(int num, int powerNumber) {

	if (powerNumber == 1) {
		return true;
	}
	else if (powerNumber % num == 0) {
		return check_power_of_number(num, powerNumber / num);
	}

	return false;

}

//bool check_power_of_number(int num, int powerNumber, bool result) {
//
//	while (powerNumber > num) {
//		if (powerNumber % num == 0) {
//			powerNumber /= num;
//			result = true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	return result;
//}