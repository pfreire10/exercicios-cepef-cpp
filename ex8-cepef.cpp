#include <iostream>
using namespace std;

// EX 8 DIAS DO MÊS
int main()
{

    int mes;

    cout << "Digite um mês, de 1 a 12: ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Janeiro" << endl;
        break;
    case 3:
        cout << "Março" << endl;
        break;
    case 5:
        cout << "Maio" << endl;
        break;
    case 7:
        cout << "Julho" << endl;
        break;
    case 8:
        cout << "Agosto" << endl;
        break;
    case 10:
        cout << "Outubro" << endl;
        break;
    case 12:
        cout << "Dezembro" << endl;
        break;

    case 4:
        cout << "Abril" << endl;
        break;
    case 6:
        cout << "Junho" << endl;
        break;
    case 9:
        cout << "Setembro" << endl;
        break;
    case 11:
        cout << "Novembro" << endl;
        break;

    case 2:
        cout << "Fevereiro" << endl;
        break;
    }

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 dias" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 dias" << endl;
        break;
    case 2:
        cout << "28 dias" << endl;
        break;
    }
    return 0;
}