#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao : public Medico
{
    public:
        Cirurgiao(double,double,string);
        string getEspecialidade();
        string getCirurgiao();


    protected:

    private:
        string especialidade = {"Cirurgiao"};
        string cirurgiao = {"Faz cirurgia bariatrica"};
};

#endif // CIRURGIA_H
