/*

Nome: Aliny Dutra
1° período de Análise e Desenvolvimento de Sistemas
Prof. Ernani Cláudio Borges
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
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int n, cont;

    //inicializando vars
    n = 0;
    cont = 1;

    //recebendo dados
    printf ("\n\n Digite um número: ");
    fflush(stdin);
    scanf ("%d", &n);

    //validando
    while (n <= 0)
    {
        printf ("NÚMERO INVÁLIDO!\n");
        printf ("Digite outro: ");
        fflush (stdin);
        scanf ("%d", &n);
    }


     while (cont <= n)
    {
        if (cont < n)
           printf (" %d, ", cont);
        else
            printf (" %d.\n ", cont);
        cont = cont * 3;
    }

    return 0;
}
