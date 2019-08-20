#include "FiguraGeometrica.h"
#include "math.h"

FiguraGeometrica::FiguraGeometrica(double r, string nombre)
{
    FiguraGeometrica::setNome(nombre);
    FiguraGeometrica::setArea(r);
}

void FiguraGeometrica::setArea(double r){
    if(r <= 0)
        r = 1;
}

void FiguraGeometrica::setNome(string nome){
    this->nome = nome;
}

double FiguraGeometrica::calcularArea(double r){
    double area;
    area = M_PI*pow(r,2.0);

    return area;
}

string FiguraGeometrica::getNome(){
    return nome;
}
