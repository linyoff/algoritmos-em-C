/*


Nome: Aliny Alves Dutra
Data: 05/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo que receba via teclado um vetor numérico de 50 posições, logo após,
limpar a tela, dar uma mensagem "CONTEUDO DO VETOR"; e mostrar todos os seus elementos; e,
logo em seguida mostras quais os números pares (se houver) e quais os números ímpares (se
houver)

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
	int num[tam], num_par[tam], num_imp[tam], i, ip, ii;

	//incializando vars
	i = ip = ii = 0;

	for (i=0; i<tam; i++)
	{
		num[i] = 0;
		num_par[i] = 0;
		num_imp[i] = 0;
		printf("\n\nDigite um número: ");
		fflush(stdin);
		scanf("%d", &num[i]);
		if (num[i] % 2 == 0)
		{
			num_par[ip] = num[i];
			ip++;
		}
		else
		{
			num_imp[ii] = num[i];
			ii++;
		}
	}
	//finalizando
	system("cls");
	printf("\nTodos os numeros: ");
	for (i=0; i<tam; i++)
		printf(" %d ", num[i]);
	if (ip == 0)
		printf("\n\nNão houve entrada de numeros pares");
	else
		i = 0;
		printf("\n\nNumeros pares: ");
		while(i<ip)
		{
			printf(" %d", num_par[i]);
			i++;
		}

	if (ii == 0)
		printf("\n\Não houve entrada de numeros impares");
	else
		i = 0;
		printf("\n\nNumeros impares: \n\n");
		while(i<ii)
		{
			printf(" %d", num_imp[i]);
			i++;
		}





    return 0;
}
