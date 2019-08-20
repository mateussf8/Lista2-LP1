#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

class Oftalmologista : public Medico
{
    public:
        Oftalmologista(double,double,string);

        string getEspecialidade();
        string getExaminaPaciente();

    protected:

    private:
        string especialidade = {"Oftalmologia"};
        string examinaPaciente = {"Examina olhos"};
};

#endif // OFTALMOLOGISTA_H
