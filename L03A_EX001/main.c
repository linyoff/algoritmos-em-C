/*
Nome: Aliny Alves Dutra
Data:
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

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");


    //criando vars
    int vla, vlb, vlx;

    //inicializando vars
    vla = vlb = vlx = 0;

    //recebendo valores
    printf ("\n\n Digite um valor: ");
    fflush (stdin);
    scanf ("%d", &vla);

    printf ("\n\n Digite outro valor: ");
    fflush (stdin);
    scanf ("%d", &vlb);

    //calculo
    vlx = vla + vlb;

    //verificando
    if (vlx >= 10)
        printf("\n\n A soma dos valores é maior que 10");
    else
        printf ("\n\n A soma dos valores é menor que 10");


    return 0;
}
