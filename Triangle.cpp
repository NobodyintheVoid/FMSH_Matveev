#include "Triangle.h"
#include <cmath>
#include <iostream>




double Triangle::CalculatePerimeter() {
	return A + B + C;
}
double Triangle::CalculateArea() {
	int p = (A + B + C) / 2;
	return sqrt(p * (p - A) * (p - B) * (p - C));
}

Triangle::Triangle(int a, int b, int c) {
	if ((a + b < c) || (a + c < b) || (b + c < a)) {
		std::cout << "impossible";
	}
	else {
		a = A;
		b = B;
		c = C;
	}
};
