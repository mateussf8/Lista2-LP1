#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado(double,string);
        double calculaarea(double);

    protected:

    private:
};

#endif // QUADRADO_H
