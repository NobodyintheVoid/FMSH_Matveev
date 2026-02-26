#ifndef SHAPES_POINT_H
#define SHAPES_POINT_H
#include <cmath>

struct Point
{
    double X;
    double Y;

    static double Distance(Point p1, Point p2);
};

#endif