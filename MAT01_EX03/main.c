/*


Nome: Aliny Alves Dutra
Data: 23/11/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Receber uma matriz composta bidimensional "A" de dimensão 50 por 60 com elementos do tipo
números reais. Veja o exemplo:
colunas
0 1 2 3 4 5
0 175 225 10 900 3.7 4.8
1 9,8 100 363 432 156 18
2 40 301 30.2 381 15 -20
3 402 211 213 992 442 721
4 21 3 2 1 900 200
a) Limpar a tela e mostrar a matriz;
b) Mostrar qual o valor do elemento identificado por A[4,5];
c) Mostrar qual é soma dos elementos da QUARTA COLUNA, ou seja, COLUNA DE ÍNDICE 3;
d) Mostrar qual é o maior número da matriz e em qual linha e coluna ele está armazenado;
e) Mostrar qual é o menor número da matriz e em qual linha e coluna ele está;
Obs.: para ajudar na simulação e testes, usar uma matriz 5x6 como exemplo acima.


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
#define tam2 6

//==========================================================
void menor_num(float mat[][tam2])
{
	float m;
	int aux1, aux2;

	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			if(i==0 && j==0)
			{
				m = mat[i][j];
				aux1 = i;
				aux2 = j;

			}
			if(m > mat[i][j])
			{
				m = mat[i][j];
				aux1 = i;
				aux2 = j;
			}
		}
	}
	printf("\n\nO MENOR numero da matriz é %.1f e está em [%d][%d]\n\n", m, aux1, aux2);
}

void maior_num(float mat[][tam2])
{
	float m;
	int aux1, aux2;

	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			if(i==0)
			{
				m = mat[i][j];
				aux1 = i;
				aux2 = j;

			}
			if(mat[i][j] > m)
			{
				m = mat[i][j];
				aux1 = i;
				aux2 = j;
			}
		}
	}
	printf("\n\nO MAIOR numero da matriz é %.1f e está em [%d][%d]", m, aux1, aux2);
}

void soma_coluna(float mat[][tam2])
{
	float soma = 0;

	for(int i=0; i<tam1; i++)
	{
		soma = soma + mat[i][3];
	}
	printf("\nA soma dos elementos da quarta coluna é de %1.f\n", soma);
}

void mostrar_mat(float mat[][tam2])
{
	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			printf(" %8.1f", mat[i][j]);
		}
		printf("\n");
	}
}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//CRIANDO VARS
	float mat[tam1][tam2], maior, menor;
	int i, j;

	//start da semente do cronometro
	srand(time(NULL));

	//laço para receber valores randomicos na matriz
	for(i=0; i<tam1; i++)
	{
		for(j=0; j<tam2; j++)
		{
			mat[i][j] = rand() % (tam1*tam2*5);
		}
	}

	//exibindo matriz
	mostrar_mat(mat);
	printf("\nValor do elemento identificado por MAT[4,5]: %.1f\n", mat[4][5]);
	//somar e exibir soma dos elementos da quarta coluna
	soma_coluna(mat);
	//procurando maior numero na matriz e posicao
	maior_num(mat);
	//procurando menor numero na matriz e posicao
	menor_num(mat);


    return 0;
}
