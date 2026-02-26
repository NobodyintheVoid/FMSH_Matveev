//
// Created by masha on 11.02.2026.
//

#ifndef SHAPE_SHAPES_H
#define SHAPE_SHAPES_H
#include <string>

class Shape
{
public:
    int Area = 0;
    std::string Image = "";

    virtual double CalculateArea();
    virtual double CalculatePerimeter();
};


#endif