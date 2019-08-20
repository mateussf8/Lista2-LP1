#include "Ginecologista.h"

Ginecologista::Ginecologista(double p, double a, string n) : Medico(p,a,n)
{

}


string Ginecologista::getEspecialidade(){
    return especialidade;
}


string Ginecologista::getExaminaPaciente(){
    return examinaPaciente;
}
