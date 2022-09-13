/*


Nome: Aliny Alves Dutra
Data: 07/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Solicitar ao operador o nome (não pode ser vazio), o sexo (<< m >> - masculino ou << f >> -
feminino) e as notas das provas parciais de um aluno (P1, P2, P3, P4 – devem estar no intervalo de 0
a 10), VERIFICAR a cada entrada, e caso opção invalida finalizar o algoritmo, ou seja, só receber a
próxima informação caso esta entrada atual for válida. Considerando a média aritmética:
a) se a média for inferior a 4, apresente como resultado “ALUNO REPROVADO”;
b) se a média for superior ou igual a 6, apresente como resultado “ALUNO APROVADO”;
c) se a média for entre 4 e 5,9, solicite os pontos obtidos na P5, validando-os, reprocesse ((Media
Anterior + P5) / 2) e:
c.1) se a média for inferior a 4, apresente como resultado “REPROVADO NA P5”;
c.2) se a média for superior ou igual a 6, apresente “APROVADO NA P5”;
c.3) se a média for entre 4 e 5,9, solicite os pontos obtidos na segunda época, reprocesse e:
 c.3.1) se a média for inferior a 6, apresente “REPROVADO NA SEG ÉPOCA”;
 c.3.2) se a média for superior ou igual a 6, apresente “APROVADO NA SEG ÉPOCA”;



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
    //VERIFICAÇÃO NOME
    if (strcmp(nm, "") == 0)
        printf("\nNOME INVÁLIDO!\n");
    else
    {
        printf ("\nDIGITE A INICIAL DO SEXO DO ALUNO: ");
        fflush(stdin);
        scanf ("%c", &sx);
        //VERIFICAÇÃO SEXO
        if(sx != 'm' && sx != 'M' && sx != 'f' && sx != 'F')
            printf("\nVALOR INVÁLIDO!\n");
        else
        {
            printf ("\nDIGITE A NOTA DA P1: ");
            fflush (stdin);
            scanf ("%f", &p1);
            if (p1 < 0 || p1 > 10) //VERIFICANDO P1
                printf("\nNOTA INVÁLIDA!\n");
            else
            {
                printf ("\nDIGITE A NOTA DA P2: ");
                fflush (stdin);
                scanf("%f", &p2);
                if (p2 < 0 || p2 > 10) //VERIFICANDO P2
                    printf("\nNOTA INVÁLIDA!\n");
                else
                {
                    printf ("\nDIGITE A NOTA DA P3: ");
                    fflush (stdin);
                    scanf("%f", &p3);
                    if (p3 < 0 || p3 > 10) //VERIFICANDO P3
                        printf("\nNOTA INVÁLIDA!\n");
                    else
                    {
                        printf ("\nDIGITE A NOTA DA P4: ");
                        fflush (stdin);
                        scanf("%f", &p4);
                        if (p4 < 0 || p4 > 10) //VERIFICANDO P4
                            printf("\nNOTA INVÁLIDA!\n");
                        else
                        {
                            //CALCULO MEDIA
                            md = (p1+p2+p3+p4)/4;
                            //CONDIÇÕES
                            if (md < 4)
                            {
                                system ("cls");
                                printf ("         RELATÓRIO FINAL\n");
                                printf ("===================================\n\n");
                                printf ("A MÉDIA DE %s É IGUAL A %.1f\n", nm, md);
                                printf ("    situação: REPROVADO\n\n");
                            }
                            else
                                if (md >= 6)
                                {
                                   system ("cls");
                                   printf ("         RELATÓRIO FINAL\n");
                                   printf ("===================================\n\n");
                                   printf ("A MÉDIA DE %s É IGUAL A %.1f\n", nm, md);
                                   printf ("    situação: APROVADO\n\n");
                                }
                                else

                                    if (md >= 4 || md < 6)
                                    {
                                       printf ("\nDIGITE A NOTA DA P5: ");
                                       fflush (stdin);
                                       scanf("%f", &p5);
                                       if (p5 < 0 || p5 > 10) //VERIFICANDO P5
                                           printf("\nNOTA INVÁLIDA!\n");
                                       else
                                           //CALCULO MEDIA COM A P5
                                           md = (md + p5)/2;
                                        //CONDIÇÕES P5
                                        if (md <4)
                                        {
                                           system ("cls");
                                           printf ("         RELATÓRIO FINAL\n");
                                           printf ("===================================\n\n");
                                           printf ("A MÉDIA DE %s É IGUAL A %.1f\n", nm, md);
                                           printf ("  situação: REPROVADO NA P5\n\n");
                                        }
                                        else
                                           if (md >= 6)
                                           {
                                               system ("cls");
                                               printf ("         RELATÓRIO FINAL\n");
                                               printf ("===================================\n\n");
                                               printf ("A MÉDIA DE %s É IGUAL A %.1f\n", nm, md);
                                               printf ("  situação: REPROVADO NA P5\n\n");
                                           }
                                           else
                                               if (md >= 4 || md < 6)
                                               {
                                                   printf ("\nDIGITE A NOTA OBTIDA NA SEGUNDA ÉPOCA: ");
                                                   fflush (stdin);
                                                   scanf("%f", &seg_epc);
                                                   if (seg_epc < 0 || seg_epc > 10)//VERIFICANDO
                                                       printf("\nNOTA INVÁLIDA!\n");
                                                   else
                                                   {
                                                       //CALCULO SEGUNDA EPOCA
                                                       md = (md + seg_epc)/2;
                                                       if (md < 6)
                                                       {
                                                           system ("cls");
                                                           printf ("         RELATÓRIO FINAL\n");
                                                           printf ("===================================\n\n");
                                                           printf ("A MÉDIA DE %s É IGUAL A %.1f\n", nm, md);
                                                           printf ("  situação: REPROVADO NA SEGUNDA ÉPOCA\n\n");
                                                        }
                                                        else
                                                          if (md >= 6)
                                                          {
                                                              system ("cls");
                                                              printf ("         RELATÓRIO FINAL\n");
                                                              printf ("===================================\n\n");
                                                              printf ("A MÉDIA DE %s É IGUAL A %.1f\n", nm, md);
                                                              printf ("  situação: APROVADO NA SEGUNDA ÉPOCA\n\n");
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
