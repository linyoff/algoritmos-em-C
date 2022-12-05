/*


Nome: Aliny Alves Dutra
Data: 28/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba um vetor de 10 posições de números inteiros. Esse vetor deve
ser montado da seguinte forma:
 a) os índices PARES devem receber os números de 6 a 10;
 b) os índices ÍMPARES devem receber os números de 1 a 5.
 No final, limpar a tela e mostrar o vetor
 obs.: não receber nada via teclado.


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



//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//START DA SEMENTE DO CRONOMETRO
	srand(time(NULL));

	//criando vars
	int vet[tam], i, aux;

	//auxiliar para adicionar 6 na geração randomica
	aux = 6;

	for(i=0; i<tam; i++)
	{
		if(i % 2 == 0)//verificando se indice é par
			//gerando numero randomico de 6 a 10
			vet[i] = 6 + rand() % 5;
		else
			//se impar, gerando numero randomico de 1 a 6
			vet[i] = rand() % 6;

	}
	for(i=0; i<tam; i++)
		printf(" %d ", vet[i]);

	printf("\n\n");




    return 0;
}
