#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <stdexcept>
using std::runtime_error;

class ValorMuitoAcimaException : public runtime_error
{
    public:
        ValorMuitoAcimaException() : runtime_error("Valor muito acima") {}

    protected:

    private:
};

#endif // VALORMUITOACIMAEXCEPTION_H
