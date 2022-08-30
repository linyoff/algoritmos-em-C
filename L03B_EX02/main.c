/*
Nome: Aliny Alves Dutra
1� per�odo de An�lise e Desenvolvimento de Sistemas
Prof. Ernani Cl�udio Borges
Data:

L03B_ex02 - Efetuar a leitura de 3 valores num�ricos positivos e mostr�-los em ordem decrescente (do maior para
o menor). A cada entrada verificar se o n�mero � menor que zero, caso verdadeiro mostrar mensagens de
n�mero invalido e finalizar o algoritmo, ou seja, s� receber o pr�ximo n�mero se o atual for maior que zero.

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

int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    float vl1, vl2, vl3;

    //inicializando vars
    vl1 = vl2 = vl3 = 0;

    //recebendo valores
    printf ("\nDigite o primeiro valor: ");
    fflush (stdin);
    scanf ("%f", &vl1);

    //verifica��o se o valor � menor que 0
    if (vl1 < 0) //verificando primeiro valor
        printf ("\nValor inv�lido!!!");
    else
    {
        printf ("\nDigite o segundo valor: ");
        fflush (stdin);
        scanf ("%f", &vl2);
        if (vl2 < 0) //verificando segundo valor
            printf ("\nValor inv�lido!!!");
        else
        {
            printf ("\nDigite o terceiro valor: ");
            fflush (stdin);
            scanf ("%f", &vl3);
            if (vl3 < 0)
                printf ("\nValor inv�lido!!!");
            else
            {

            }
        }
    }

    //colocando em ordem decrescente
    if (vl1 > vl2 && vl2 > vl3)
        printf ("\n %.0f, %.0f, %.0f", vl1, vl2, vl3);
    else
        if (vl2 > vl1 && vl1 > vl3)
            printf ("\n %.0f, %.0f, %.0f", vl2, vl1, vl3);
        else
            if (vl3 > vl1 && vl1 > vl2)
                printf ("\n %.0f, %.0f, %.0f", vl3, vl1, vl2);
            else
                if (vl1 > vl3 && vl3 > vl2)
                   printf ("\n %.0f, %.0f, %.0f", vl1, vl3, vl2);
                else
                    if (vl2 > vl3 && vl3 > vl1)
                       printf ("\n %.0f, %.0f, %.0f", vl2, vl3, vl1);
                    else
                        printf ("\n %.0f, %.0f, %.0f", vl3, vl2, vl1);


    return 0;
}
