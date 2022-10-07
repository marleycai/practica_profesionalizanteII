#include "../include/figura.hpp"

Figura::Figura()
{
}

Figura::~Figura()
{
}

void Figura::setX(float x )
{
    _x = x;
}

void Figura::setY(float y )
{
    _y = y;
}

void Figura::setA(float a )
{
    _a = a;
}


float Figura::getX()
{
    return _x;
}

float Figura::getY()
{
    return _y;
}

float Figura::getA()
{
    return _a;
}