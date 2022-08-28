#pragma once

class Fraccion
{
public:
    Fraccion();
    Fraccion(int, int);
    ~Fraccion();
    int getNum();
    int getDen();
    void setNum(int);
    void setDen(int);
    void simplifica();
    double calcValorReal();
    void imprimeFraccion();

private:
    int num;
    int den;

    int mcd();
};