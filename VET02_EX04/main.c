/*

Nome: Aliny Alves Dutra
Data: 13/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br


Elabore um algoritmo que receba dois vetores A e B de 15 posições para números inteiros. Criar
um terceiro vetor C o qual será composto pela UNIÃO destes dois vetores, ou seja, todo o conteúdo de A e
de B estão em C.
 No final, limpar a tela e mostrar todos os vetores (A, B e C).


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

int receber_valores(int x)
{
    fflush(stdin);
    scanf("%d", &x);

    return(x);
}

//==================codigo principal========================

int main()
{
    //criando vars
    int A[tam], B[tam], C[tam*2], i, ic;

    //inicializando
    ic = 0;

    for(i=0; i<tam; i++)//laço para receber valores de A
    {
        printf("\nDigite o valor %d de A: ", i+1);
        A[i] = receber_valores(A[i]);
        //vetor C recebe vetor A
        C[ic] = A[i];
        ic++;//somando ao indice C
    }

    for(i=0; i<tam; i++)//laço para receber valores de B
    {
        printf("\nDigite o valor %d de B: ", i+1);
        B[i] = receber_valores(B[i]);
        //vetor C recebe vetor B
        C[ic] = B[i];
        ic++;//somando ao indice C
    }
    //finalizando
    printf("\n\nVetor A:");
    for(i=0; i<tam; i++)
        printf(" %d ", A[i]);

    printf("\n\nVetor B:");
    for(i=0; i<tam; i++)
        printf(" %d ", B[i]);

    printf("\n\nVetor C:");
    for(ic=0; ic<tam*2; ic++)
        printf(" %d ", C[ic]);

    printf("\n\nFim Algoritmo\n\n");


    return 0;
}
