#ifndef ICONTA_H
#define ICONTA_H
#include <string>
using namespace std;


class IConta
{
    public:
        //IConta();

        virtual void sacar(double) = 0;
        virtual void depositar(double) = 0;
    protected:

    private:
};

#endif // ICONTA_H
