#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"

class Ginecologista : public Medico
{
    public:
        Ginecologista(double,double,string);
        string getEspecialidade();
        string getExaminaPaciente();
    protected:

    private:
        string especialidade = {"Ginecologia"};
        string examinaPaciente = {"Examina sistema genital feminino"};
};

#endif // GINECOLOGISTA_H
