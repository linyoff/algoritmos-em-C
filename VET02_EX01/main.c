/*


Nome: Aliny Alves Dutra
Data: 10/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

 Elabore um algoritmo que receba via teclado um vetor 40 posições para armazenar números
reais. Processar e mostrar o menor valor existente entre os 20 primeiros e o maior valor existente entre os
20 últimos.
 Obs.: lembrando que para efeitos de comparação para o menor número, o primeiro número do vetor será o
parâmetro de comparação com os demais. Isto serve para o maior, porém, o vigésimo número será o
parâmetro.

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
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

	//vars
	float num[tam], menor_num, maior_num;
	int i, aux;

	//inicializando
	menor_num = maior_num = 0;
	aux = tam/2;

	//laço para receber valores
	for(i=0; i<tam; i++)
	{
		printf("\n\nDigite o %d° número: ", i+1);
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
