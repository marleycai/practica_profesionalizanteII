#include "../include/equilatero.hpp"
#include "../include/figura.hpp"
Equilatero::Equilatero():Figura()
{
    
}
Equilatero::~Equilatero()
{
   
}

float Equilatero::perimetro()
{
    return getA()*3;
}

float Equilatero::area()
{
    return (getA()*getX()/2);
}