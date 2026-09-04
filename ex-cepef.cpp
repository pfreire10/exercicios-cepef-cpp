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

// EX 7 - CALCULADORA COM SWITCH CASE
// int main()
// {

//     int n1, n2, opcao;

//     cout << "Calculadora com Switch Case!!" << endl;
//     cout << "Digite o primeiro número: ";
//     cin >> n1;
//     cout << "Digite o segundo número: ";
//     cin >> n2;

//     cout << "Escolha uma opção: " << endl;
//     cout << "1 - Somar" << endl;
//     cout << "2 - Subtrair" << endl;
//     cout << "3 - Multipicar" << endl;
//     cout << "4 - Dividir" << endl;
//     cin >> opcao;

//     switch (opcao)
//     {
//     case 1:
//         cout << "A soma dos números é: " << n1 + n2 << endl;
//         break;
//     case 2:
//         cout << "A subtração dos números é: " << n1 - n2 << endl;
//         break;
//     case 3:
//         cout << "A multiplicação dos números é: " << n1 * n2 << endl;
//         break;
//     case 4:
//         if (n2 == 0)
//         {
//             cout << "Não é possível dividir por zero!" << endl;
//         }
//         else
//         {
//             cout << "A divisão dos números é: " << n1 / n2 << endl;
//             break;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // EX 8 DIAS DO MÊS
// int main()
// {

//     int mes;

//     cout << "Digite um mês, de 1 a 12: ";
//     cin >> mes;

//     switch (mes)
//     {
//     case 1:
//         cout << "Janeiro" << endl;
//         break;
//     case 3:
//         cout << "Março" << endl;
//         break;
//     case 5:
//         cout << "Maio" << endl;
//         break;
//     case 7:
//         cout << "Julho" << endl;
//         break;
//     case 8:
//         cout << "Agosto" << endl;
//         break;
//     case 10:
//         cout << "Outubro" << endl;
//         break;
//     case 12:
//         cout << "Dezembro" << endl;
//         break;

//     case 4:
//         cout << "Abril" << endl;
//         break;
//     case 6:
//         cout << "Junho" << endl;
//         break;
//     case 9:
//         cout << "Setembro" << endl;
//         break;
//     case 11:
//         cout << "Novembro" << endl;
//         break;

//     case 2:
//         cout << "Fevereiro" << endl;
//         break;
//     }

//     switch (mes)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         cout << "31 dias" << endl;
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         cout << "30 dias" << endl;
//         break;
//     case 2:
//         cout << "28 dias" << endl;
//         break;
//     }
//     return 0;
// }