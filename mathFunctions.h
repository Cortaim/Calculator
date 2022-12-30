#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

#include <cmath>
namespace calculator{

#define e 2.7182818284590452353602

template<typename T>
T absolute(const T number) {
	return (number >= 0) ? number : (number * (-1));
};


double sqrt(const double);

double root(const double, const int deg = 2);


double reciprocalFunction(const double);


long long factorial(const long long );

double logarithm(const double, const double = e);

int sin(const int&);

int cos(const int&);

int tan(const int&);

int ctg(const int&);


}
#endif // !MATHFUNCTIONS_H
