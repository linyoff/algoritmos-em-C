/*


Nome: Aliny Alves Dutra
Data: 28/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Um armazém trabalha com 100 mercadorias diferentes identificadas pelos números de 1 a 100.
O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela
que indica para cada mercadoria o preço de venda. Elabore um algoritmo para calcular o faturamento
mensal do armazém, isto é:
Faturamento = (quantidade[ i ] * preço[ i ] ) + faturamento

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 5

//==========================================================
int receber_qtd (int a)
{
	do
	{
		fflush(stdin);
		scanf("%d", &a);
		if(a <= 0)
			printf("\nINVALIDO\nDigite novamente: ");

	}while(a <= 0);

	return a;
}
float receber_preco (float a)
{
	do
	{
		fflush(stdin);
		scanf("%f", &a);
		if(a <= 0)
			printf("\nINVALIDO\nDigite novamente: ");

	}while(a <= 0);

	return a;
}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//criando vars
	int qtd[tam], i;
	float preco[tam], fat;

	fat = 0;

	for(i=0; i<tam; i++)
	{
		printf("\n\nDigite a quantidade de vendas da mercadoria %d: ", i+1);
		//recebendo quantidade de vendas por funcao
		qtd[i] = receber_qtd(qtd[i]);
		printf("\n\nDigite o preco de venda da mercadoria %d: ", i+1);
		//recebendo preco de venda por funcao
		preco[i] = receber_preco(preco[i]);

		fat = (qtd[i] * preco[i]) + fat;

	}
	//finalizando
	printf("\n\n\nO faturamento mensal foi de %.2f", fat);

    return 0;
}
