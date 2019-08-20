#include "Otorrino.h"

Otorrino::Otorrino(double p, double a, string n) : Medico(p,a,n)
{

}



string Otorrino::getEspecialidade(){
    return especialidade;
}




string Otorrino::getExaminaPaciente(){
    return examinaPaciente;
}

