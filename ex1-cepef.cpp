#include <iostream>
using namespace std;

// EXERCÍCIO 1 - CÁLCULO DE SOMA, DIFERENÇA, PRODUTO E MÉDIA.

int main()
{
    double numero1, numero2, soma, diferenca, produto, media;

    cout << "Digite  o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    soma = numero1 + numero2;

    diferenca = numero1 - numero2;

    cout << "A soma dos dois números é: " << soma << endl;

    cout << "A diferença dos dois números é: " << diferenca << endl;

    return 0;
}