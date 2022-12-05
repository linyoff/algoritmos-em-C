/*


Nome: Aliny Alves Dutra
Data: 10/10/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo que receba via teclado um vetor n�meros inteiros. Processar e mostrar
qual � o maior e menor n�mero do vetor e em qual posi��o ele aparece.
 Obs.: desprezar n�mero maiores iguais, mostrar somente a posi��o primeiro n�mero maior e menor
encontrado.

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 6

//==========================================================



//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

	//criando vars
	int vet[tam], i, maior_num, menor_num, aux1, aux2;

	//la�o para receber valores
	for(i=0; i<tam; i++)
	{
		printf("\n\nDigite o valor %d: ", i+1);
		fflush(stdin);
		scanf("%d", &vet[i]);

		if(i==0)
		{
			maior_num = vet[i];
			aux1 = i;
			menor_num = vet[i];
			aux2 = i;
		}
		//verificando se o valor j� foi digitado
		if(vet[i] != maior_num)
			//verificando maior numero
			if(vet[i] > maior_num)
			{
				maior_num = vet[i];
				aux1 = i;
			}

		//verificando se o valor j� foi digitado
		if(vet[i] != menor_num)
			//verificando menor numero
			if(vet[i] < menor_num)
			{
				menor_num = vet[i];
				aux2 = i;
			}


	}
	//finalizando
    printf("\n\Vetor: ");
    //la�o para exibir o vetor
	for(i=0; i<tam; i++)
		printf(" %d ", vet[i]);
	//exibindo maior numero
	printf("\n\nO MAIOR numero digitado foi %d na posicao %d", maior_num, aux1+1);
	//exibindo menor n�mero
	printf("\n\nO MENOR numero digitado foi %d na posicao %d\n\n", menor_num, aux2+1);

    return 0;
}
