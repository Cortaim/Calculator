#include  <iostream>
#include "mathFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include <string>

using namespace::calculator;
int main() {

	std::cout << division(300, 15) << "\n";
	std::cout << sub(15, 16) << "\n";
	std::cout << sum(14, 15) << "\n";
	
	std::cout << leftShift(1, 2, false) << "\n";
	int a = pow(3, 8);

	std::cout << a << "\n";
	std::cout << reciprocalFunction(5) << "\n";
	std::cout << logarithm(e) << "\n";
	std::cout << factorial(7) << "\n";
	std::cout << sqrt(6) << "\n";
	std::cout << pow(6, 0.5) << "\n";
	std::cout << sin(3.1416) << "\n";  //uhm

	return 0;

}