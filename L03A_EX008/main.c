/*


Nome: Aliny Alves Dutra
CPF:
Data: 31/08/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com
Prof. Ernani Cl�udio Borges


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

    //criando vars
    char nm[50];
    float hr_trab, sal_brt, vl_inss, vl_ir, sal_liq;
    int nr_dep;

    //inicializando vars
    strcpy(nm, "");
    hr_trab = sal_brt = vl_inss = vl_ir = sal_liq = nr_dep = 0;

    //recebendo dados
    printf ("\n\nNOME DO FUNCION�RIO: ");
    fflush (stdin);
    gets(nm);

    if (strcmp(nm, "") == 0) //verificar se o campo n�o est� vazio
         printf ("\nRESPOSTA INV�LIDA!\n");
    else
    {
         printf ("\n\nN� DE HORAS TRABALHADAS: ");
         fflush (stdin);
         scanf ("%f", &hr_trab);
         if (hr_trab == 0)
            printf ("\nRESPOSTA INV�LIDA!\n");
         else
         {
             printf ("\n\nN� DE DEPENDENTES: ");
             fflush (stdin);
             scanf ("%d", &nr_dep);
             if (nr_dep < 0)
                printf ("\nRESPOSTA INV�LIDA!\n");
             else
             {
                 //calculos
                 sal_brt = (12 * hr_trab) + (40 * nr_dep);
                 vl_ir = (5.0 / 100.0) * sal_brt;
                 vl_inss = sal_brt * 8.5 / 100;
                 sal_liq = sal_brt - vl_inss - vl_ir;

                 //relatorio final
                 system ("cls");
                 printf ("\n\n      FOLHA DE PAGAMENTO");
                 printf ("\n==================================");
                 printf ("\n\n NOME DO FUNCION�RIO: %s", nm);
                 printf ("\n N� DE HORAS TRABALHADAS: %.2f", hr_trab);
                 printf ("\n N� DE DEPENDENTES: %d", nr_dep);
                 printf ("\n\n VALOR DO SAL�RIO BRUTO: %.2f", sal_brt);
                 printf ("\n VALOR DE DESCONTO INSS: %.2f", vl_inss);
                 printf ("\n VALOR DE DESCONTO IR: %.2f", vl_ir);
                 printf ("\n SAL�RIO L�QUIDO: %.2f", sal_liq);


             }

         }

    }

    printf("\n\n\n OBRIGADO POR UTILIZAR NOSSO SERVI�O, VOLTE SEMPRE! \n\n\n\n");

    return 0;
}
