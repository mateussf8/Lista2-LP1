#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include "SaldoNaoDisponivelException.h"

class Conta : public IConta
{
    public:
        Conta(string, string, double, double, double);

        void setNome(string);
        void setSalario(double);
        void setLimite(double);
        void setNumeroConta(string);
        void setSaldo(double);

        void definirLimite();

        string getNome();
        string getNumeroConta();
        double getLimite();
        double getSalario();
        double getSaldo();

        void sacar(double);
        void depositar(double);

    protected:
        string NomeCliente;
        string NumeroConta;
        double SalarioMensal;
        double Saldo;
        double Limite;

    private:
};

#endif // CONTA_H
