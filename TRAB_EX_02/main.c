/*


Nome: Aliny Alves Dutra
Data: 10/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br


Criar um menu mostrando as opções que o usuário deseja executar
1 – Calculo do valor do juros
2 – Calculo do valor do capital
3 – Calculo do tempo de aplicação
4 – Calculo da taxa juros que foi aplicado

a) Solicitar ao operador o valor do capital, da taxa de juros e do tempo a ser aplicado, validar,
processar e apresentar o valor dos juros simples encontrado.
b) Solicitar ao operador o valor dos juros, da taxa de juros e do tempo a ser aplicado, validar,
processar e apresentar o valor do capital aplicado.
c) Solicitar ao operador o valor dos juros, do capital, da taxa de juros, validar, processar e
apresentar o tempo de aplicação encontrado.
d) Solicitar ao operador o valor dos juros, do capital, do tempo de aplicação, validar, processar e
apresentar a taxa de juros encontrada.
e) Caso opção diferente de 1, 2, 3 ou 4 dar mensagem de opção invalida e finalizar o algoritmo.
f) DENTRO DE CADA opção, fazer as VERIFICAÇÕES necessárias e finalizar o algoritmo caso
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
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //VAR MENU
    int opc;
    //INICIALIZANDO VAR MENU
    opc = 0;


    //VAR OPC 1
    float vl_cap, tx_juro, vl_juro, temp_apl, juro_simpl;
    //INICIALIZANDO VARS
    vl_cap = tx_juro = temp_apl = vl_juro = 0;


    //OPÇÕES
    printf ("             MENU DE OPÇÕES\n\n");
    printf ("==============================================");
    printf ("\n\n1)Calculo do valor do juros");
    printf ("\n\n2)Calculo do valor do capital");
    printf ("\n\n3)Calculo do tempo de aplicação");
    printf ("\n\n4)Calculo da taxa de juros que foi aplicado");
    printf ("\n\nESCOLHA UMA DAS OPÇÕES:  ");
    fflush (stdin);
    scanf ("%d", &opc);
    system ("cls");


    if (opc < 1 || opc > 4)
        printf ("\n\nOPÇÃO INVÁLIDA");
    else
    {
        if (opc == 1)
        {
            printf ("\n\nVOCÊ ESCOLHEU A OPÇÃO 1\n\n");

            //RECEBENDO DADOS
            printf ("DIGITE O VALOR DO CAPITAL: ");
            fflush(stdin);
            scanf("%f", &vl_cap);
            if (vl_cap <= 0)//VERIFICANDO VALOR
                printf ("VALOR INVÁLIDO!");
            else
            {
                printf ("DIGITE A TAXA DE JUROS: ");
                fflush(stdin);
                scanf("%f", &tx_juro);
                if (tx_juro <=0)
                    printf ("VALOR INVÁLIDO!");
                else
                {
                    printf ("DIGITE O TEMPO A SER APLICADO: ");
                    fflush(stdin);
                    scanf("%f", &temp_apl);
                    if (temp_apl <= 0)
                        printf ("VALOR INVÁLIDO!");
                    else
                    {
                        juro_simpl = vl_cap * (tx_juro/100) * temp_apl;
                        system("cls");
                        printf ("    TAXA DE JUROS SIMPLES\n\n");
                        printf ("============================\n\n");
                        printf ("O valor do juros simples é igual a %.2f reais\n\n\n", juro_simpl);

                    }

                }

            }
        }
        else
        if (opc == 2)
        {
            printf ("\n\nVOCÊ ESCOLHEU A OPÇÃO 2\n\n");

            //RECEBENDO DADOS
            printf ("DIGITE O VALOR DO JUROS: ");
            fflush(stdin);
            scanf("%f", &vl_juro);
            if (vl_juro <= 0)//VERIFICANDO VALOR
                printf ("VALOR INVÁLIDO!");
            else
            {
                printf ("DIGITE A TAXA DE JUROS: ");
                fflush(stdin);
                scanf("%f", &tx_juro);
                if (tx_juro <=0)
                    printf ("VALOR INVÁLIDO!");
                else
                {
                    printf ("DIGITE O TEMPO A SER APLICADO: ");
                    fflush(stdin);
                    scanf("%f", &temp_apl);
                    if (temp_apl <= 0)
                        printf ("VALOR INVÁLIDO!");
                    else
                    {
                        vl_cap = vl_juro/(temp_apl * (tx_juro/100));
                        system("cls");
                        printf("            VALOR DO CAPITAL APLICADO\n\n");
                        printf("=====================================================\n\n");
                        printf("O valor do capital que foi aplicado é igual a %.2f reais\n\n\n", vl_cap);

                    }

                }

            }

        }
        else
        {
            if (opc == 3)
            {
                printf ("\n\nVOCÊ ESCOLHEU A OPÇÃO 3\n\n");

                //RECEBENDO DADOS
                printf ("DIGITE O VALOR DO JUROS: ");
                fflush(stdin);
                scanf("%f", &vl_juro);
                if (vl_juro <= 0)//VERIFICANDO VALOR
                    printf ("VALOR INVÁLIDO!");
                else
                {
                    printf ("DIGITE O VALOR DO CAPITAL: ");
                    fflush(stdin);
                    scanf("%f", &vl_cap);
                    if (vl_cap <=0)
                        printf ("VALOR INVÁLIDO!");
                    else
                    {
                        printf ("DIGITE O VALOR DA TAXA DE JUROS: ");
                        fflush(stdin);
                        scanf("%f", &tx_juro);
                        if (tx_juro <= 0)
                            printf ("VALOR INVÁLIDO!");
                        else
                        {
                            temp_apl = vl_juro/(vl_cap * (tx_juro/100));
                            system("cls");
                            printf("            TEMPO DE APLICAÇÃO\n\n");
                            printf("=====================================================\n\n");
                            printf("O tempo em que foi aplicado é igual a %.1f meses\n\n\n", temp_apl);

                        }

                    }

                }

            }
            else
            {
                printf ("\n\nVOCÊ ESCOLHEU A OPÇÃO 4\n\n");

                //RECEBENDO DADOS
                printf ("DIGITE O VALOR DO JUROS: ");
                fflush(stdin);
                scanf("%f", &vl_juro);
                if (vl_juro <= 0)//VERIFICANDO VALOR
                    printf ("VALOR INVÁLIDO!");
                else
                {
                    printf ("DIGITE O VALOR DO CAPITAL: ");
                    fflush(stdin);
                    scanf("%f", &vl_cap);
                    if (vl_cap <=0)
                        printf ("VALOR INVÁLIDO!");
                    else
                    {
                        printf ("DIGITE O TEMPO DE APLICAÇÃO: ");
                        fflush(stdin);
                        scanf("%f", &temp_apl);
                        if (temp_apl <= 0)
                            printf ("VALOR INVÁLIDO!");
                        else
                        {
                            tx_juro = (vl_juro/(vl_cap * temp_apl))*100;
                            system("cls");
                            printf("            TAXA DE JUROS APLICADA\n\n");
                            printf("=====================================================\n\n");
                            printf("A taxa de juros que foi aplicado é igual a %.1f%%\n\n\n", tx_juro);

                        }

                    }

                }

            }

        }
    }



    return 0;

}
