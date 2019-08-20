#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>
using namespace std;


class Conta : IConta{
    protected:
        string nomeCliente;
        double salarioMensal;
        double numeroConta;
        double saldo;
        double limite;

    public:
        Conta();
        Conta(string nomeCliente, double salarioMensal, double numeroConta, double saldo);
        virtual ~Conta(){};

        void sacar(double valor);
        void depositar(double valor);
        void definirLimite();


        //Métodos Get e Set:

        string getNomeCliente(){return nomeCliente;};
        double getSalarioMensal(){return salarioMensal;};
        double getNumeroConta(){return numeroConta;};
        double getSaldo(){return saldo;};
        double getLimite(){return limite;};

        void setNomeCliente(string n){nomeCliente = n;};
        void setSalarioMensal(double s){nomeCliente = s;};
        void setNumeroConta(double nc){numeroConta = nc;};
        void setSaldo(double sa){saldo = sa;};
        void setLimite(double l){limite = l;};
};

#endif // CONTA_H
