#include "Medico.h"

Medico::Medico(double p, double a, string n)
{
    setNome(n);
    setAltura(a);
    setPeso(p);
}


string Medico::getNome(){
    return nome;
}


double Medico::getAltura(){
    return altura;
}


double Medico::getPeso(){
    return peso;
}


void Medico::setAltura(double al){
    altura = al;
}


void Medico::setPeso(double pe){
    peso = pe;
}


void Medico::setNome(string name){
    nome = name;
}


