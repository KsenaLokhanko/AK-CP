#include "calculator.h"
#include <iostream>

int main() {
    Calculator myCalculator;
    double a = 5.5;
    double b = 3.0;

    int resultAdd = myCalculator.Add(a, b);
    int resultSub = myCalculator.Sub(a, b);

    std::cout << "Addition result: " << resultAdd << std::endl;
    std::cout << "Subtraction result: " << resultSub << std::endl;

    return 0;
}
