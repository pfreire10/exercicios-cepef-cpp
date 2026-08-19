// EXERCÍCIO 2 - NÚMERO PAR OU ÍMPAR.

#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "O número é par." << endl;
    }
    else
    {
        cout << "O número é ímpar." << endl;
    }

    if (numero > 0)
    {
        cout << "O número é positivo." << endl;
    }
    else if (numero < 0)
    {
        cout << "O número é negativo." << endl;
    }
    else
    {
        cout << "O número é zero." << endl;
    }

    return 0;
}