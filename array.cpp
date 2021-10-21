//
// Created by Maria Baburina on 18.10.21.
//

#include <array>
#include <valarray>
#include <string>
#include "array.h"

using namespace std;

void array_foo() {
    array<string, 2> aStr = {"w", "x"};

    valarray<string> valStr("h", 4);
}