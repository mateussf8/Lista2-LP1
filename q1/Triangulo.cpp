#include "Triangulo.h"
#include <string>
using namespace std;

double Triangulo::calcularArea(double a, double b){
    double ar;
    ar = (b*a)/2;
    return ar;
}

void Triangulo::setArea(double altura){
    if(altura <=0){
        //base = 1;
        altura = 1;
    }
}

void Triangulo::setNome(string nome){
    this->nome = nome;
}

string Triangulo::getNome(){
    return nome;
}

Triangulo::Triangulo(double base, double high, string n) : FiguraGeometrica(base, n) {

    Triangulo::setArea(high);

}
