#include <iostream>
using namespace std;

// EX 12 - LEITURA ATÉ O VALOR SENTINELA
int main()
{
    int numero, quantidade = 0, soma = 0, media, qntNegativa = 0, qntPositiva = 0;

    while (true)
    {
        cout << "Digite um número inteiro: " << endl;
        cin >> numero;

        if (numero == 0)
        {
            cout << "O número que você digitou é zero. Programa encerrado." << endl;
            break;
        }
        else if (numero < 0)
        {
            quantidade++;
            qntNegativa++;
            soma += numero;
        }
        else
        {
            quantidade++;
            qntPositiva++;
            soma += numero;
        }
    }

    media = soma / quantidade;

    cout << "Quantidade de números digitados: " << quantidade << endl;
    cout << "Soma dos números: " << soma << endl;
    cout << "Média dos números positivos: " << media << endl;
    cout << "Quantidade de números positivos: " << qntPositiva << endl;
    cout << "Quantidade de números negativos: " << qntNegativa << endl;

    return 0;
}