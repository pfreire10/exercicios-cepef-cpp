#include <iostream>
using namespace std;

// EXERCÍCIO 4 - MAIOR, MENOR OU IGUALDADE

int main()
{

    int a, b, c;

    cout << "Digite três números inteiros: ";
    cin >> a >> b >> c;

    // VERIFICAÇÃO DO MAIOR NÚMERO
    if (a >= b && a >= c)
    {
        cout << "O maior número é: " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "O maior número é: " << b << endl;
    }
    else
    {
        cout << "O maior número é: " << c << endl;
    }

    // VERIFICAÇÃO DO MENOR NÚMERO
    if (a <= b && a <= c)
    {
        cout << "O menor número é: " << a << endl;
    }
    else if (b <= a && b <= c)
    {
        cout << "O menor número é: " << b << endl;
    }
    else
    {
        cout << "O menor número é: " << c << endl;
    }

    // VERIFICAÇÃO DE IGUALDADE
    if (a == b && b == c)
    {
        cout << "Os três números são iguais." << endl;
    }
    else if (a == b)
    {
        cout << "Os dois primeiros números são iguais: " << a << ", e o terceiro é: " << c << endl;
    }
    else if (a == c)
    {
        cout << "O primeiro e o terceiro são iguais: " << a << ", e o segundo é: " << b << endl;
    }
    else if (b == c)
    {
        cout << "O segundo e o terceiro são iguais: " << b << ", e o primeiro é: " << a << endl;
    }
    else
    {
        cout << "Todos os números são diferentes." << endl;
    }

    return 0;
}