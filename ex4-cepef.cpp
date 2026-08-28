#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Digite três números inteiros: ";
    cin >> a >> b >> c;

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
}