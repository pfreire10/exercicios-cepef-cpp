#include <iostream>
using namespace std;

// EX 13 - MENU COM DO WHILE
int main()
{
    int opcao, numero, dobro, triplo, quadrado;

    do
    {
        cout << "1 - Calcular o dobro de um número" << endl;
        cout << "2 - Calcular o triplo de um número" << endl;
        cout << "3 - Calcular o quadrado de um número" << endl;
        cout << "0 - Encerrar" << endl;
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Digite um número: ";
            cin >> numero;
            dobro = numero * 2;
            cout << "O dobro de " << numero << " é: " << dobro << endl;
        }
        else if (opcao == 2)
        {
            cout << "Digite um número: ";
            cin >> numero;
            triplo = numero * 3;
            cout << "O triplo de " << numero << " é: " << triplo << endl;
        }
        else if (opcao == 3)
        {
            cout << "Digite um número: ";
            cin >> numero;
            quadrado = numero * numero;
            cout << "O quadrado de " << numero << " é: " << quadrado << endl;
        }
        else if (opcao != 0)
        {
            cout << "Opção inválida!" << endl;
        }
    } while (opcao != 0);
}