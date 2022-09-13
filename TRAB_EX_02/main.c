/*


Nome: Aliny Alves Dutra
Data: 10/09/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br


Criar um menu mostrando as op��es que o usu�rio deseja executar
1 � Calculo do valor do juros
2 � Calculo do valor do capital
3 � Calculo do tempo de aplica��o
4 � Calculo da taxa juros que foi aplicado

a) Solicitar ao operador o valor do capital, da taxa de juros e do tempo a ser aplicado, validar,
processar e apresentar o valor dos juros simples encontrado.
b) Solicitar ao operador o valor dos juros, da taxa de juros e do tempo a ser aplicado, validar,
processar e apresentar o valor do capital aplicado.
c) Solicitar ao operador o valor dos juros, do capital, da taxa de juros, validar, processar e
apresentar o tempo de aplica��o encontrado.
d) Solicitar ao operador o valor dos juros, do capital, do tempo de aplica��o, validar, processar e
apresentar a taxa de juros encontrada.
e) Caso op��o diferente de 1, 2, 3 ou 4 dar mensagem de op��o invalida e finalizar o algoritmo.
f) DENTRO DE CADA op��o, fazer as VERIFICA��ES necess�rias e finalizar o algoritmo caso
tenha alguma invalida.

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

    //VAR MENU
    int opc;
    //INICIALIZANDO VAR MENU
    opc = 0;


    //VAR OPC 1
    float vl_cap, tx_juro, vl_juro, temp_apl, juro_simpl;
    //INICIALIZANDO VARS
    vl_cap = tx_juro = temp_apl = vl_juro = 0;


    //OP��ES
    printf ("             MENU DE OP��ES\n\n");
    printf ("==============================================");
    printf ("\n\n1)Calculo do valor do juros");
    printf ("\n\n2)Calculo do valor do capital");
    printf ("\n\n3)Calculo do tempo de aplica��o");
    printf ("\n\n4)Calculo da taxa de juros que foi aplicado");
    printf ("\n\nESCOLHA UMA DAS OP��ES:  ");
    fflush (stdin);
    scanf ("%d", &opc);
    system ("cls");


    if (opc < 1 || opc > 4)
        printf ("\n\nOP��O INV�LIDA");
    else
    {
        if (opc == 1)
        {
            printf ("\n\nVOC� ESCOLHEU A OP��O 1\n\n");

            //RECEBENDO DADOS
            printf ("DIGITE O VALOR DO CAPITAL: ");
            fflush(stdin);
            scanf("%f", &vl_cap);
            if (vl_cap <= 0)//VERIFICANDO VALOR
                printf ("VALOR INV�LIDO!");
            else
            {
                printf ("DIGITE A TAXA DE JUROS: ");
                fflush(stdin);
                scanf("%f", &tx_juro);
                if (tx_juro <=0)
                    printf ("VALOR INV�LIDO!");
                else
                {
                    printf ("DIGITE O TEMPO A SER APLICADO: ");
                    fflush(stdin);
                    scanf("%f", &temp_apl);
                    if (temp_apl <= 0)
                        printf ("VALOR INV�LIDO!");
                    else
                    {
                        juro_simpl = vl_cap * (tx_juro/100) * temp_apl;
                        system("cls");
                        printf ("    TAXA DE JUROS SIMPLES\n\n");
                        printf ("============================\n\n");
                        printf ("O valor do juros simples � igual a %.2f reais\n\n\n", juro_simpl);

                    }

                }

            }
        }
        else
        if (opc == 2)
        {
            printf ("\n\nVOC� ESCOLHEU A OP��O 2\n\n");

            //RECEBENDO DADOS
            printf ("DIGITE O VALOR DO JUROS: ");
            fflush(stdin);
            scanf("%f", &vl_juro);
            if (vl_juro <= 0)//VERIFICANDO VALOR
                printf ("VALOR INV�LIDO!");
            else
            {
                printf ("DIGITE A TAXA DE JUROS: ");
                fflush(stdin);
                scanf("%f", &tx_juro);
                if (tx_juro <=0)
                    printf ("VALOR INV�LIDO!");
                else
                {
                    printf ("DIGITE O TEMPO A SER APLICADO: ");
                    fflush(stdin);
                    scanf("%f", &temp_apl);
                    if (temp_apl <= 0)
                        printf ("VALOR INV�LIDO!");
                    else
                    {
                        vl_cap = vl_juro/(temp_apl * (tx_juro/100));
                        system("cls");
                        printf("            VALOR DO CAPITAL APLICADO\n\n");
                        printf("=====================================================\n\n");
                        printf("O valor do capital que foi aplicado � igual a %.2f reais\n\n\n", vl_cap);

                    }

                }

            }

        }
        else
        {
            if (opc == 3)
            {
                printf ("\n\nVOC� ESCOLHEU A OP��O 3\n\n");

                //RECEBENDO DADOS
                printf ("DIGITE O VALOR DO JUROS: ");
                fflush(stdin);
                scanf("%f", &vl_juro);
                if (vl_juro <= 0)//VERIFICANDO VALOR
                    printf ("VALOR INV�LIDO!");
                else
                {
                    printf ("DIGITE O VALOR DO CAPITAL: ");
                    fflush(stdin);
                    scanf("%f", &vl_cap);
                    if (vl_cap <=0)
                        printf ("VALOR INV�LIDO!");
                    else
                    {
                        printf ("DIGITE O VALOR DA TAXA DE JUROS: ");
                        fflush(stdin);
                        scanf("%f", &tx_juro);
                        if (tx_juro <= 0)
                            printf ("VALOR INV�LIDO!");
                        else
                        {
                            temp_apl = vl_juro/(vl_cap * (tx_juro/100));
                            system("cls");
                            printf("            TEMPO DE APLICA��O\n\n");
                            printf("=====================================================\n\n");
                            printf("O tempo em que foi aplicado � igual a %.1f meses\n\n\n", temp_apl);

                        }

                    }

                }

            }
            else
            {
                printf ("\n\nVOC� ESCOLHEU A OP��O 4\n\n");

                //RECEBENDO DADOS
                printf ("DIGITE O VALOR DO JUROS: ");
                fflush(stdin);
                scanf("%f", &vl_juro);
                if (vl_juro <= 0)//VERIFICANDO VALOR
                    printf ("VALOR INV�LIDO!");
                else
                {
                    printf ("DIGITE O VALOR DO CAPITAL: ");
                    fflush(stdin);
                    scanf("%f", &vl_cap);
                    if (vl_cap <=0)
                        printf ("VALOR INV�LIDO!");
                    else
                    {
                        printf ("DIGITE O TEMPO DE APLICA��O: ");
                        fflush(stdin);
                        scanf("%f", &temp_apl);
                        if (temp_apl <= 0)
                            printf ("VALOR INV�LIDO!");
                        else
                        {
                            tx_juro = (vl_juro/(vl_cap * temp_apl))*100;
                            system("cls");
                            printf("            TAXA DE JUROS APLICADA\n\n");
                            printf("=====================================================\n\n");
                            printf("A taxa de juros que foi aplicado � igual a %.1f%%\n\n\n", tx_juro);

                        }

                    }

                }

            }

        }
    }



    return 0;

}
