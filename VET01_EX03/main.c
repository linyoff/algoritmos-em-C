/*


Nome: Aliny Alves Dutra
Data:  05/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo que receba dois vetores numéricos chamados A e B com tamanho de 20
posições do tipo real. Construir um vetor de mesmo tipo e tamanho o qual será formado pela soma
de primeiro elemento de A com o primeiro de B e armazenando na primeira posição de C, segundo
elemento de A com segundo elemento de B armazenando na segunda posição de C, e assim por
diante.

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 20

//==========================================================



//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//criando vars
	float A[tam], B[tam], C[tam];
	int i;

	for(i=0; i<tam; i++)
	{
		A[i] = 0;
		B[i] = 0;
		C[i] = 0;
		printf("\n\nDigite um numero para vetor A na posicão %d: ", i+1);
		fflush(stdin);
		scanf("%f", &A[i]);
	}
	for(i=0; i<tam; i++)
	{
		printf("\n\nDigite um numero para vetor B na posicão %d: ", i+1);
		fflush(stdin);
		scanf("%f", &B[i]);
		C[i] = A[i] + B[i];
	}
	//finalizando
	system("cls");
	printf("\nVetor A: ");
	for(i=0; i<tam; i++)
	{
		printf(" %.1f", A[i]);
	}
	printf("\nVetor B: ");
	for(i=0; i<tam; i++)
	{
		printf(" %.1f", B[i]);
	}
	printf("\nVetor C: ");
	for(i=0; i<tam; i++)
	{
		printf(" %.1f", C[i]);
	}


    return 0;
}
