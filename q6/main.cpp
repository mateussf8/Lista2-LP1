#include <iostream>
#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include <windows.h>
using namespace std;

int main()
{

    Conta conta = Conta("Jodisney Santos", "12498886", 300, 500, 1);


    ContaEspecial especial = ContaEspecial("Velho do Saco", "98754775", 200, 600, 1);

    cout << "Nome : " << conta.getNome() << endl;
    cout << "Numero : " << conta.getNumeroConta() << endl;
    cout << "Saldo : " << conta.getSaldo() << endl;
    cout << "Salario : " << conta.getSalario() << endl;
    cout << "Limite " << conta.getLimite() << endl;
    conta.definirLimite();
    cout << "Limite depois : " << conta.getLimite() << endl;
    conta.depositar(200);
    cout << "Saldo apos deposito : " << conta.getSaldo() << endl;
    conta.sacar(500);
    cout << "Saldo apos saque : " << conta.getSaldo() << endl << endl;

    cout << "Nome : " << especial.getNome() << endl;
    cout << "Numero : " << especial.getNumeroConta() << endl;
    cout << "Saldo : " << especial.getSaldo() << endl;
    cout << "Salario : " << especial.getSalario() << endl;
    cout << "Limite " << especial.getLimite() << endl;
    especial.definirLimite();
    cout << "Limite depois : " << especial.getLimite() << endl;
    especial.depositar(200);
    cout << "Saldo apos deposito : " << especial.getSaldo() << endl;
    especial.sacar(500);
    cout << "Saldo apos saque : " << especial.getSaldo() << endl << endl;

    system("pause");

    return 0;
}
