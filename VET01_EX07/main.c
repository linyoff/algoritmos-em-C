/*


Nome: Aliny Alves Dutra
Data: 07/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba os nomes e as notas de 50 alunos, ou seja: n1, n2, n3 e n4 (um
vetor de 50 posições para cada uma das notas e um vetor para o nome). Validar corretivamente as
notas para estarem entre 0 e 10 pontos. Criar um vetor chamado MD para armazenar a média
aritmética de cada aluno.
 No Final, limpar a tela e mostrar o nome do aluno e sua média aritmética.
 Mostrar também, qual a maior média e o nome(s) do(s) aluno(s).

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 3

//==========================================================

void entrada_num (float *x)
{
	do
    {
        fflush(stdin);
        scanf("%f", &*x);
        if (*x < 0 || *x > 10)
        	printf("\nINVALIDO\n\nDigite novamente: ");

    }while(*x < 0 || *x > 10);
}


//===================CODIGO PRINCIPAL=======================

int main()
{
    //criando vars
    char nm[tam][50], nm_maior_md[50];
    float n1[tam], n2[tam], n3[tam], n4[tam], md[tam], maior_md;
    int i;

    for(i=0; i<tam; i++)
	{
		//laço com validaçao do nome
		do
		{
			printf("\n\nDigite o nome do aluno: ");
			fflush(stdin);
			gets(nm[i]);
			//se for vazio apresentar invalido
			if (strcmp(nm[i], "") == 0)
				printf("\nINVALIDO");

		}while(strcmp(nm[i], "") == 0);
		//funções para receber notas
		printf("\nDigite a nota 1 do aluno: ");
		entrada_num(&n1[i]);
		printf("\nDigite a nota 2 do aluno: ");
		entrada_num(&n2[i]);
		printf("\nDigite a nota 3 do aluno: ");
		entrada_num(&n3[i]);
		printf("\nDigite a nota 4 do aluno: ");
		entrada_num(&n4[i]);
		//media das notas
		md[i] = (n1[i] + n2[i] + n3[i] + n4[i]) / 4;

	}
	system("cls");
	//finalizando
	for (i=0; i<tam; i++)
	{
		printf("\n\nAs notas de %s foram: ", nm[i]);
		printf("\nNota 1: %.1f", n1[i]);
		printf("\nNota 2: %.1f", n2[i]);
		printf("\nNota 3: %.1f", n3[i]);
		printf("\nNota 4: %.1f", n4[i]);
		printf("\nMedia das notas: %.1f", md[i]);
		if(i == 0)//se indice for == 0 maior media recebe md[i]
		{
			maior_md = md[i];
			strcpy(nm_maior_md, nm[i]);
		}


		if(md[i] > maior_md)
		{
			maior_md = md[i];
			strcpy(nm_maior_md, nm[i]);
		}
	}
	printf("\n\nA maior media foi %.1f do aluno %s\n\n", maior_md, nm_maior_md);







    return 0;
}
