/*


Nome: Aliny Alves Dutra
Data:
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br


*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 15

//==========================================================



//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	int A[tam], B[tam], i;

	for(i=0; i<tam; i++)
	{
		A[i] = 0;
		printf("\n\nDigite um numero para lista A na posicão %d: ", i+1);
		scanf("%d", &A[i]);
		B[i] = A[i] * 2;
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
