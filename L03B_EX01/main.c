/*
Nome: Aliny Alves Dutra
1º período de Análise e Desenvolvimento de Sistemas
Prof. Ernani Cláudio Borges
Data: 29/08/2022


L03B_ex01 - Ler dois valores numéricos e processar e apresentar:
a) O valor da diferença do maior pelo menor.
b) caso sejam iguais, uma mensagem no vídeo;

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
    //CONFIGURAR ACENTUAÇÃO
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
        printf ("\nOs valores são iguais!");
    else
    {
        if (val1 > val2)
        {
            val_dif = val1 - val2;
            printf ("\nO primeiro valor é maior que o segundo, a diferença entre os dois é igual a %.1f", val_dif);
        }
        else
        {
            val_dif = val2 - val1;
            printf ("\nO segundo valor é maior que o primeiro, a diferença entre os dois é igual a %.1f", val_dif);
        }
    }



    return 0;
}
