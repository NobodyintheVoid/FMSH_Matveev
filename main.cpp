#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Tetragon.h"

#include "Point.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    
    Triangle t = Triangle::Triangle(3,4,5);
    double S = t.CalculateArea();
    double P = t.CalculatePerimeter();
    Circle p = Circle::Circle(4);
    double S2 = p.CalculateArea();
    double P2 = p.CalculatePerimeter();
    double r2 = p.Change(2);
    Tetragon f = Tetragon::Tetragon(3, 4, 5, 6, 5);
    double S2 = f.CalculateArea();
    double P2 = f.CalculatePerimeter();
    double r2 = f.Change(2);
    double RV = f.InscribedCircle();
    double RO = f.CircumScribedCircle();


}