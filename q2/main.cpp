#include "conta.h"
#include "contaespecial.h"

#include <iostream>
using namespace std;


int main(){
    Conta conta("Jose",5000,101010,500);
    ContaEspecial contaE("Maria",6000,202020,700);

    cout<<"Conta"<<endl;
    cout<<"Valor atual R$ "<<conta.getSaldo()<<endl;
    conta.depositar(500);
    cout<<"Valor pos deposito R$ "<<conta.getSaldo()<<endl;
    conta.sacar(100);
    cout<<"Valor pos saqueR$ "<<conta.getSaldo()<<endl;
    conta.definirLimite();
    cout<<"Limite = R$ "<<conta.getLimite()<<endl;

    cout<<"\n----------------\n"<<endl;

    cout<<"Conta Especial"<<endl;
    cout<<"Valor atual R$ "<<contaE.getSaldo()<<endl;
    contaE.depositar(500);
    cout<<"Valor pos deposito R$ "<<contaE.getSaldo()<<endl;
    contaE.sacar(100);
    cout<<"Valor pos saque R$ "<<contaE.getSaldo()<<endl;
    contaE.definirLimite();
    cout<<"Limite = R$ "<<contaE.getLimite()<<endl;

    return 0;
}
