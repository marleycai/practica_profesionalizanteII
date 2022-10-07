#include "../include/isoseles.hpp"
#include "../include/figura.hpp"
Isoseles::Isoseles():Figura()
{
    
}
Isoseles::~Isoseles()
{
   
}

float Isoseles::perimetro()
{
    return getX()*4;
}

float Isoseles::area()
{
    return getA()*2+ getX();
}