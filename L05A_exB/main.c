/*

Nome: Aliny Dutra
1� per�odo de An�lise e Desenvolvimento de Sistemas
Prof. Ernani Cl�udio Borges
Data: 01/09/2022

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

int main ()
{

    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int cont;

    //inicializando vars
    cont = 15;

    while (cont >= 0)
    {
        if (cont > 0)
            printf (" %d, ", cont);
        else
           printf (" %d.\n", cont);
        cont = cont - 1;
    }


    return 0;
}
