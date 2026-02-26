#include "Point.h"
#include <cmath>

double Point::Distance(Point p1, Point p2)
{
    double dx = (p1.X - p2.X);
    double dy = (p1.Y - p2.Y);

    return sqrt(dx*dx + dy*dy);
}