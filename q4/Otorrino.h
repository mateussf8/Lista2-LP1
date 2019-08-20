#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

class Otorrino : public Medico
{
    public:
        Otorrino(double,double,string);

        string getEspecialidade();
        string getExaminaPaciente();

    protected:

    private:

        string especialidade = {"Otorrinolaringologia"};
        string examinaPaciente = {"Examina ouvidos, narinas e garganta"};
};

#endif // OTORRINO_H
