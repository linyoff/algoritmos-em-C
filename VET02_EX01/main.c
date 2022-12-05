/*


Nome: Aliny Alves Dutra
Data: 10/10/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba via teclado um vetor 40 posi��es para armazenar n�meros
reais. Processar e mostrar o menor valor existente entre os 20 primeiros e o maior valor existente entre os
20 �ltimos.
 Obs.: lembrando que para efeitos de compara��o para o menor n�mero, o primeiro n�mero do vetor ser� o
par�metro de compara��o com os demais. Isto serve para o maior, por�m, o vig�simo n�mero ser� o
par�metro.

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
float entrada_num (float *x)
{
	fflush(stdin);
	scanf("%f", &*x);

}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

	//vars
	float num[tam], menor_num, maior_num;
	int i, aux;

	//inicializando
	menor_num = maior_num = 0;
	aux = tam/2;

	//la�o para receber valores
	for(i=0; i<tam; i++)
	{
		printf("\n\nDigite o %d� n�mero: ", i+1);
		entrada_num(&num[i]);
		if (i == 0)//se for primeiro valor
			menor_num = num[i];
		//verificando o menor numero
		if (num[i] < menor_num && i < tam/2)
			menor_num = num[i];
		//se for primeiro valor maior entre a metade de tam
		if(i == tam/2)
			maior_num = num[i];
		//verificando o maior numero
		if(num[i] > maior_num)
			maior_num = num[i];

		printf("\n\n\n %.1f ", num[i]);
	}
	printf("\n\n\nO MENOR numero entre os %d primeiros foi: %.1f\n", aux, menor_num);
	printf("\n\n\nO MAIOR numero entre os %d ultimos foi: %.1f\n\n\n", aux, maior_num);


    return 0;
}
