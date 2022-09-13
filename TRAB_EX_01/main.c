/*


Nome: Aliny Alves Dutra
Data: 07/09/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Solicitar ao operador o nome (n�o pode ser vazio), o sexo (<< m >> - masculino ou << f >> -
feminino) e as notas das provas parciais de um aluno (P1, P2, P3, P4 � devem estar no intervalo de 0
a 10), VERIFICAR a cada entrada, e caso op��o invalida finalizar o algoritmo, ou seja, s� receber a
pr�xima informa��o caso esta entrada atual for v�lida. Considerando a m�dia aritm�tica:
a) se a m�dia for inferior a 4, apresente como resultado �ALUNO REPROVADO�;
b) se a m�dia for superior ou igual a 6, apresente como resultado �ALUNO APROVADO�;
c) se a m�dia for entre 4 e 5,9, solicite os pontos obtidos na P5, validando-os, reprocesse ((Media
Anterior + P5) / 2) e:
c.1) se a m�dia for inferior a 4, apresente como resultado �REPROVADO NA P5�;
c.2) se a m�dia for superior ou igual a 6, apresente �APROVADO NA P5�;
c.3) se a m�dia for entre 4 e 5,9, solicite os pontos obtidos na segunda �poca, reprocesse e:
 c.3.1) se a m�dia for inferior a 6, apresente �REPROVADO NA SEG �POCA�;
 c.3.2) se a m�dia for superior ou igual a 6, apresente �APROVADO NA SEG �POCA�;



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
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    //CRIANDO VARS
    char nm[50], sx;
    float p1, p2, p3, p4, p5, md, seg_epc;

    //INICIALIZANDO VARS
    sx = "";
    p1 = p2 = p3 = p4 = p5 = md = seg_epc = 0;

    //RECEBENDO DADOS
    printf ("\nDIGITE O NOME DO ALUNO: ");
    fflush(stdin);
    gets(nm);
    //VERIFICA��O NOME
    if (strcmp(nm, "") == 0)
        printf("\nNOME INV�LIDO!\n");
    else
    {
        printf ("\nDIGITE A INICIAL DO SEXO DO ALUNO: ");
        fflush(stdin);
        scanf ("%c", &sx);
        //VERIFICA��O SEXO
        if(sx != 'm' && sx != 'M' && sx != 'f' && sx != 'F')
            printf("\nVALOR INV�LIDO!\n");
        else
        {
            printf ("\nDIGITE A NOTA DA P1: ");
            fflush (stdin);
            scanf ("%f", &p1);
            if (p1 < 0 || p1 > 10) //VERIFICANDO P1
                printf("\nNOTA INV�LIDA!\n");
            else
            {
                printf ("\nDIGITE A NOTA DA P2: ");
                fflush (stdin);
                scanf("%f", &p2);
                if (p2 < 0 || p2 > 10) //VERIFICANDO P2
                    printf("\nNOTA INV�LIDA!\n");
                else
                {
                    printf ("\nDIGITE A NOTA DA P3: ");
                    fflush (stdin);
                    scanf("%f", &p3);
                    if (p3 < 0 || p3 > 10) //VERIFICANDO P3
                        printf("\nNOTA INV�LIDA!\n");
                    else
                    {
                        printf ("\nDIGITE A NOTA DA P4: ");
                        fflush (stdin);
                        scanf("%f", &p4);
                        if (p4 < 0 || p4 > 10) //VERIFICANDO P4
                            printf("\nNOTA INV�LIDA!\n");
                        else
                        {
                            //CALCULO MEDIA
                            md = (p1+p2+p3+p4)/4;
                            //CONDI��ES
                            if (md < 4)
                            {
                                system ("cls");
                                printf ("         RELAT�RIO FINAL\n");
                                printf ("===================================\n\n");
                                printf ("A M�DIA DE %s � IGUAL A %.1f\n", nm, md);
                                printf ("    situa��o: REPROVADO\n\n");
                            }
                            else
                                if (md >= 6)
                                {
                                   system ("cls");
                                   printf ("         RELAT�RIO FINAL\n");
                                   printf ("===================================\n\n");
                                   printf ("A M�DIA DE %s � IGUAL A %.1f\n", nm, md);
                                   printf ("    situa��o: APROVADO\n\n");
                                }
                                else

                                    if (md >= 4 || md < 6)
                                    {
                                       printf ("\nDIGITE A NOTA DA P5: ");
                                       fflush (stdin);
                                       scanf("%f", &p5);
                                       if (p5 < 0 || p5 > 10) //VERIFICANDO P5
                                           printf("\nNOTA INV�LIDA!\n");
                                       else
                                           //CALCULO MEDIA COM A P5
                                           md = (md + p5)/2;
                                        //CONDI��ES P5
                                        if (md <4)
                                        {
                                           system ("cls");
                                           printf ("         RELAT�RIO FINAL\n");
                                           printf ("===================================\n\n");
                                           printf ("A M�DIA DE %s � IGUAL A %.1f\n", nm, md);
                                           printf ("  situa��o: REPROVADO NA P5\n\n");
                                        }
                                        else
                                           if (md >= 6)
                                           {
                                               system ("cls");
                                               printf ("         RELAT�RIO FINAL\n");
                                               printf ("===================================\n\n");
                                               printf ("A M�DIA DE %s � IGUAL A %.1f\n", nm, md);
                                               printf ("  situa��o: REPROVADO NA P5\n\n");
                                           }
                                           else
                                               if (md >= 4 || md < 6)
                                               {
                                                   printf ("\nDIGITE A NOTA OBTIDA NA SEGUNDA �POCA: ");
                                                   fflush (stdin);
                                                   scanf("%f", &seg_epc);
                                                   if (seg_epc < 0 || seg_epc > 10)//VERIFICANDO
                                                       printf("\nNOTA INV�LIDA!\n");
                                                   else
                                                   {
                                                       //CALCULO SEGUNDA EPOCA
                                                       md = (md + seg_epc)/2;
                                                       if (md < 6)
                                                       {
                                                           system ("cls");
                                                           printf ("         RELAT�RIO FINAL\n");
                                                           printf ("===================================\n\n");
                                                           printf ("A M�DIA DE %s � IGUAL A %.1f\n", nm, md);
                                                           printf ("  situa��o: REPROVADO NA SEGUNDA �POCA\n\n");
                                                        }
                                                        else
                                                          if (md >= 6)
                                                          {
                                                              system ("cls");
                                                              printf ("         RELAT�RIO FINAL\n");
                                                              printf ("===================================\n\n");
                                                              printf ("A M�DIA DE %s � IGUAL A %.1f\n", nm, md);
                                                              printf ("  situa��o: APROVADO NA SEGUNDA �POCA\n\n");
                                                          }




                                                   }

                                               }

                                    }
                            }

                        }
                    }
                }
            }
        }





    return 0;

}
