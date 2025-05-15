#include "logic.h"

double function(double x, unsigned int n) {

    return (n == 0 ? 1 : (x / n) * function(x, n - 1));
}
