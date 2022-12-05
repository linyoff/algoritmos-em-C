/*


Nome: Aliny Alves Dutra
Data: 28/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba um vetor A de 20 posições do tipo inteiro. Gerar dois outros
vetores B e C da seguinte forma:
 a) o Vetor B deve conter todos os elementos pares de A.
 b) o Vetor C deve conter todos os elementos ímpares de A.
 obs.: não se esqueça que o usuário pode ter digitado somente números pares ou somente ímpares. Caso
aconteça, o algoritmo deve emitir uma mensagem avisando que NÃO houve ocorrência.
 No final, limpar a tela e mostrar todos os vetores (A, B e C) caso tenha conteúdo.


*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 10

//==========================================================
int receber_vet (int a)
{
	fflush(stdin);
	scanf("%d", &a);

	return a;
}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//criando vars
	int a[tam], b[tam], c[tam], i, ib, ic;

	//incializando vetores
	for(ib=0; ib<tam; ib++)
		b[i] = 0;
	for(ic=0; ic<tam; ic++)
		c[i] = 0;

	ib=0;
	ic=0;

	//recebendo dados do vetor a
	for(i=0; i<tam; i++)
	{
		printf("\nDigite o valor %d: ", i+1);
		a[i] = receber_vet(a[i]);//funcao para receber vetor

		if(a[i] % 2 == 0)//verificando se numero é par
		{
			//se valor for par, indice b recebe
			b[ib] = a[i];
			ib++;//incrementando indice b
		}
		else
			if(a[i] % 2 != 0)//verificando se numero é impar
			{
				//se valor for impar, indice c recebe
				c[ic] = a[i];
				ic++;//incrementando indice c
			}
	}

	//finalizando
	printf("\nVetor A: ");
	for(i=0; i<tam; i++)
		printf(" %d ", a[i]);

	printf("\nVetor B: ");
	if(ib == 0)
		printf("\nNao houve entradas para o vetor B");
	else
		for(i=0; i<ib; i++)
		{
			printf(" %d ", b[i]);
		}

	printf("\nVetor C: ");
	if(ic == 0)
		printf("\nNao houve entradas para o vetor C");
	else
		for(i=0; i<ic; i++)
		{
			printf(" %d ", c[i]);
		}

    return 0;
}
