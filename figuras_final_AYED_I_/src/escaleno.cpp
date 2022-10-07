#include "../include/escaleno.hpp"
#include "../include/figura.hpp"
Escaleno::Escaleno():Figura()
{
    
}
Escaleno::~Escaleno()
{
   
}

float Escaleno::perimetro()
{
    return getX()+getA()+getY();
}

float Escaleno::area()
{
    return (getA()*getX());
}