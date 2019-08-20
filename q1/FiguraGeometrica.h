#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
using namespace std;
class FiguraGeometrica
{
    public:
        FiguraGeometrica(double, string);
        //virtual ~FiguraGeometrica();
        double calcularArea(double);

        string getNome();
    protected:

        string nome;
        void setNome(string);
        void setArea(double);


    private:
};

#endif // FIGURAGEOMETRICA_H
