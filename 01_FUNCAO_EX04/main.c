/*


Nome: Aliny Alves Dutra
Data: 28/09/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Fa�a um algoritmo em linguagem C, que receba um valor maior ou igual a
zero, processar e mostrar o fatorial desse n�mero.
 Obs.1:
1) criar uma fun��o de entrada do tipo �float�, para receber um n�mero;
2) criar uma fun��o do tipo �float� que ir� receber como passagem de par�metro por �refer�ncia� o
valor da entrada e validar corretivamente para que esse n�mero seja maior ou igual a zero;
3) criar uma fun��o do tipo �void� que ir� receber como par�metro, o �valor� de entrada, processar e
o fatorial desse n�mero, mostrando o resultado dentro da desta fun��o.
Obs.2: sabe-se que o fatorial de 0 � igual a 1 e n�o existe fatorial de n�mero negativo.

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
	printf("\n\nDigite um n�mero maior ou igual a 0: ");
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
		printf("\n\nO fatorial de 0 � igual a 1\n\n");
	else
	{
		while(cont < num)
		{
			cont++;
			fat = fat * cont;
		}
		printf("\n\nO fatorial de %d � igual a %d\n\n", num, fat);
	}


}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUA��O
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
