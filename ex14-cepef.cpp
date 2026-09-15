#include <iostream>
using namespace std;

// EX 14 - TENTATIVAS DE SENHA
int main()
{
    int i = 3;
    string senha;

    senha = "Senha123";

    do
    {
        cout << "Você tem " << i << " tentativas" << endl;
        cout << "Digite a senha: " << endl;
        cin >> senha;

        if (senha != "Senha123")
        {
            cout << "Senha incorreta!" << endl;
            i--;

            if (i == 0)
            {
                cout << "Número de tentativas excedido. Acesso bloqueado." << endl;
                break;
            }
        }
    } while (senha != "Senha123");
}