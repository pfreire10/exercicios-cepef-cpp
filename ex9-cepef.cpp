#include <iostream>
using namespace std;

// EXERCÍCIO 9 - CÁRDAPIO DE UMA LANCHONETE

int main()
{
    int opcao, quantidade;
    double precoUni, valorTotal;

    cout << "Selecione uma opção do cardápio: " << endl;
    cout << "1 - Hamburguer - R$18,00" << endl;
    cout << "2 - Cachorro-quente- R$12,00" << endl;
    cout << "3 - Sanduíche natural - R$15,00" << endl;
    cout << "4 - Refrigerante - R$6,00" << endl;
    cout << "5 - Suco - R$8,00" << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        cout << "Digite a quantidade de Hamburguer: ";
        cin >> quantidade;
        precoUni = 18.00;
        if (quantidade <= 0)
        {
            cout << "Quantidade inválida." << endl;
            break;
        }
        else
        {
            valorTotal = precoUni * quantidade;
            cout << "Você comprou: " << quantidade << " Hamburguer(es) - Valor unitário: R$18,00 - Total: R$" << valorTotal << endl;
            break;
        }

    case 2:
        cout << "Digite a quantidade de Cachorro-quente: ";
        cin >> quantidade;
        precoUni = 12.00;
        if (quantidade <= 0)
        {
            cout << "Quantidade inválida." << endl;
            break;
        }
        else
        {
            valorTotal = precoUni * quantidade;
            cout << "Você comprou: " << quantidade << " Cachorro-quente(s) - Valor unitário: R$12,00 - Total: R$" << valorTotal << endl;
            break;
        }

    case 3:
        cout << "Digite a quantidade de Sanduíche natural: ";
        cin >> quantidade;
        precoUni = 15.00;
        if (quantidade <= 0)
        {
            cout << "Quantidade inválida." << endl;
            break;
        }
        else
        {
            valorTotal = precoUni * quantidade;
            cout << "Você comprou: " << quantidade << " Sanduíche(s) - Valor unitário: R$15,00 - Total: R$" << valorTotal << endl;
            break;
        }

    case 4:
        cout << "Digite a quantidade de Refrigerante: ";
        cin >> quantidade;
        precoUni = 6.00;
        if (quantidade <= 0)
        {
            cout << "Quantidade inválida." << endl;
            break;
        }
        else
        {
            valorTotal = precoUni * quantidade;
            cout << "Você comprou: " << quantidade << " Refrigerante(s) - Valor unitário: R$6,00 - Total: R$" << valorTotal << endl;
            break;
        }

    case 5:
        cout << "Digite a quantidade de Suco: ";
        cin >> quantidade;
        precoUni = 8.00;
        if (quantidade <= 0)
        {
            cout << "Quantidade inválida." << endl;
            break;
        }
        else
        {
            valorTotal = precoUni * quantidade;
            cout << "Você comprou: " << quantidade << " Suco(s) - Valor unitário: R$8,00 - Total: R$" << valorTotal << endl;
            break;
        }

    default:
        cout << "Opção inválida." << endl;
    }
    return 0;
}