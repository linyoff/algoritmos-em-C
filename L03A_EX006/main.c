/*
Nome: Aliny Alves Dutra
1º período de Análise e Desenvolvimento de Sistemas
Prof. Ernani Cláudio Borges
Data: 29/08/2022

L03A_EX006 - Receber o sexo e altura de uma pessoa, sendo << m>> para o sexo masculino ou
<< f >> para o sexo feminino, caso inválido finalizar o programa, senão fazer o cálculo do
peso ideal através da fórmula:
Para sexo masculino: peso = (72.7 * alt) – 58
Para o sexo feminino: peso = (62.1 * alt) – 44.77
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
    char sx[2], f[2], F[2], m[2], M[2];
    float peso, alt;

    //inicializar vars
    peso = alt = 0;
    strcpy (sx, "");
    strcpy (f, "f");
    strcpy (F, "F");
    strcpy (m, "m");
    strcpy (M, "M");


    //recebendo valores
    printf ("\n\nDigite a sua altura[valor com vírgula]:");
    fflush (stdin);
    scanf ("%f", &alt);
    printf ("\n\nDigite a inicial do seu sexo[F para feminino e M para masculino]:");
    fflush (stdin);
    scanf ("%c", &sx);


    //verificação
    if (strcmp(sx, "f") == 0 || strcmp(sx, "F") == 0 || strcmp(sx, "m") == 0 || strcmp(sx, "M") == 0)
    {
        if (strcmp(sx, "f") == 0 || strcmp(sx, "F") == 0)
        {
            //calculo peso feminino
            peso = (62.1 * alt) - 44.77;
            printf("\nO peso ideal para sua altura é %0.2f\n", peso);
        }
        else
        {
            //calculo peso masculino
            peso = (72.7 * alt) - 58;
            printf("\nO peso ideal para sua altura é %.2f\n", peso);
        }
    }
    else
    {
        printf("\nSexo inválido\n");
    }



    return 0;
}
