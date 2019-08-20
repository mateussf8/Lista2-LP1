#include "Oftalmologista.h"

Oftalmologista::Oftalmologista(double p, double a, string n) : Medico(p,a,n)
{

}


string Oftalmologista::getEspecialidade(){
    return especialidade;
}



string Oftalmologista::getExaminaPaciente(){
    return examinaPaciente;
}
