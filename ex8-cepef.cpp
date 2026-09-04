#include <iostream>
using namespace std;

int main()
{

    int mes;

    cout << "Digite um mês, de 1 a 12: ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Janeiro" << endl;
        cout << "31 dias" << endl;
    case 3:
        cout << "Março" << endl;
        cout << "31 dias" << endl;
    case 5:
        cout << "Maio" << endl;
        cout << "31 dias" << endl;
    case 7:
        cout << "Julho" << endl;
        cout << "31 dias" << endl;
    case 8:
        cout << "Agosto" << endl;
        cout << "31 dias" << endl;
    case 10:
        cout << "Outubro" << endl;
        cout << "31 dias" << endl;
    case 12:
        cout << "Dezembro" << endl;
        cout << "31 dias" << endl;
        break;

    case 4:
        cout << "Abril" << endl;
        cout << "30 dias" << endl;
    case 6:
        cout << "Junho" << endl;
        cout << "30 dias" << endl;
    case 9:
        cout << "Setembro" << endl;
        cout << "30 dias" << endl;
    case 11:
        cout << "Novembro" << endl;
        cout << "30 dias" << endl;
        break;

    case 2:
        cout << "Fevereiro" << endl;
        cout << "28 dias" << endl;
        break;
    }

    return 0;
}