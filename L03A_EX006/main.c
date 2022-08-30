/*
Nome: Aliny Alves Dutra
1� per�odo de An�lise e Desenvolvimento de Sistemas
Prof. Ernani Cl�udio Borges
Data: 29/08/2022

L03A_EX006 - Receber o sexo e altura de uma pessoa, sendo << m>> para o sexo masculino ou
<< f >> para o sexo feminino, caso inv�lido finalizar o programa, sen�o fazer o c�lculo do
peso ideal atrav�s da f�rmula:
Para sexo masculino: peso = (72.7 * alt) � 58
Para o sexo feminino: peso = (62.1 * alt) � 44.77
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
    printf ("\n\nDigite a sua altura[valor com v�rgula]:");
    fflush (stdin);
    scanf ("%f", &alt);
    printf ("\n\nDigite a inicial do seu sexo[F para feminino e M para masculino]:");
    fflush (stdin);
    scanf ("%c", &sx);


    //verifica��o
    if (strcmp(sx, "f") == 0 || strcmp(sx, "F") == 0 || strcmp(sx, "m") == 0 || strcmp(sx, "M") == 0)
    {
        if (strcmp(sx, "f") == 0 || strcmp(sx, "F") == 0)
        {
            //calculo peso feminino
            peso = (62.1 * alt) - 44.77;
            printf("\nO peso ideal para sua altura � %0.2f\n", peso);
        }
        else
        {
            //calculo peso masculino
            peso = (72.7 * alt) - 58;
            printf("\nO peso ideal para sua altura � %.2f\n", peso);
        }
    }
    else
    {
        printf("\nSexo inv�lido\n");
    }



    return 0;
}
