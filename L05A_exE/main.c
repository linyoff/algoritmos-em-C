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
int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int cont, n;

    //inicializando vars
    cont = 1;
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

     while (cont <= n)
    {
        if (cont < n)
            printf (" %d, ", cont);
        else
           printf (" %d.\n", cont);
        cont = cont + 2;
    }

    return 0;
}
