#include "conta.h"


Conta::Conta(){
    nomeCliente = "";
    salarioMensal = 0;
    numeroConta = 0;
    saldo = 0;
    limite = 0;
}

Conta::Conta(string nome, double salario, double nconta, double s){
    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = nconta;
    saldo = s;
}

void Conta::definirLimite(){
    limite = salarioMensal*2;
}

void Conta::sacar(double valor){
    saldo -= valor;
}

void Conta::depositar(double valor){
    saldo += valor;
}
