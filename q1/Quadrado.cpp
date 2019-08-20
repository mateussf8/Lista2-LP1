#include "Quadrado.h"

Quadrado::Quadrado(double dou, string str):FiguraGeometrica(dou,str)
{

}

double Quadrado::calculaarea(double side){
    return side*side;
}
