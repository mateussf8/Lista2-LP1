#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <Conta.h>


class ContaEspecial : public Conta{
    public:
        ContaEspecial();
        ContaEspecial(string nomeCliente, double salarioMensal, double numeroConta, double saldo);
        virtual ~ContaEspecial(){};

        void definirLimite();
};

#endif // CONTAESPECIAL_H
