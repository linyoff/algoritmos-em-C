/*

Nome: Aliny Dutra
1� per�odo de An�lise e Desenvolvimento de Sistemas
Prof. Ernani Cl�udio Borges
Data: 05/09/2022

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
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int n;

    //inicializando vars
    n = 0;

    //recebendo dados
    printf ("\n\n Digite um n�mero: ");
    fflush(stdin);
    scanf ("%d", &n);

    //validando
    while (n <= 0)
    {
        printf ("N�MERO INV�LIDO!\n");
        printf ("Digite outro: ");
        fflush (stdin);
        scanf ("%d", &n);
    }

     while (n >=0 )
    {
         if (n > 0)
           printf (" %d, ", n);
        else
            printf (" %d.\n ", n);
        n--;
    }

    return 0;
}
