//
// Created by masha on 11.02.2026.
//

#ifndef SHAPES_TRIANGLE_H
#define SHAPES_TRIANGLE_H
#include "Shape.h"
#include "cmath"

class Triangle: public Shape
{
private:
	int A;
	int B;
	int C;
public:
	Triangle(int a, int b, int c);
	double CalculateArea() override;
	double CalculatePerimeter() override;
};

#endif //SHAPES_TRIANGLE_H