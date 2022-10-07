#ifndef ISOSELES_H
#define ISOSELES_H
#include "../include/figura.hpp"
class Isoseles : public Figura
{ 
    public:

        Isoseles(); 
        ~Isoseles();

        float perimetro();
        float area();
};
#endif // Isoseles_H