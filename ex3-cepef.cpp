#include <iostream>
using namespace std;

// EXERCÍCIO 3 - VERIFICAÇÃO DE MÉDIA.

int main()
{
    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    if (cin.fail())
    {
        cout << "Erro! Você não digitou um número válido!" << endl;
        return 1;
    }

    while (nota1 < 0 || nota1 > 10)
    {
        cout << "Nota inválida! Digite uma nota entre 0 e 10: ";
        cin >> nota1;
    }

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    if (cin.fail())
    {
        cout << "Erro! Você não digitou um número válido!" << endl;
        return 1;
    }

    while (nota2 < 0 || nota2 > 10)
    {
        cout << "Nota inválida! Digite uma nota entre 0 e 10: ";
        cin >> nota2;
    }

    media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        cout << "Está aprovado! Sua média é: " << media << endl;
    }
    else if (media >= 5 && media < 7)
    {
        cout << "Está de recuperação! Sua média é: " << media << endl;
    }
    else
    {
        cout << "Está reprovado! Sua média é: " << media << endl;
    }

    return 0;
}