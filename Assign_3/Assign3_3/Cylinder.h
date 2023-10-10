#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
using namespace std;

class Cylinder
{
    float radius;
    float height;
    float volume;

public:
    Cylinder();
    Cylinder(float, float); // ctor initializer list

    float getRadius();
    void setRadius();
    float getHeight();
    void setHeight();
    float getVolume();
    void printVolume();
};

#endif