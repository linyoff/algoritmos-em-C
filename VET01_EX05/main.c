/*


Nome: Aliny Alves Dutra
Data: 05/10/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba um vetor do tipo inteiro de 50 posi��es. Criar um vetor B de
mesmo tipo e dimens�o de A, o qual ser� formado por: �Todo elemento de B dever� ser acrescido
de 5 ao conte�do contido na posi��o correspondente de A�. Apresentar no v�deo a vetor A e depois
o vetor B.

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 50

//==========================================================



//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

	int A[tam], B[tam], i;

	for(i=0; i<tam; i++)
	{
		A[i] = 0;
		printf("\n\nDigite um numero para lista A na posic�o %d: ", i+1);
		scanf("%d", &A[i]);
		B[i] = A[i] + 5;
	}
	//finalizando
	system("cls");
	i = 0;
	printf("\n\nVetor A: \n");
	while(i<tam)
	{
		printf(" %d", A[i]);
		i++;
	}
	i = 0;
	printf("\n\nVetor B: \n");
	while(i<tam)
	{
		printf(" %d", B[i]);
		i++;
	}

    return 0;
}
