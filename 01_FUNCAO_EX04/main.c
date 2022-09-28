/*


Nome: Aliny Alves Dutra
Data: 28/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Faça um algoritmo em linguagem C, que receba um valor maior ou igual a
zero, processar e mostrar o fatorial desse número.
 Obs.1:
1) criar uma função de entrada do tipo “float”, para receber um número;
2) criar uma função do tipo “float” que irá receber como passagem de parâmetro por “referência” o
valor da entrada e validar corretivamente para que esse número seja maior ou igual a zero;
3) criar uma função do tipo “void” que irá receber como parâmetro, o “valor” de entrada, processar e
o fatorial desse número, mostrando o resultado dentro da desta função.
Obs.2: sabe-se que o fatorial de 0 é igual a 1 e não existe fatorial de número negativo.

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 10

//==========================================================

float receber_num (int n)
{
	printf("\n\nDigite um número maior ou igual a 0: ");
	fflush(stdin);
	scanf("%d", &n);

	return (n);
}

float validar_num (int *n)
{
	while(*n < 0)
	{
		printf("\nVALOR INVALIDO\n\nDigite outro numero: ");
		fflush(stdin);
		scanf("%d", *n);
	}
}

void fatorial_num (int num)
{
    //var
    int fat = 1, cont = 0;

    if (num == 0)
		printf("\n\nO fatorial de 0 é igual a 1\n\n");
	else
	{
		while(cont < num)
		{
			cont++;
			fat = fat * cont;
		}
		printf("\n\nO fatorial de %d é igual a %d\n\n", num, fat);
	}


}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //VARS
    int num = 0;

    //recebendo dados
	num = receber_num(num);
	//validando
	validar_num(&num);
	//final
	fatorial_num(num);

    return 0;
}
