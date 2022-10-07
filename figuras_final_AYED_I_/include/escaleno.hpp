#ifndef ESCALENO_H
#define ESCALENO_H
#include "../include/figura.hpp"
class Escaleno : public Figura
{ 
    public:

        Escaleno(); 
        ~Escaleno();

        float perimetro();
        float area();
};
#endif // Escaleno_H