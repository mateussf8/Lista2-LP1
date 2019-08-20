#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <stdexcept>
using std::runtime_error;

class ValorAcimaException : public runtime_error
{
    public:
        ValorAcimaException() : runtime_error("Valor acima") {}

    protected:

    private:
};

#endif // VALORACIMAEXCEPTION_H
