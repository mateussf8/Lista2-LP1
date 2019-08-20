#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nombre, string numro, double soldado, double saulaurio, double limita) : Conta(nombre, numro, soldado, saulaurio, limita)
{

}

void ContaEspecial::definirLimite(){
    Limite = 3*SalarioMensal;
}


