#include <iostream>
using namespace std;

// EX 11 - VALIDAÇÃO DE NOTA
int main()
{
    double nota;

    cout << "Informe sua nota de zero a dez: " << endl;
    cin >> nota;

    while (true)
    {
        if (nota < 0 || nota > 10)
        {
            cout << "Nota inválida. Digite novamente: " << endl;
            cin >> nota;
        }
        else
        {
            cout << "Sua nota é: " << nota << endl;
            break;
        }
    }
    return 0;
}