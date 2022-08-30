/*
Nome: Aliny Alves Dutra
1� per�odo de An�lise e Desenvolvimento de Sistemas
Prof. Ernani Cl�udio Borges
Data: 29/08/2022


L03B_ex01 - Ler dois valores num�ricos e processar e apresentar:
a) O valor da diferen�a do maior pelo menor.
b) caso sejam iguais, uma mensagem no v�deo;

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
    float val1, val2, val_dif;

    //inicializando vars
    val1 = val2 = val_dif = 0;

    //recebendo valores
    printf ("\nDigite um valor: ");
    fflush(stdin);
    scanf ("%f", &val1);
    printf ("\nDigite outro valor: ");
    fflush (stdin);
    scanf ("%f", &val2);

    if (val1 == val2)
        printf ("\nOs valores s�o iguais!");
    else
    {
        if (val1 > val2)
        {
            val_dif = val1 - val2;
            printf ("\nO primeiro valor � maior que o segundo, a diferen�a entre os dois � igual a %.1f", val_dif);
        }
        else
        {
            val_dif = val2 - val1;
            printf ("\nO segundo valor � maior que o primeiro, a diferen�a entre os dois � igual a %.1f", val_dif);
        }
    }



    return 0;
}
