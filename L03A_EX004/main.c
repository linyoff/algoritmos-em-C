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
    float nt1, nt2, nt3, nt4, md;
    char nm[50];

    //inicializando vars
    nt1 = nt2 = nt3 = nt4 = md = 0;
    strcpy (nm, "");

    //recebendo valores
    printf ("\n\n Nome do aluno: ");
    fflush (stdin);
    scanf ("%s", &nm);

    printf ("\n\n Primeira nota: ");
    fflush (stdin);
    scanf("%f", &nt1);

    if (nt1 >= 0 && nt1 <= 10) //verificando nt1
    {
        printf ("\n\n Segunda nota: "); //recebendo segunda nota
        fflush (stdin);
        scanf("%f", &nt2);
        if (nt2 >= 0 && nt2 <= 10)
        {
            printf ("\n\n Terceira nota: "); //recebendo terceira nota
            fflush (stdin);
            scanf("%f", &nt3);
            if (nt3 >= 0 && nt3 <= 10) //verificando nt3
            {
                printf ("\n\n Quarta nota: "); //recebendo quarta nota
                fflush (stdin);
                scanf("%f", &nt4);
                if (nt4 >= 0 && nt4 <= 10) //verificando nt4
                {
                    md = (nt1 + nt2 + nt3 + nt4) / 4;
                    printf ("\n\n A nota media de %s e igual a %.1f", nm, md);

                    if (md >= 6)
                    {
                        printf ("\n\n situacao: APROVADO");
                    }
                    else
                    {
                        if (md >=4 && md <6)
                        {
                            printf ("\n\n situacao: RECUPERACAO");
                        }
                        else
                        {
                             printf ("\n\n situacao: REPROVADO");
                        }
                    }

                }
                else
                {
                    printf ("\n\nNota invalida");

                }
            }
            else
            {
                printf ("\n\nNota invalida");
            }
        }
        else
        {
            printf ("\n\nNota invalida");
        }
    }
    else
    {
        printf ("\n\nNota invalida");
    }

    //exibindo valor da media

    //verificando aprovacao



    return 0;
}
