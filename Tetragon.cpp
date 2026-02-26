#include "Tetragon.h"
#include <cmath>
#include <iostream>



double Tetragon::Change(double k) {
	A = k * A;
	B = k * B;
	C = k * C;
	D = k * D;
	addiag = addiag * k;
	return A, B, C, D, addiag;
}

double Tetragon::InscribedCircle() {
	if (A + C != B + D) {
		std::cout << "impossible";
		return 0;
	}
	else {
		double p1 = (A + D + addiag) / 2;
		double p2 = (B + C + addiag) / 2;
		double p3 = (A + B + C + D) / 2;
		return sqrt(p1 * (p1 - A) * (p1 - D) * (p1 - addiag)) + sqrt((p2 - B) * p2 * (p2 - C) * (p2 - addiag)) / p3;
	}
}
	

double Tetragon::CircumScribedCircle() {
	double p1 = (A + D + addiag) / 2;
	double t1 = acos((A*A + D *D - addiag *addiag) / (2 * A * D));
	double t2 = acos((B*B + C *C - addiag *addiag) / (2 * B * C));
	if (t1 + t2 == 180) {
		return (A * D * addiag / (4 * sqrt(p1 * (p1 - A) * (p1 - D) * (p1 - addiag))));
	}
	else {
		std::cout << "impossible";
		return 0;
	}
}


double Tetragon::CalculatePerimeter() {
	return A + B + C+D;
}

double Tetragon::CalculateArea() {
	double p1 = (A + D + addiag) / 2;
	double p2 = (B+C + addiag) / 2;
	return sqrt(p2 * (p2 - B) * (p2 - C) * (p2 - addiag)) + sqrt(p1 * (p1 - A) * (p1 - D) * (p1 - addiag));
}


Tetragon::Tetragon(double a, double b, double c, double d, double e) {
	if ((a + d <e) || (a + e <d) || (d+e < a) || (b+c<e) || (b+e < c) || (c+e<b)) {
		std::cout << "impossible";
	}
	else {
		a = A;
		b = B;
		c = C;
		d = D;
		e = addiag;
	}
};