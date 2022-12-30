#include "mathFunctions.h"


using namespace calculator;

double calculator::sqrt(const double number) {
	if (number < 0) {
		throw "Error";
	}
	return pow(number, 0.5);
};

double calculator::root(const double number, const int deg) {
	if (deg % 2 == 0 && number < 0) {
		throw "Error";
	}
	return pow(number, static_cast<double>(1)/deg);
};

double calculator::logarithm(const double number, const double base) {
	return (log(number) / log(base));
};

double calculator::reciprocalFunction(const double number) {
	return (static_cast<double>(1) / number);
};

long long calculator::factorial(const long long number) {
	if (number < 0) {
		throw "Error";
	}
	else {
		return (number <= 1) ? 1 : number * calculator::factorial(number - 1);
	}
}

int calculator::sin(const int& x)
{
	int result = 0;
	int summand = 1;
	int num = 2;
	while (std::abs(summand) >= e) {
		result += summand;
		summand *= -x * x / ((2 * num - 2) * (2 * num - 3));
		++num;
	}
	return result;
}

int calculator::cos(const int& x)
{
	int result = 0;
	int summand = x;
	int num = 1;
	while (std::abs(summand) > e) {
		result += summand;
		summand *= -x * x / ((2 * num + 1) * (2 * num));
		++num;
	}
	return result;
}

int calculator::tan(const int& x)
{
	return sin(x) / cos(x);
}

int calculator::ctg(const int& x)
{
	return 1 / tan(x);
}
