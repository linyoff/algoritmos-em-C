/*


Nome: Aliny Alves Dutra
Data: 28/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Faça um programa em linguagem C, que receba um valor para representar o
raio de uma esfera, calcular e mostrar o valor de seu volume, conforme a fórmula do volume:
v = (4 π R3) / 3
Obs.:
1) criar uma função com passagem de parâmetro por “referência” para receber o valor do raio;
2) criar uma função com passagem de parâmetro por “valor” para validar a entrada (o valor do raio)
para ser maior que zero;
3) criar uma função do tipo VOID para calcular o valor do volume, e mostrar seu resultado DENTRO
DESTA FUNÇÃO.


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

void valor_raio (float *r)
{
	printf("\nDigite um valor para o raio de uma esfera: ");
	fflush(stdin);
	scanf("%f", &*r);

}

float validar_raio (float x)
{
	while(x <= 0)
	{
		printf("\nVALOR INVALIDO\n\nDigite outro valor: ");
		fflush(stdin);
		scanf("%f", &x);
	}
	return (x);
}

void volume_raio (float *v, float r)
{
	*v = (4 * 3.14 * pow(r, 3)) / 3;
	printf("\n\nO VOLUME DA ESFERA E IGUAL A %.1f\n\n", *v);
}

//====================CODIGO PRINCIPAL======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //VARS
    float r = 0, v = 0;

 	printf("\n\n============ VOLUME DE UMA ESFERA ===========\n");
 	//funcao para receber valor do raio
 	valor_raio(&r);
 	//validando valor do raio
 	r = validar_raio(r);
 	//calculo volume do raio
 	volume_raio(&v, r);


    return 0;
}
