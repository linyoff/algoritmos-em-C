/*


Nome: Aliny Alves Dutra
Data: 22/11/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Criar uma matriz de 100 linhas e 50 colunas com números inteiros. Ler (receber via teclado)
somente a primeira linha. As demais, preencher da seguinte forma:
• na segunda linha colocar os valores da primeira linha multiplicados por 2;
• na terceira linha os valores da primeira multiplicados por 3;
• na quarta linha os valores da primeira multiplicados por 4, ..... e assim por diante.
Obs.1: ao final limpar a tela e mostrar no vídeo a matriz.
Obs.2: para ajudar na simulação e testes, usar uma matriz 10x5 como exemplo.


*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam1 10
#define tam2 5

//==========================================================
void mostrar_mat(int mat[][tam2])
{
	int i, j;

	for (i=0; i<tam1; i++)
    {
        for (j=0; j<tam2; j++)
		{
			printf ("%10d", mat[i][j]);
		}
        printf ("\n");
    }
}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int mat[tam1][tam2], i, j, aux;

	for(i=0; i<tam1; i++)
	{
		aux = i+1;
		for(j=0; j<tam2; j++)
		{
			if(i==0)
			{
				printf("\nDigite o número na mat[%d][%d]: ", i, j);
				fflush(stdin);
				scanf("%d", &mat[i][j]);
			}
			else
			{
				mat[i][j] = mat[i-1][j] * aux;
			}
		}
	}

	//exibindo matriz
	printf("\n\n");
	mostrar_mat(mat);


    return 0;
}
