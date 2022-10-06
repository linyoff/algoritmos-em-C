/*


Nome: Aliny Alves Dutra
Data: 06/10/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo que receba dois vetores A e B de 20 elementos cada do tipo real. Construir
um vetor C de mesmo tipo e dimens�o, o qual ser� formador por: �Todo elemento de B dever� ser
MULTIPLICADO com conte�do contido na posi��o correspondente de A�. Ap�s processar, limpar a
tela e mostrar o Vetor A, o vetor B e finalmente o Vetor C

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
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

	//criando vars
	float A[tam], B[tam], C[tam];
	int i;

	for(i=0; i<tam; i++)
	{
		A[i] = 0;
		B[i] = 0;
		C[i] = 0;
		printf("\n\nDigite um numero para vetor A na posic�o %d: ", i+1);
		fflush(stdin);
		scanf("%f", &A[i]);
	}
	for(i=0; i<tam; i++)
	{
		printf("\n\nDigite um numero para vetor B na posic�o %d: ", i+1);
		fflush(stdin);
		scanf("%f", &B[i]);
		C[i] = A[i] * B[i];
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
