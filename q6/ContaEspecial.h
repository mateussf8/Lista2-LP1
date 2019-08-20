#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial(string, string, double, double, double);
        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
