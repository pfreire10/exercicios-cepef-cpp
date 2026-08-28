#include <iostream>
using namespace std;

// EXERCÍCIO 3 - VERIFICAÇÃO DE MÉDIA.

int main()
{
    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

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