#include <iostream>
using namespace std;

int main()
{
    double litros = 0, preco = 0, valorTotal;

    while (litros <= 0)
    {
        cout << "Digite a quantidade de litros: ";
        cin >> litros;
        if (litros <= 0)
        {
            cout << "Quantidade de litros inválida!" << endl;
        }
    }

    while (preco <= 0)
    {
        cout << "Digite o preço de cada litro: ";
        cin >> preco;
        if (preco <= 0)
        {
            cout << "Preço inválido!" << endl;
        }
    }

    valorTotal = litros * preco;

    if (valorTotal >= 200)
    {
        cout << "O valor total a ser pago é: R$" << valorTotal << endl;
        cout << "Abastecimento de alto valor." << endl;
    }
    else
    {
        cout << "O valor total a ser pago é: R$" << valorTotal << endl;
        cout << "Abastecimento de valor comum." << endl;
    }

    return 0;
}