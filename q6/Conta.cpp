#include "Conta.h"

void Conta::setLimite(double Limite){
    this->Limite = Limite;
}

void Conta::setNumeroConta(string NumeroConta){
    this->NumeroConta = NumeroConta;
}

void Conta::setNome(string NomeCliente){
    this->NomeCliente = NomeCliente;
}

void Conta::setSalario(double SalarioMensal){
    this->SalarioMensal = SalarioMensal;
}

void Conta::setSaldo(double Saldo){
    this->Saldo = Saldo;
}


double Conta::getSaldo(){
    return Saldo;
}


double Conta::getSalario(){
    return SalarioMensal;
}

double Conta::getLimite(){
    return Limite;
}

string Conta::getNome(){
    return NomeCliente;
}


string Conta::getNumeroConta(){
    return NumeroConta;
}


void Conta::sacar(double valor){
    if(valor <= Saldo){
        Saldo = Saldo - valor;
    }
    else{
        throw SaldoNaoDisponivelException();
    }
}


void Conta::depositar(double valor){
    Saldo = Saldo + valor;
}


void Conta::definirLimite(){
    Limite = 2*SalarioMensal;
}


Conta::Conta(string name,string number, double saldade, double sla, double lim)
{
    setLimite(lim);
    setSalario(sla);
    setSaldo(saldade);
    setNome(name);
    setNumeroConta(number);

}


