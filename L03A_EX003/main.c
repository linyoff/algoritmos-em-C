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
    int n1, n2;

    //inicializar var
    n1 = n2 = 0;

    //recebendo valores
    printf ("\n\n Digite um numero: ");
    fflush (stdin);
    scanf ("%d", &n1);

    printf("\n\n Digite outro numero: ");
    fflush (stdin);
    scanf ("%d", &n2);

    //verificar
    if (n1 > n2)
        printf ("\n\n %d é maior que %d", n1, n2);
    else
    {
        if (n1 < n2)
            printf ("\n\n %d é menor que %d", n1, n2);
        else
            printf("\n\n os valores %d e %d são iguais", n1, n2);
    }



    return 0;
}
