#include <iostream>
using namespace std;

// EX 16 - SOMATÓRIO E FATORIAL
int main()
{
    int n, soma = 0, fatorial = 1;

    cout << "Digite um número inteiro positivo: " << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Número inválido." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        soma += i;
        fatorial *= i;
    }
    cout << "A soma dos números de 1 até " << n << " é: " << soma << endl;
    cout << "Fatorial de " << n << ": " << fatorial << endl;

    return 0;
}