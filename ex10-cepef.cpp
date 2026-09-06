#include <iostream>
using namespace std;

// EX 10 - SOMA DE NÚMEROS COM WHILE
int main()
{
    int i = 1, numero, soma = 0;

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    while (i <= numero)
    {
        cout << i << endl;
        soma += i;
        i++;
    }

    cout << "A soma dos números de 1 a " << numero << " é: " << soma << endl;

    return 0;
}