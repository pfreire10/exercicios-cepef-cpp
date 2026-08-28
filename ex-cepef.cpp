#include <iostream>
using namespace std;

// EXERCÍCIO 1 - CÁLCULO DE SOMA, DIFERENÇA, PRODUTO E MÉDIA.

// int main()
// {
//     double numero1, numero2, soma, diferenca, produto, media;

//     cout << "Digite  o primeiro número: ";
//     cin >> numero1;

//     cout << "Digite o segundo número: ";
//     cin >> numero2;

//     soma = numero1 + numero2;

//     diferenca = numero1 - numero2;

//     produto = numero1 * numero2;

//     media = (numero1 + numero2) / 2;

//     cout << "A soma dos dois números é: " << soma << endl;
//     cout << "A diferença dos dois números é: " << diferenca << endl;
//     cout << "O produto dos dois números é: " << produto << endl;
//     cout << "A média dos dois números é: " << media << endl;

//     return 0;
// }

// EXERCÍCIO 2 - NÚMERO PAR OU ÍMPAR.

// int main()
// {
//     int numero;

//     cout << "Digite um número inteiro: ";
//     cin >> numero;

//     if (numero % 2 == 0)
//     {
//         cout << "O número é par." << endl;
//     }
//     else
//     {
//         cout << "O número é ímpar." << endl;
//     }

//     if (numero > 0)
//     {
//         cout << "O número é positivo." << endl;
//     }
//     else if (numero < 0)
//     {
//         cout << "O número é negativo." << endl;
//     }
//     else
//     {
//         cout << "O número é zero." << endl;
//     }

//     return 0;
// }

// EXERCÍCIO 3 - VERIFICAÇÃO DE MÉDIA.

// int main()
// {
//     double nota1, nota2, media;

//     cout << "Digite a primeira nota: ";
//     cin >> nota1;

//     if (cin.fail())
//     {
//         cout << "Erro! Você não digitou um número válido!" << endl;
//         return 1;
//     }

//     while (nota1 < 0 || nota1 > 10)
//     {
//         cout << "Nota inválida! Digite uma nota entre 0 e 10: ";
//         cin >> nota1;
//     }

//     cout << "Digite a segunda nota: ";
//     cin >> nota2;

//     if (cin.fail())
//     {
//         cout << "Erro! Você não digitou um número válido!" << endl;
//         return 1;
//     }

//     while (nota2 < 0 || nota2 > 10)
//     {
//         cout << "Nota inválida! Digite uma nota entre 0 e 10: ";
//         cin >> nota2;
//     }

//     media = (nota1 + nota2) / 2;

//     if (media >= 7)
//     {
//         cout << "Está aprovado! Sua média é: " << media << endl;
//     }
//     else if (media >= 5 && media < 7)
//     {
//         cout << "Está de recuperação! Sua média é: " << media << endl;
//     }
//     else
//     {
//         cout << "Está reprovado! Sua média é: " << media << endl;
//     }

//     return 0;
// }

// // EXERCÍCIO 4 - MAIOR, MENOR OU IGUALDADE

// int main()
// {

//     int a, b, c;

//     cout << "Digite três números inteiros: ";
//     cin >> a >> b >> c;

//     // VERIFICAÇÃO DO MAIOR NÚMERO
//     if (a >= b && a >= c)
//     {
//         cout << "O maior número é: " << a << endl;
//     }
//     else if (b >= a && b >= c)
//     {
//         cout << "O maior número é: " << b << endl;
//     }
//     else
//     {
//         cout << "O maior número é: " << c << endl;
//     }

//     // VERIFICAÇÃO DO MENOR NÚMERO
//     if (a <= b && a <= c)
//     {
//         cout << "O menor número é: " << a << endl;
//     }
//     else if (b <= a && b <= c)
//     {
//         cout << "O menor número é: " << b << endl;
//     }
//     else
//     {
//         cout << "O menor número é: " << c << endl;
//     }

//     // VERIFICAÇÃO DE IGUALDADE
//     if (a == b && b == c)
//     {
//         cout << "Os três números são iguais." << endl;
//     }
//     else if (a == b)
//     {
//         cout << "Os dois primeiros números são iguais: " << a << ", e o terceiro é: " << c << endl;
//     }
//     else if (a == c)
//     {
//         cout << "O primeiro e o terceiro são iguais: " << a << ", e o segundo é: " << b << endl;
//     }
//     else if (b == c)
//     {
//         cout << "O segundo e o terceiro são iguais: " << b << ", e o primeiro é: " << a << endl;
//     }
//     else
//     {
//         cout << "Todos os números são diferentes." << endl;
//     }

//     return 0;
// }

// EXERCÍCIO 5 - DIVISÃO SEGURA
// int main() {
//	double n1, n2, divisao;
//
//	cout << "Digite o primeiro valor: ";
//	cin >> n1;
//
//	cout << "Digite o segundo valor: ";
//	cin >> n2;
//
//	if (n2 == 0) {
//		cout << "O valor informado é zero! A divisão não pôde ser realizada!" << endl;
//	} else {
//			divisao = n1 / n2;
//			cout << "O resultado da divisão é: " << divisao << endl;
//	}
//
//	return 0;
//}

// EXERCÍCIO 6 - CÁLCULO DE DESCONTO
// int main() {
//	double valorOriginal, valorDescontado, valorFinal;
//
//	cout << "Digite o valor da compra: ";
//	cin >> valorOriginal;
//
//	if (valorOriginal < 100) {
//		cout << "Sem desconto, infezlimente!";
//	} else if (valorOriginal >= 100 && valorOriginal <= 299.99) {
//		valorDescontado = valorOriginal * 0.05;
//		valorFinal =  valorOriginal - valorDescontado;
//		cout << "Parabéns! Ganhou 5% de desconto! O valor original era: " << valorOriginal <<
//      ". A porcentagem era 5%, o valor descontado foi: " <<
//		valorDescontado << ". E o valor final foi: " << valorFinal << endl;
//	} else if (valorOriginal >= 300 && valorOriginal <= 499.99) {
//		valorDescontado = valorOriginal * 0.10;
//		valorFinal =  valorOriginal - valorDescontado;
//		cout << "Parabéns! Ganhou 10% de desconto! O valor original era: " <<
//		valorOriginal << ". A porcentagem era 10%, o valor descontado foi: " <<
//		valorDescontado << ". E o valor final foi: " << valorFinal << endl;
//	} else {
//		valorDescontado = valorOriginal * 0.15;
//		valorFinal =  valorOriginal - valorDescontado;
//		cout << "Parabéns! Ganhou 15% de desconto! O valor original era: " <<
//		valorOriginal << ". A porcentagem era 15%, o valor descontado foi: " <<
//		valorDescontado << ". E o valor final foi: " << valorFinal << endl;
//	}
//
//	return 0;
//}