#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(double p, double a, string n) : Medico(p,a,n)
{

}


string Cirurgiao::getEspecialidade(){
    return especialidade;
}


string Cirurgiao::getCirurgiao(){
    return cirurgiao;
}
