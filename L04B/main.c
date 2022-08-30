/*
Nome: Aliny Dutra
1° período de Análise e Desenvolvimento de Sistemas
Prof. Ernani Cláudio Borges
Data: 29/08/2022

Resolução da lista 04B completa com menu de opções

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

    //var menu
    int opc;
    //inicializando var menu
    opc = 0;


    //vars exercicio 01
    int m;
    //inicializando vars exercicio 01
    m = 0;


    //vars exercicio 02
    int id, ano_nasc, id_dias, id_mes, id_smn;
    //inicializando vars exercicio 02
    id = ano_nasc = id_dias = id_mes = id_smn = 0;


    //vars exercicio 03
    int ano;
    //inicializando vars exercicio 03
    ano = 0;


    //opções
    printf ("\n\n1) Exercício 01");
    printf ("\n\n2) Exercício 02");
    printf ("\n\n3) Exercício 03");
    printf ("\n\n Escolha uma das opções:  ");
    fflush (stdin);
    scanf ("%d", &opc);
    system ("cls");

    //verificando escolha
    if (opc < 1 || opc > 3)
        printf ("\n\n Opção inválida");
    else
    {
        if (opc == 1)
        {
            printf ("\n\n OPÇÃO 1");

            //recebendo opção
            printf ("\n\n Digite um número entre 1 e 12: ");
            fflush (stdin);
            scanf ("%d", &m);

            //verificando valor
            if (m < 1 || m > 12)
                printf ("\n\n Opção inválida");
            else
            {
                if (m == 1)
                    printf ("\n\n O número escolhido representa o mês de JANEIRO");
                else
                {
                    if (m == 2)
                        printf ("\n\n O número escolhido representa o mês de FEVEREIRO");
                    else
                    {
                        if (m == 3)
                            printf ("\n\n O número escolhido representa o mês de MARÇO");
                        else
                        {
                            if (m == 4)
                                printf ("\n\n O número escolhido representa o mês de ABRIL");
                            else
                            {
                                if (m == 5)
                                    printf ("\n\n O número escolhido representa o mês de MAIO");
                                else
                                {
                                    if (m == 6)
                                        printf ("\n\n O número escolhido representa o mês de JUNHO");
                                    else
                                    {
                                       if (m == 7)
                                           printf ("\n\n O número escolhido representa o mês de JULHO");
                                       else
                                       {
                                           if (m == 8)
                                               printf ("\n\n O número escolhido representa o mês de AGOSTO");
                                           else
                                           {
                                               if (m == 9)
                                                   printf ("\n\n O número escolhido representa o mês de SETEMBRO");
                                               else
                                               {
                                                   if (m == 10)
                                                       printf ("\n\n O número escolhido representa o mês de OUTUBRO");
                                                   else
                                                   {
                                                       if (m == 11)
                                                           printf ("\n\n O número escolhido representa o mês de NOVEMBRO");
                                                       else
                                                           printf ("\n\n O número escolhido representa o mês de DEZEMBRO");
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
            }
        }






        else
        {
            if (opc == 2)
            {
                printf ("\n\n OPÇÃO 2");


                 //recebendo idade
                 printf ("\n\n Digite sua idade: ");
                 fflush (stdin);
                 scanf ("%d", &id);

                 //verificando idade
                 if (id <= 0 || id > 120)
                     printf ("\n\n Idade inválida!");
                 else
                 {

                 }

                 //ano que a pessoas nasceu
                 ano_nasc = 2022 - id;
                 id_dias = id * 365;
                 id_mes = id * 12;
                 id_smn = id_dias / 7;


                 //finalizando
                 printf ("\n\n Você nasceu no ano de %d \n\n", ano);
                 printf ("\n\n Sua idade em dias é %d \n\n", id_dias);
                 printf ("\n\n Sua idade em meses é %d \n\n", id_mes);
                 printf ("\n\n Sua idade em semanas é %d \n\n", id_smn);




            }
            else
            {
                printf ("\n\n OPÇÃO 3");

                //recebendo ano
                printf ("\n\n Digite um ano maior que 1900 e menor que 2099: ");
                fflush (stdin);
                scanf ("%d", &ano);

                if (ano < 1900 || ano > 2099)
                    printf ("\n\n Ano inválido!!\n\n");
                else
                {
                    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
                    printf ("\n\n Esse ano é BISSEXTO! \n\n");
                    else
                    printf ("\n\n Esse ano não é bissexto \n\n");
                }



            }
        }
    }



    return 0;
}
