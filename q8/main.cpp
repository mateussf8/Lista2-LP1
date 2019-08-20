#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ler;
    ler.open("teste.txt");

    ofstream escrever;
    escrever.open("teste_bkp.txt");
    char caractere;

    while(!ler.eof()){
        ler.get(caractere);
        escrever <<  caractere;

    }

    ler.close();
    return 0;
}
