#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>
#include <FiguraGeometrica.h>

 class Triangulo : public FiguraGeometrica {
    public:
        Triangulo(double, double ,string);
        double calcularArea(double, double);
        void setNome(string);
        void setArea(double);
        string getNome();
    protected:



    private:
};

#endif // TRIANGULO_H
