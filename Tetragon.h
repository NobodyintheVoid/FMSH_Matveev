

//
// Created by masha on 11.02.2026.
//

#ifndef SHAPES_TETRAGON_H
#define SHAPES_TETRAGON_H
#include "Shape.h"
#include "cmath"

class Tetragon : public Shape
{
private:
	double A;
	double B;
	double C;
	double D;
	double addiag;
public:
	Tetragon(double a, double b, double c, double d, double e);
	double Change(double k);
	double InscribedCircle();
	double CircumScribedCircle();
	double CalculateArea() override;
	double CalculatePerimeter() override;
};

#endif //SHAPES_TETRAGON_H