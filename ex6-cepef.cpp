#include <iostream>
using namespace std;

// EXERCÍCIO 6 - CÁLCULO DE DESCONTO
int main()
{
    double valorOriginal, valorDescontado, valorFinal;

    cout << "Digite o valor da compra: ";
    cin >> valorOriginal;

    if (valorOriginal < 100)
    {
        cout << "Sem desconto, infezlimente!";
    }
    else if (valorOriginal >= 100 && valorOriginal <= 299.99)
    {
        valorDescontado = valorOriginal * 0.05;
        valorFinal = valorOriginal - valorDescontado;
        cout << "Parabéns! Ganhou 5% de desconto! O valor original era: " << valorOriginal << ". A porcentagem era 5%, o valor desconstado foi: " << valorDescontado << ". E o valor final foi: " << valorFinal << endl;
    }
    else if (valorOriginal >= 300 && valorOriginal <= 499.99)
    {
        valorDescontado = valorOriginal * 0.10;
        valorFinal = valorOriginal - valorDescontado;
        cout << "Parabéns! Ganhou 10% de desconto! O valor original era: " << valorOriginal << ". A porcentagem era 10%, o valor descontado foi: " << valorDescontado << ". E o valor final foi: " << valorFinal << endl;
    }
    else
    {
        valorDescontado = valorOriginal * 0.15;
        valorFinal = valorOriginal - valorDescontado;
        cout << "Parabéns! Ganhou 15% de desconto! O valor original era: " << valorOriginal << ". A porcentagem era 15%, o valor descontado foi: " << valorDescontado << ". E o valor final foi: " << valorFinal << endl;
    }

    return 0;
}