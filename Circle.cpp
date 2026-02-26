#include "Circle.h"
#include <cmath>
#include <iostream>


double Circle::Change(double k) {
	R = R * k;
	return abs(R);
}

double Circle::CalculatePerimeter() {
	return 2 * R * 3.1415;
}
double Circle::CalculateArea() {
	return 3.1415 * R * R;
}

Circle::Circle(double r) {
	R = abs(r);
};
