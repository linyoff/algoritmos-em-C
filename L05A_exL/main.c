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
    int n, cont, seq;

    //inicializando vars
    n = 0;
    cont = 1;
    seq = 5;

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


     while (seq <= n && seq >= 0)
    {
        if (seq != (n-1))
            if (cont <= 3)
            {
                printf ("%d ", seq);
                cont++;
                seq--;
            }
            else
            {
                seq = ++seq * 2;
                cont = 1;
            }
    }

    return 0;
}
