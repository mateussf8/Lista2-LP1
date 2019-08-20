#ifndef MEDICO_H
#define MEDICO_H
#include <string>

using namespace std;


class Medico
{
    public:
        Medico(double,double,string);


        void setPeso(double);
        void setAltura(double);
        void setNome(string);

        string getNome();
        double getPeso();
        double getAltura();



    protected:
        string nome;
        double peso;
        double altura;
    private:
};

#endif // MEDICO_H
