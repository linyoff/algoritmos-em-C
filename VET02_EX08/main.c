/*


Nome: Aliny Alves Dutra
Data: 28/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo para criar 2 vetores de 50 posições cada. Um irá receber nome e o outro a
idade (validar a idade maior ou igual a zero).
Processar e mostrar o(s) nome(s) da(s) pessoa(s) que tem maior idade.

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

	//criando vars
	int id[tam], i;
	char nm[tam][50];

	//recebendo dados
	for(i=0; i<tam; i++)
	{
		do
		{
			printf("\nDigite o nome da pessoa %d: ", i+1);
			fflush(stdin);
			gets(nm[i]);
			if(strcmp(nm[i], "") == 0)
				printf("\nINVALIDO\n");

		}while(strcmp(nm[i], "") == 0);
		do
		{
			printf("\nDigite a idade da pessoa %d: ", i+1);
			fflush(stdin);
			scanf("%d", &id[i]);
			if(id[i] <=0)
				printf("\nINVALIDO\n");

		}while(id[i] <=0);

	}


    return 0;
}
