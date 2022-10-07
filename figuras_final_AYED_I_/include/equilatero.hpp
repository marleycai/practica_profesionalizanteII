#ifndef EQUILATERO_H
#define EQUILATERO_H
#include "../include/figura.hpp"
class Equilatero : public Figura
{ 
    public:

        Equilatero(); 
        ~Equilatero();

        float perimetro();
        float area();
};
#endif // Equilatero_H