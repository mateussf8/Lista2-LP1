#include "contaespecial.h"


ContaEspecial::ContaEspecial(){
    nomeCliente = "";
    salarioMensal = 0;
    numeroConta = 0;
    saldo = 0;
    limite = 0;
}

ContaEspecial::ContaEspecial(string nome, double salario, double nconta, double s){
    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = nconta;
    saldo = s;
}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMensal;
}
