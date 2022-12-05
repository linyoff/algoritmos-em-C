/*


Nome: Aliny Alves Dutra
Data: 28/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba um vetor de 15 posições com números inteiros, processar e
mostrar (limpar a tela):
 a) o vetor inicial;
 b) quais são os elementos de índice PAR e o valor da SOMA entre esses elementos;
 c) quais são os elementos de índices IMPAR e o valor do PRODUTO (multiplicação) entre eles .

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

void recebendo_vet (int a[], int i, int t)
{
	for(i=0; i<t; i++)
	{
		printf("\n\nDigite o valor no indice %d: ", i);
		fflush(stdin);
		scanf("%d", &a[i]);
	}

}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//criando vars
	int vet[tam], i, soma, produto;

	//incialziando
	produto = 1;
	soma = 0;

	//recebendo valores do vetor
	recebendo_vet(vet, i, tam);

	//finalizando
	printf("\n\nVetor inicial:");
	for(i=0; i<tam; i++)//laço para exibir vetor inicial
	{
		printf("%2d", vet[i]);
	}
	//exibindo elementos no indice par
	printf("\n\nOs elementos de indice PAR são:");
	for(i=0; i<tam; i++)
	{
		if(i % 2 == 0)//verificando se indice é par
		{
			printf("%2d", vet[i]);
			soma = soma + vet[i];//encrementando a soma
		}
	}
	printf("\nE a soma deles é igual a: %d", soma);

	printf("\n\nOs elementos de indice IMPAR são:");
	for(i=0; i<tam; i++)
	{
		if(i % 2 != 0)//verificando de indice é impar
		{
			printf("%2d", vet[i]);
			produto = produto * vet[i];//encrementando ao produto
		}
	}
	printf("\nE o produto deles é igual a: %d", produto);



    return 0;
}

