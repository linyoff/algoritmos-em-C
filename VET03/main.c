/*

Nome: Aliny Alves Dutra
Data: 10/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo que receba via teclado um vetor com dez números inteiro chamado de V1 e um segundo vetor com cinco números inteiros chamado V2. Limpe a tela, processe / calcule e mostre todos os vetores incluindo os dois vetores resultantes.
O primeiro resultante chamado de R1 será composto pelo número par do primeiro vetor somado aos números do segundo vetor.
O segundo resultante (R2) será composto pela quantidade de divisores de cada número impar do primeiro vetor pelo segundo vetor.

Veja o exemplo:


V1	4	7	5	8	2	15	9	6	10	11
	0	1	2	3	4	5	6	7	8	9


V2	3	4	5	8	2
	0	1	2	3	4


R1	26	30	24	...
	0	1	2	4

R2	0	1	2	...
	0	1	2	...

Prof. Ernani Cláudio Borges
Data: 17/10/2022
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
#define tam2 5

//==========================================================
void mostrar_vet(int x[], int t)
{
    for(int i=0; i<t; i++)
        printf(" %d ", x[i]);
}

void receber_val(int x[], int t)
{
    for(int i=0; i<t; i++)
        x[i] = rand() % (t*2);

}

//=========== CODIGO PRINCIPAL =============================

int main()
{
    //START DA SEMENTE CRONOMETRO DO PROCESSADOR
    srand(time(NULL));

    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int v1[tam], v2[tam2], r1[tam], r2[tam], i, j, ir1, ir2, qtd_div;

    ir1 = ir2 = qtd_div = 0;

    for(i=0; i<tam2; i++)
        v2[i] = 0;

    //receber dados
    printf("\n\nRecebendo numeros para o Vetor 1: ");
    receber_val(v1, tam);
    printf("\n\nRecebendo numeros para o Vetor 2: ");
    receber_val(v2, tam2);

    //resultante r1
    for(i=0; i<tam; i++)
    {
        if(v1[i] % 2 == 0)
            r1[ir1] = v1[i];
        for(j=0; j<tam2; j++)
            r1[ir1] = r1[ir1] + v1[i];
            ir1++;
    }

    //resultante r2
    for(i=0; i<tam; i++)
    {
        if(v1[i] % 2 != 0)
            for(j=0; j<tam2; j++)
            {
                if(v1[i] % v2[j] == 0)
                {
                    qtd_div++;
                }
            }
            r2[ir2] = qtd_div;
            ir2++;
            qtd_div = 0;

    }

    //finalizando
    printf("\n\nVetor 1: ");
    mostrar_vet(v1, tam);

    printf("\n\nVetor 2: ");
    mostrar_vet(v2, tam2);

    printf("\n\nResultante 1: ");
    mostrar_vet(r1, ir1);

    printf("\n\nResultante 2: ");
    mostrar_vet(r2, ir2);

    return 0;

}
