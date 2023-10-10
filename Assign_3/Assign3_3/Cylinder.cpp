#include "./cylinder.h"

Cylinder::Cylinder()
{ // default parameterless ctor
}

Cylinder::Cylinder(float radius, float height) : radius(radius), height(height) // ctor initializer list
{
}

float Cylinder::getRadius()
{
    return this->radius;
}
void Cylinder::setRadius()
{
    cout << "\n Enter Radius : ";
    cin >> this->radius;
}
float Cylinder::getHeight()
{
    return this->height;
}
void Cylinder::setHeight()
{
    cout << "\n Enter Height : ";
    cin >> this->height;
}
float Cylinder::getVolume()
{
    this->volume = (3.14 * (this->radius) * (this->radius) * (this->height));
    return this->volume;
}
void Cylinder::printVolume()
{
    cout << "Volume of Cylinder is : " << this->volume;
}