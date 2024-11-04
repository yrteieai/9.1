// dod.cpp
#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsVar;

void nsDod::dod() {
    a *= -(x * x) / (2 * n * (2 * n - 1)); 
}
