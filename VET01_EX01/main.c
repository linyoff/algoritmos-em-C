/*


Nome: Aliny Alves Dutra
Data: 05/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo que receba via teclado um vetor numérico de 10 posições, limpar a tela,
dar uma mensagem e mostrá-los no vídeo.

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

    //CRIANDO VARS
    int num[tam], i;

    //incializando
    i = 0;

    //recebendo valores
    while (i < tam)
	{
		num[i] = 0;
		printf("\n\nDigite um número: ");
		fflush(stdin);
		scanf("%d", &num[i]);
		i++;
	}
	//finalizando
	i = 0;
	while(i<tam)
	{
		printf("\n\n %d", num[i]);
		i++;
	}

    return 0;
}
