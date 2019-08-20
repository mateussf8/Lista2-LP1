#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <stdexcept>
using std::runtime_error;

class SaldoNaoDisponivelException : public runtime_error
{
    public:
        SaldoNaoDisponivelException() : runtime_error("Saldo nao disponivel") {}



    protected:

    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H
