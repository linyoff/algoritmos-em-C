/*

Nome: Aliny Dutra
1° período de Análise e Desenvolvimento de Sistemas
Prof. Ernani Cláudio Borges
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
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //criando vars
    int n1, n2;

    //inicializando vars
    n1, n2 = 0;

    //recebendo dados
    printf ("\n\n Digite um número: ");
    fflush(stdin);
    scanf ("%d", &n1);

    //validando
    while (n1 <= 0)
    {
        printf ("NÚMERO INVÁLIDO!\n");
        printf ("Digite outro: ");
        fflush (stdin);
        scanf ("%d", &n1);
    }
    n2 = -n1;

     while (n1 >= n2)
    {
        if (n1 != n2)
           printf (" %d, ", n1);
        else
            printf (" %d.\n ", n1);
        n1 = n1 - 1;
    }

    return 0;
}
