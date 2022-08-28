#include <iostream>
#include "Fraccion.hpp"

//Constructor por default
Fraccion::Fraccion() {
    
}

//Constructor con parametros
Fraccion::Fraccion(int num, int den)
{
    
}

//Destructor
Fraccion::~Fraccion()
{}

//Getters
int Fraccion::getNum()
{
    return 0;
}

int Fraccion::getDen()
{
    return 1;
}

//Setters
void Fraccion::setNum(int num)
{
    
}

void Fraccion::setDen(int den)
{
    
}

//Calculando el valor real
double Fraccion::calcValorReal()
{
    return 0.0f;
}

//Simplificando la Fraccion
// Calcula el MCD usando el algoritmo de Euclides 
int Fraccion::mcd()
{
    return 1;
}

// Simplifica la fracción utilizando el algoritmo de Euclides -----
void Fraccion::simplifica()
{
    
}

//Imprime Fraccion en formato num/den y en valor decimal
void Fraccion::imprimeFraccion()
{
    std::cout << num << "/" << den << "=" << calcValorReal() << "\n";
}

