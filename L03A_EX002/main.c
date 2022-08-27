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

    //criar vars
    float v1, v2, h;

    //inicialiar vars
    v1 = v2 = h = 0;

    //recebendo valores
    printf ("\n\n Digite um valor : ");
    fflush(stdin);
    scanf ("%f", &v1);

    if (v1 <= 0 ) //verificando valores
       printf("\n\n Estes valores não formam um retangulo");
    else
    {
        printf ("\n\n Digite outro valor : ");
        fflush(stdin);
        scanf ("%f", &v2);
    }
        if (v2 <= 0)
            printf("\n\n Estes valores não formam um retangulo");
        else
        {
            //calculo
            h = v1 * v2;
            printf ("\n\n A area desse retangulo é igual a %.1f ", h);
        }


    return 0;
}
