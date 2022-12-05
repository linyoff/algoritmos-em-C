/*


Nome: Aliny Alves Dutra
Data: 07/11/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Receber duas matrizes (A e B) de dimensão 50 x 50 de elementos do tipo inteiro, processar e
gerar a terceira matrizes (C) de mesma dimensão (50 x 50) da seguinte forma, Pegar os conteúdos da
matriz A e matriz B, e somá-los colocando-os na respectiva posição da matiz C (linha e coluna), ou seja,
linha1xcoluna1 de A + linha1xcoluna1 de B; e assim por diante.
Processar e mostrar:
a) a três matrizes;
b) o valor da soma das linhas pares da matriz C;
c) o valor da soma das colunas impares da matriz C;
d) Permitir que o usuário receba um número para representar uma coluna matriz C (validar corretivamente
durante a entrada para que esse número esteja entre 0 e o tamanho da matriz), processar e mostrar qual
o maior número (valor) desta linha.
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
void mostrar_matriz (int m[][tam2])
{
    int i, j;
    for (i=0; i<tam1; i++)
    {
        for (j=0; j<tam2; j++)
            printf ("%8d", m[i][j]);

        printf ("\n");
    }
}

//====================Codigo principal======================

int main()
{
    //start da semente do cronometro
    srand(time(NULL));

    //criando vars
    int mat1[tam1][tam2], mat2[tam1][tam2], mat3[tam1][tam2], i, j, soma_linha, soma_coluna, num_coluna, maior, aux;

    //inicializando
    soma_linha =  soma_coluna = num_coluna = maior = aux = 0;

    //inicializando matrizes
    for(i=0; i<tam1; i++)
        for(j=0; j<tam2; j++)
        {
           mat1[i][j] = 0;
           mat2[i][j] = 0;
           mat3[i][j] = 0;
        }

    //gerando valores randomicos matrizes
    for(i=0; i<tam1; i++)
    {
        for(j=0; j<tam2; j++)
        {
            mat1[i][j] = rand() % (tam1*tam2*5);
            mat2[i][j] = rand() % (tam1*tam2*5);
            //somando valores de matriz 1 e 2 para matriz 3
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    //exibindo matrizes
    printf("\nMATRIZ 1\n");
    mostrar_matriz(mat1);

    printf("\nMATRIZ 2\n");
    mostrar_matriz(mat2);

    printf("\nMATRIZ 3\n");
    mostrar_matriz(mat3);

    //somando valores
    for(i=0; i<tam1; i++)
        for(j=0; j<tam2; j++)
        {
            //soma das linhas pares
            if(i % 2 == 0)
            {
                soma_linha = soma_linha + mat3[i][j];
            }
            //soma das colunas impares
            if(j % 2 != 0)
            {
                soma_coluna = soma_coluna + mat3[i][j];
            }
        }
    //exibindo resultado da soma
    printf("\n\nValor da soma das linhas pares da matriz C: %d", soma_linha);
    printf("\n\nValor da soma das colunas impares da matriz C: %d ", soma_coluna);

    //laço para receber e validar numero da coluna
    do
    {
        printf("\n\nDigite o numero de uma coluna da matriz 3: ");
        fflush(stdin);
        scanf("%d", &num_coluna);
        if(num_coluna < 0 || num_coluna >= tam2)
        {
            printf("\nINVALIDO\n");
        }

    }while(num_coluna < 0 || num_coluna >= tam2);

    //procurando maior numero da coluna
    maior = mat3[0][num_coluna];//indice 0 para fazer o laço e coluna o numero inserido para ficar parado nessa coluna
    for(i=0; i<tam1; i++)//irá andar somente as linhas da coluna escolhida
    {
        if(mat3[i][num_coluna] > maior)
        {
            maior = mat3[i][num_coluna];
            aux = i;
        }
    }
    printf("\n\nO maior numero da coluna %d e %d e esta na linha %d\n\n", num_coluna, maior, aux);

    return 0;
}
