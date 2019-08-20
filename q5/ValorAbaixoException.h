#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <stdexcept>
using std::runtime_error;

class ValorAbaixoException : public runtime_error
{
    public:
        ValorAbaixoException() : runtime_error("Valor abaixo") {}


    protected:

    private:
};

#endif // VALORABAIXOEXCEPTION_H
