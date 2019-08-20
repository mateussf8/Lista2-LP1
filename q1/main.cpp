#include <iostream>
#include <FiguraGeometrica.h>
#include <Triangulo.h>
#include <windows.h>
#include "Quadrado.h"

int main()
{
    double base, raio, altura, lado;
    string nombre1, nombre2, nombre3;

    cout << "Digite o nome do Triangulo" << endl;
    cin >> nombre1;
    //t1.setNome(nombre1);
    system("cls");

    cout << "Digite a base e altura do Triangulo" << endl;
    cin >> base >> altura;
    system("cls");

    Triangulo t1 = Triangulo(base,altura,nombre1);

    cout << "A area do Triangulo " << t1.getNome() << " e igual a : " << t1.calcularArea(altura,base)<< "\n";
    system("pause");
    system("cls");



    cout << "Digite o nome da Circunferencia" << endl;
    cin >> nombre2;
    //t1.setNome(nombre1);
    system("cls");

    cout << "Digite o raio da Circunferencia" << endl;
    cin >> raio;
    system("cls");

    FiguraGeometrica circ = FiguraGeometrica(raio,nombre2);

    cout << "A area da Circunferencia " << circ.getNome() << " e igual a : " << circ.calcularArea(raio)<< "\n" ;
    system("pause");
    system("cls");



    cout << "Digite o nome do Quadrado" << endl;
    cin >> nombre3;
    system("cls");

    cout << "Digite o lado do Quadrado" << endl;
    cin >> lado;
    system("cls");

    Quadrado Q = Quadrado(lado,nombre3);

    cout << "A area do Quadrado "<< Q.getNome() << " e igual a : " << Q.calculaarea(lado)<< "\n" ;
    system("pause");
    system("cls");







}
