#include <iostream>
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Cirurgiao.h"
#include "Ginecologista.h"
#include "windows.h"
#include <string>

using namespace std;

int main()
{

    Otorrino o = Otorrino(60,1.79,"Valdisclei cunha");
    Oftalmologista of = Oftalmologista(97,1.72,"Thomas train");
    Cirurgiao ciru = Cirurgiao(86,1.90,"Janisclei Pinto");
    Ginecologista gine = Ginecologista(75,1.75,"Jonathan Gado");

    cout << "Otorrino" << endl << "Nome : " << o.getNome() << endl << "Peso : " << o.getPeso() << endl << "Altura : " << o.getAltura() << endl;
    cout << "Especialidade : " << o.getEspecialidade() << endl << "Exame : "  << o.getExaminaPaciente() << endl << endl;


    cout << "Oftalmologista" << endl << "Nome : " << of.getNome() << endl << "Peso : " << of.getPeso() << endl << "Altura : " << of.getAltura() << endl;
    cout << "Especialidade : " << of.getEspecialidade() << endl << "Exame : "  << of.getExaminaPaciente() << endl << endl;


    cout << "Cirurgiao" << endl << "Nome : " << ciru.getNome() << endl << "Peso : " << ciru.getPeso() << endl << "Altura : " << ciru.getAltura() << endl;
    cout << "Especialidade : " << ciru.getEspecialidade() << endl << "Exame : "  << ciru.getCirurgiao() << endl << endl;


    cout << "Otorrino" << endl << "Nome : " << gine.getNome() << endl << "Peso : " << gine.getPeso() << endl << "Altura : " << gine.getAltura() << endl;
    cout << "Especialidade : " << gine.getEspecialidade() << endl << "Exame : "  << gine.getExaminaPaciente() << endl << endl;
    system("pause");
    system("cls");

    return 0;




}
