#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main()
{
    int i;

    TestaValidaNumero t;

    while(1){

        cout << "Digite um numero inteiro : " << endl;
        cin >> i;


        t.validaNumero(i);

    }

    return 0;
}
