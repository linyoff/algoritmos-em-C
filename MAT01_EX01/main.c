/*

Nome: Aliny Alves Dutra
Data: 21/11/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br


Receber uma matriz de dimensão 50 por 50 com elementos do tipo números reais. Após, limpar
a tela, processar e mostrar:
a) o valor da soma de cada linha deverá estar em um vetor;
b) o valor da soma de cada coluna deverá estar em um vetor;
c) o valor da soma de todos elementos da matriz em uma varável comum.
Obs.: para ajudar na simulação e testes, usar uma matriz 5x5 como exemplo.

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam1 5
#define tam2 5

//==========================================================



//====================Codigo principal======================

int main()
{

    //CRIANDO VARS
    float mat[tam1][tam2], soma_lin[tam1], soma_col[tam2], soma_tot;
    int i, j;

    //start da semente do cronometro
    srand(time(NULL));

    //incializando
    soma_tot = 0;

    for(i=0; i<tam1; i++)
    {
        soma_lin[i] = 0;
        soma_col[i] = 0;
    }


    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            mat[i][j] = rand() % (tam1*tam2*2);
            soma_tot = soma_tot + mat[i][j];
            soma_lin[i] = soma_lin[i] + mat[i][j];
            soma_col[j] = soma_col[j] + mat[i][j];
            j++;
        }
        i++;
    }

    for(i=0; i<tam1; i++)
    {
        for(j=0; j<tam2; j++)
        {
            printf("%8.1f ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSoma das linhas: ");
    for(i=0; i<tam1; i++)
        printf(" %2.1f ", soma_lin[i]);

    printf("\n\nSoma das colunas: ");
    for(i=0; i<tam1; i++)
        printf(" %2.1f ", soma_col[i]);

    printf("\n\nSoma de todos os elementos da matriz: %.1f\n\n", soma_tot);

    return 0;
}
