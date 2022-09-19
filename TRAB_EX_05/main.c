/*


Nome: Aliny Alves Dutra
Data: 12/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Uma empresa estuda a possibilidade de se fazer um reajuste salarial considerando os seguintes
critérios:
 50% para aqueles que ganham menos de R$ 3.000,00;
 27% para aqueles que ganham entre R$ 3.000,00 e R$ 8.700,00 (inclusive); e,
 14,5% para aqueles que ganham acima de R$ 8.700,00.
Elabore um algoritmo que solicite ao operador o código do funcionário (de 1 a 9999) e o valor do salário
(deve ser maior ou igual a R$ 1.212,00), no final apresente os seguintes dados:
a) somatório dos salários antes do reajuste;
b) somatório dos salários após o reajuste;
c) percentual do reajuste total;
d) quantidade de funcionários em cada faixa;
e) valor total a ser acrescido em cada faixa;
f) percentual de incidência salarial de cada faixa em relação ao total geral da folha reajustada;
g) média salarial em cada faixa;
h) média salarial geral.


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
    int cod_func, tot_func, qtd_func50, qtd_func27, qtd_func14;
    float med, sal_func, tot_sal_reaj, tot_sal, sal_reaj, sal_reaj50, sal_reaj27, sal_reaj14;
    float tot_50, tot_27, tot_14, med_50, med_27, med_14, perc_reaj, perc_50, perc_27, perc_14;

    //INICIALIZANDO VARS
    cod_func=1;
    tot_func=qtd_func50=qtd_func27=qtd_func14=0;
    med=sal_func=tot_sal_reaj=tot_sal=sal_reaj=sal_reaj50=sal_reaj27=sal_reaj14=0;
    tot_50=tot_27=tot_14=med_50=med_27=med_14=perc_reaj=perc_50=perc_27=perc_14=0;

    //RECEBENDO DADOS
    printf("\n    REAJUSTE SALARIAL\n\n");
    printf("==============================\n");
    while (cod_func !=0)
    {
        printf("\n\nDigite o codigo do funcionario ou 0 para encerrar: ");
        fflush(stdin);
        scanf("%d", &cod_func);
        while (cod_func < 0 || cod_func > 9999)//VALIDANDO CODIGO
        {
            printf("\n\nCODIGO INVALIDO!\n\n");
            printf("Digite novamente o codigo do funcionario ou 0 para encerrar: ");
            fflush(stdin);
            scanf("%d", &cod_func);
        }
        tot_func++;//QUANTIDADE DE FUNCIONARIOS
        if (cod_func != 0)
        {
            printf("Digite o salario do funcionario: ");
            fflush(stdin);
            scanf("%f", &sal_func);
            system("cls");
            while (sal_func < 1212)
            {
                printf("\nSALARIO INVALIDO!\n\n");
                printf("Digite novamente o salario do funcionario: ");
                fflush(stdin);
                scanf("%f", &sal_func);
                system("cls");
            }
            //SOMA DOS SALARIOS
            tot_sal = tot_sal + sal_func;
            if (sal_func < 3000)
            {
                qtd_func50++;
                sal_reaj50 = (sal_func/100)*50;
                sal_reaj = sal_func + sal_reaj50;
                tot_sal_reaj = tot_sal_reaj + sal_reaj;
                tot_50 = tot_50 + sal_reaj50;
                med_50 = med_50 + sal_reaj;

            }
            else
                if (sal_func >= 3000 || sal_func <= 8700)
                {
                    qtd_func27++;
                    sal_reaj27 = (sal_func/100)*27;
                    sal_reaj = sal_func + sal_reaj27;
                    tot_sal_reaj = tot_sal_reaj + sal_reaj;
                    tot_27 = tot_27 + sal_reaj27;
                    med_27 = med_27 + sal_reaj;

                }
                else
                    if (sal_func > 8700)
                    {
                        qtd_func14++;
                        sal_reaj14 = (sal_func/100)*14,5;
                        sal_reaj = sal_func + sal_reaj14;
                        tot_sal_reaj = tot_sal_reaj + sal_reaj;
                        tot_14 = tot_14 + sal_reaj14;
                        med_14 = med_14 + sal_reaj;
                    }

        }
    }

    perc_reaj = ((100 * tot_sal_reaj)/tot_sal)-100;
    perc_50 = (100* med_50)/tot_sal_reaj;
    perc_27 = (100* med_27)/tot_sal_reaj;
    perc_14 = (100* med_14)/tot_sal_reaj;
    med_50 = med_50/qtd_func50;
    med_27 = med_27/qtd_func27;
    med_14 = med_14/qtd_func14;
    med = (med_50 + med_27 + med_14)/tot_func;

    system("cls");
    printf("\n                 RELATORIO FINAL\n");
    printf("=========================================================\n\n");
    printf("TOTAL SALARIOS ANTES DO REAJUSTE: R$%.2f", tot_sal);
    printf("\nTOTAL SALARIOS DEPOIS DO REAJUSTE: R$%.2f\n", tot_sal_reaj);
    printf("\nPERCENTUAL DE REAJUSTE: %.0f%%\n", perc_reaj);

    printf("\n\nFUNCIONARIOS COM SALARIO MENOR QUE R$3000: %d\n", qtd_func50);
    printf("\nFUNCIONARIOS COM SALARIO ENTRE R$3000 E R$8700: %d\n", qtd_func27);
    printf("\nFUNCIONARIOS COM SALARIO MAIOR QUE R$8700: %d\n", qtd_func14);

    printf("\n\nTOTAL AUMENTO SALARIO MENOR QUE R$3000: %.2f", tot_50);
    printf("\nTOTAL AUMENTO SALARIO ENTRE R$3000 E R$8700: %.2f", tot_27);
    printf("\nTOTAL AUMENTO SALARIO MAIOR QUE R$8700: %.2f", tot_14);

    printf("\n\nPERCENTUAL DE INCIDENCIA SALARIAL DE CADA FAIXA");
    printf("\nSALARIO MENOR QUE R$3000: %.2f%%", perc_50);
    printf("\nSALARIO ENTRE R$3000 a R$8700: %.2f%%", perc_27);
    printf("\nSALARIO MAIOR QUE R$8700: %.2f%%\n", perc_14);


    printf("\n\nMEDIA: R$ %.2f", med);
    printf("\nMEDIA SALARIO MENOR QUE R$3000: %.2f", med_50);
    printf("\nMEDIA SALARIO ENTRE R$3000 E R$8700: %.2f", med_27);
    printf("\nMEDIA SALARIO MAIOR QUE R$8700: %.2f\n\n", med_14);




    return 0;
}
