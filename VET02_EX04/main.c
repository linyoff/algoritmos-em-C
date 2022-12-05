/*

Nome: Aliny Alves Dutra
Data: 13/10/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br


Elabore um algoritmo que receba dois vetores A e B de 15 posi��es para n�meros inteiros. Criar
um terceiro vetor C o qual ser� composto pela UNI�O destes dois vetores, ou seja, todo o conte�do de A e
de B est�o em C.
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

    for(i=0; i<tam; i++)//la�o para receber valores de A
    {
        printf("\nDigite o valor %d de A: ", i+1);
        A[i] = receber_valores(A[i]);
        //vetor C recebe vetor A
        C[ic] = A[i];
        ic++;//somando ao indice C
    }

    for(i=0; i<tam; i++)//la�o para receber valores de B
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
