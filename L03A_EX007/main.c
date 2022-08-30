/*
Nome: Aliny Alves Dutra
1º período de Análise e Desenvolvimento de Sistemas
Prof. Ernani Cláudio Borges
Data: 29/08/2022

L03A_EX007 - Receber dois números, processar e mostrá-los em ordem crescente.

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
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    float vl1, vl2;

    //inicializando vars
    vl1 = vl2 = 0;

    //recebendo valores
    printf ("\nDigite um valor: ");
    fflush (stdin);
    scanf ("%f", &vl1);
    printf ("\nDigite outro valor: ");
    fflush (stdin);
    scanf ("%f", &vl2);

    //verificação
    if (vl1 > vl2)
        printf ("\n %.0f, %.0f", vl1, vl2);
    else
        printf ("\n %.0f, %.0f", vl2, vl1);


    return 0;
}
