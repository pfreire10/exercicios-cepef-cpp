#include <iostream>
using namespace std;

// EX 7 - CALCULADORA COM SWITCH CASE
int main()
{

    int n1, n2, opcao;

    cout << "Calculadora com Switch Case!!" << endl;
    cout << 'Digite o primeiro número: ';
    cin >> n1;
    cout << 'Digite o segundo número: ';
    cin >> n2;

    cout << "Escolha uma opção: " << endl;
    cout << "1 - Somar" << endl;
    cout << "2 - Subtrair" << endl;
    cout << "3 - Multipicar" << endl;
    cout << "4 - Dividir" << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        cout << "A soma dos números é: " << n1 + n2 << endl;
        break;
    case 2:
        cout << "A subtração dos números é: " << n1 - n2 << endl;
        break;
    case 3:
        cout << "A multiplicação dos números é: " << n1 * n2 << endl;
        break;
    case 4:
        if (n2 == 0)
        {
            cout << "Não é possível dividir por zero!" << endl;
        }
        else
        {
            cout << "A divisão dos números é: " << n1 / n2 << endl;
            break;
        }
    }

    return 0;
}