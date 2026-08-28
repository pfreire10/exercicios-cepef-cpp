#include <iostream>
using namespace std;

// EXERCÍCIO 5 - DIVISÃO SEGURA
int main()
{
    double n1, n2, divisao;

    cout << "Digite o primeiro valor: ";
    cin >> n1;

    cout << "Digite o segundo valor: ";
    cin >> n2;

    if (n2 == 0)
    {
        cout << "O valor informado é zero! A divisão não pôde ser realizada!" << endl;
    }
    else
    {
        divisao = n1 / n2;
        cout << "O resultado da divisão é: " << divisao << endl;
    }

    return 0;
}