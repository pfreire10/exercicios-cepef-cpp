#include <iostream>
using namespace std;

// EX 15 - TABUADA COM FOR
int main()
{
    int n;
    cout << "Digite um número inteiro: " << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}