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
    float r, a;

    //inicializando vars
    r = a = 0;

    //recebendo valor
    printf ("\n\n Digite um valor: ");
    fflush (stdin);
    scanf ("%f", &r);

    //verificando
    if (r <= 0)
    {
        printf ("\n\n Valor invalido");
    }
    else
    {
        //calculando
        a = 3.14 * (r*r);
        printf ("\n\n A area é igual a %.2f", a);

    }
}
