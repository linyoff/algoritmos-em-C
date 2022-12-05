/*


Nome: Aliny Alves Dutra
Data: 28/11/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Criar uma matriz de 50x50 do tipo inteiro e receber via teclado somente os elementos da
diagonal principal. Ap�s a entrada, preencher as c�lulas acima da diagonal principal com 1 e as abaixo
com 2.
Limpar a tela e mostrar no v�deo a matriz completa.
Obs.1: n�o fazer a entrada dos dados na "m�o" (linha por linha) ... usar l�gica com la�o de repeti��o
Obs.2: para ajudar na simula��o e testes, usar uma matriz 5x5.


*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam1 5
#define tam2 5

//==========================================================
void mostrar_mat(int mat[][tam2])
{
	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			printf("%8d", mat[i][j]);
		}
		printf("\n");
	}

}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int mat[tam1][tam2], i, j;

    for(i=0; i<tam1; i++)
	{
		for(j=0; j<tam2; j++)
		{
			if(i==j)
			{
				printf("\nDigite o valor em [%d][%d]: ", i, j);
				fflush(stdin);
				scanf("%d", &mat[i][j]);
			}
			else
				if(i<j)
				{
					mat[i][j] = 1;
				}
				else
				{
					mat[i][j] = 2;
				}
		}
	}
	printf("\n");
	mostrar_mat(mat);





    return 0;
}
