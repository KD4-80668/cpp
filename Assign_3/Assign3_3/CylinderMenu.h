#ifndef CYLINDERMENU_H
#define CYLINDERMENU_H
#include <iostream>
using namespace std;

enum cylinderMenu
{
    EXIT,
    GET_RADIUS,
    SET_RADIUS,
    GET_HEIGHT,
    SET_HEIGHT,
    GET_VOLUME,
    PRINT_VOLUME
};

cylinderMenu menu();

#endif