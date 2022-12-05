/*


Nome: Aliny Alves Dutra
Data: 28/11/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Na teoria dos sistemas define-se o elemento MINMAX de uma matriz como sendo o maior
elemento da linha onde se encontra o menor elemento da matriz. Faça um algoritmo (em C) que leia
(receba via teclado) uma matriz 4 x 7 com números reais. Após, mostrar a matriz e seu MINMAX juntamente
com sua posição (Localização: linha e coluna).


*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam1 3
#define tam2 5

//==========================================================
void mostrar_mat(float m[][tam2])
{
	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			printf("%8.1f", m[i][j]);
		}
		printf("\n");
	}
}

void receber_mat(int m[][tam2])
{
	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			printf("\nDigite o valor em [%d][%d]: ", i, j);
			fflush(stdin);
			scanf("%f", &m[i][j]);
		}
	}
}
//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //start da semente do cronometro
    srand(time(NULL));

	float mat[tam1][tam2], min, minmax;
	int i, j, aux1, aux2;

	receber_mat(mat);

	for(i=0; i<tam1; i++)
	{
		for(j=0; j<tam2; j++)
		{
			if(i==0 && j==0)
			{
				min = mat[i][j];
			}
			if(min > mat[i][j])
			{
				min = mat[i][j];
				if(j==0)
				{
					minmax = mat[i][j];
					aux1 = i;
					aux2 = j;
				}
				if(mat[i][j] < minmax)
				{
					minmax = mat[i][j];
					aux1 = i;
					aux2 = j;
				}
			}
		}
	}

	printf("\n");
	mostrar_mat(mat);
	printf("\n\nO MINMAX é %.1f na posicão [%d][%d]\n\n", minmax, aux1, aux2);

    return 0;
}
