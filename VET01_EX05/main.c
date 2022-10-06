/*


Nome: Aliny Alves Dutra
Data: 05/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba um vetor do tipo inteiro de 50 posições. Criar um vetor B de
mesmo tipo e dimensão de A, o qual será formado por: “Todo elemento de B deverá ser acrescido
de 5 ao conteúdo contido na posição correspondente de A”. Apresentar no vídeo a vetor A e depois
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
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	int A[tam], B[tam], i;

	for(i=0; i<tam; i++)
	{
		A[i] = 0;
		printf("\n\nDigite um numero para lista A na posicão %d: ", i+1);
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
