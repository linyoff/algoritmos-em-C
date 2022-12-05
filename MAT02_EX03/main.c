/*


Nome: Aliny Alves Dutra
Data: 29/11/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Receber uma matriz A (100x70) do tipo inteiro (validar para não receber o número zero). Ao
final processar e mostrar:
a) a soma dos elementos pares;
b) a soma dos elementos ímpares;
c) o percentual de elementos pares e o percentual de elementos ímpares em relação ao total de elementos
contidos na matriz.

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
#define tam2 7

//==========================================================
void exibir_mat(int m[][tam2])
{
	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			printf("%8d", m[i][j]);
		}
		printf("\n");
	}
}

void recebendo_mat(int m[][tam2])
{
	int zero = 0;

	for(int i=0; i<tam1; i++)
	{
		for(int j=0; j<tam2; j++)
		{
			m[i][j] = rand() % (tam1*tam2*3);
			if(m[i][j] == 0)
			{
				j--;
			}
		}
	}
}
//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//START DA SEMENTE DO CRONOMETRO
	srand(time(NULL));

	//criando vars
	int mat[tam1][tam2], i, j, soma_par, tot_par, soma_imp, tot_imp, tot, perc_par, perc_imp;

	//inicializando
	soma_par = tot_par = tot_imp = tot = soma_imp = perc_par = perc_imp = 0;

	//recebendo matriz
	recebendo_mat(mat);

	//laço para fazer somas
	for(i=0; i<tam1; i++)
	{
		for(j=0; j<tam2; j++)
		{
			//verificando se é par
			if(mat[i][j] % 2 == 0)
			{
				//fazendo soma dos pares
				soma_par = soma_par + mat[i][j];
				tot_par++;
			}
			else
			{
				//fazendo soma dos impares
				soma_imp = soma_imp + mat[i][j];
				tot_imp++;
			}
			//encrementado total de numeros contidos na matriz
			tot++;
		}
	}

	//calculo percentual de numeros pares
	perc_par = (tot_par*100) / tot;
	//calculo percentual de numeros impares
	perc_imp = (tot_imp*100) / tot;

	//finalizando
	exibir_mat(mat);
	printf("\n\nA soma dos elementos PARES da matriz e igual a %d", soma_par);
	printf("\n\nA soma dos elementos IMPARES da matriz e igual a %d\n\n", soma_imp);
	printf("\n\nO percentual de numeros PARES é de %d%%", perc_par);
	printf("\n\nO percentual de numeros IMPARES é de %d%%", perc_imp);

	printf("\n\n\nFINALIZANDO...\n\n");

    return 0;
}
