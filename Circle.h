//
// Created by masha on 11.02.2026.
//

#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H
#include "Shape.h"
#include "cmath"

class Circle : public Shape
{
private:
	double R;
public:
	Circle(double r);
	double Change(double k);
	double CalculateArea() override;
	double CalculatePerimeter() override;
};

#endif //SHAPES_CIRCLE_H