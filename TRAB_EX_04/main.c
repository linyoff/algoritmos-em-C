/*


Nome: Aliny Alves Dutra
Data: 18/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Uma agência de publicidade quer prestar seus serviços somente para as maiores companhias, em
número de funcionários. As empresas são classificadas por porte: G - grande, M - média, P - pequena
e R - microempresa. Elabore um algoritmo que solicite ao operador o código da empresa, o porte e a
quantidade de funcionários, processe e apresente no final os seguintes dados:
a) qual o código da maior empresa em cada classificação;
b) a quantidade de empresas pesquisadas em cada porte;
c) a média de funcionários por empresa em cada porte;
d) o percentual de empresas por porte em relação ao total geral de empresas pesquisadas.
Observações:
 validar corretivamente a classificação; considere a letra F como elemento finalizador da pesquisa;
 o código da empresa deve estar entre 0001 e 9999;
 a quantidade de funcionários não pode ser igual ou inferior a zero.

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
	char porte;
	float medG, medM, medP, medR, percentG, percentM, percentP, percentR;
    int cod_empr, qtd_G, qtd_M, qtd_P, qtd_R, qtd_funcG, qtd_funcM, qtd_funcP, qtd_funcR;
    int m_cod, tot_empr, tot_func, tot_funcG, tot_funcM, tot_funcP, tot_funcR, m_qtdfunc;



    //INICIALIZAR VARS
    porte = ' ';
    medG=medM=medP=medR=percentG=percentM=percentP=percentR=0;
    cod_empr=qtd_G=qtd_M=qtd_P=qtd_R=qtd_funcG=qtd_funcM=qtd_funcP=qtd_funcR=0;
	m_cod=tot_empr=tot_func=tot_funcG=tot_funcM=tot_funcP=tot_funcR=m_qtdfunc=0;

    //RECEBENDO VALORES
    printf("\n\n                    PESQUISA\n");
    printf("\================================================\n");
    while(porte != 'f' && porte != 'F')//LAÇO COM FLAG F
    {
        printf("\nDIGITE O PORTE DA EMPRESA OU F PARA ENCERRAR\n");
        printf("G-grande, M-media, P-pequena e R-microempresa: ");
        fflush(stdin);
        scanf("%c", &porte);
        //VALIDANDO
        while(porte != 'G' && porte != 'g' && porte != 'M' && porte != 'm' && porte!= 'P' && porte != 'p' && porte != 'R' && porte != 'r' && porte != 'F' && porte != 'f')
        {
            printf("\nINVÁLIDO\n\n");
            printf("\nDIGITE O PORTE DA EMPRESA OU F PARA ENCERRAR\n");
            printf("G-grande, M-media, P-pequena e R-microempresa: ");
            fflush(stdin);
            scanf("%c", &porte);
        }
        if(porte != 'f' && porte != 'F')//VERIFICANDO SE IRÁ ENCERRAR
        {
            printf("\nDIGITE O CODIGO DA EMPRESA: ");
            fflush(stdin);
            scanf("%d", &cod_empr);
            while(cod_empr < 1 || cod_empr > 9999)//VALIDANDO
            {
                printf("\nINVALIDO");
                printf("\nDIGITE O CODIGO DA EMPRESA: ");
                fflush(stdin);
                scanf("%d", &cod_empr);
            }
            if(porte == 'G' || porte == 'g')//CONDIÇÃO G
            {
                tot_empr++;//TOTAL EMPRESAS
                qtd_G++;//TOTAL EMPRESAS G
                printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                fflush(stdin);
                scanf("%d", &qtd_funcG);
                system("cls");
                while(qtd_funcG <= 0)//VALIDANDO
                {
                    printf("\nINVALIDO\n");
                    printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                    fflush(stdin);
                    scanf("%d", &qtd_funcG);
                    system("cls");
                }
                tot_funcG = tot_funcG + qtd_funcG;//TOTAL FUNC G
                tot_func = tot_func + tot_funcG;//TOTAL FUNC GERAL
                //VERIFICANDO MAIOR EMPRESA
                if(m_qtdfunc < qtd_funcG)
                {
                    m_qtdfunc = qtd_funcG;//MAIS FUNC
                    m_cod = cod_empr;//CODIGO MAIS FUNC
                }
            }
            else
            {
                if(porte == 'M' || porte == 'm')
                {
                    tot_empr++;//TOTAL EMPRESAS
                    qtd_M++;
                    printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                    fflush(stdin);
                    scanf("%d", &qtd_funcM);
                    system("cls");
                    while(qtd_funcM <= 0)//VALIDANDO
                    {
                        printf("\nINVALIDO\n");
                        printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                        fflush(stdin);
                        scanf("%d", &qtd_funcM);
                        system("cls");
                    }
                    tot_funcM = tot_funcM + qtd_funcM;//TOTAL FUNC M
                    tot_func = tot_func + tot_funcM;//TOTAL FUNC GERAL
                    if(m_qtdfunc < qtd_funcM)
                    {
						m_qtdfunc = qtd_funcM;//MAIS FUNC
                        m_cod = cod_empr;//CODIGO MAIS FUNC
                    }
                }
                else
                {
                    if(porte == 'P' || porte == 'p')
                    {
						tot_empr++;//TOTAL EMPRESAS
						qtd_P++;
                        printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                        fflush(stdin);
                        scanf("%d", &qtd_funcP);
                        system("cls");
                        while(qtd_funcP <= 0)//VALIDANDO
                        {
                            printf("\nINVALIDO\n");
							printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                            fflush(stdin);
							scanf("%d", &qtd_funcP);
							system("cls");
                        }
                        tot_funcP = tot_funcP + qtd_funcP;//TOTAL FUNC P
                        tot_func = tot_func + tot_funcP;//TOTAL FUNC GERAL
                        if(m_qtdfunc < qtd_funcP)
                        {
						   m_qtdfunc = qtd_funcP;//MAIS FUNC
                           m_cod = cod_empr;//CODIGO MAIS FUNC
                        }
                    }
                    else
                    	if (porte == 'R' || porte == 'r')
                        {
							tot_empr++;//TOTAL EMPRESAS
							qtd_R++;
                            printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                            fflush(stdin);
                            scanf("%d", &qtd_funcR);
                            system("cls");
                            while(qtd_funcR <= 0)//VALIDANDO
                            {
								printf("\nINVALIDO\n");
							    printf("\nDIGITE QUANTOS FUNCIONARIOS: ");
                                fflush(stdin);
							    scanf("%d", &qtd_funcR);
							    system("cls");
                            }
                            tot_funcR = tot_funcR + qtd_funcR;//TOTAL FUNC R
                            tot_func = tot_func + tot_funcR;//TOTAL FUNC GERAL
                            if(m_qtdfunc < qtd_funcR)
                            {
								m_qtdfunc = qtd_funcR;//MAIS FUNC
                                m_cod = cod_empr;//CODIGO MAIS FUNC
                            }

                        }
                }
            }
        }
    }

    //CALCULO PERCENTUAL
    percentG = (qtd_G * 100)/tot_empr;
    percentM = (qtd_M * 100)/tot_empr;
    percentP = (qtd_P * 100)/tot_empr;
    percentR = (qtd_R * 100)/tot_empr;

    //MEDIA DE FUNC
    medG = tot_funcG/qtd_G;
    medM = tot_funcM/qtd_M;
    medP = tot_funcP/qtd_P;
    medR = tot_funcR/qtd_R;

    //RELATORIO FINAL
    printf("\n             RELATORIO FINAL");
    printf("\n============================================\n");
    printf("\nTOTAL DE EMPRESAS: %d", tot_empr);
    printf("\nMAIOR EMPRESA %d, COM %d FUNCIONARIOS", m_cod, m_qtdfunc);
    printf("\nEMPRESAS GRANDE PORTE: %d", qtd_G);
    printf("\nEMPRESAS MEDIO PORTE: %d", qtd_M);
    printf("\nEMPRESAS PEQUENO PORTE: %d", qtd_P);
    printf("\nEMPRESAS MICRO: %d", qtd_R);
    printf("\nMEDIA DE FUNCIONARIOS GRANDE PORTE: %.1f", medG);
    printf("\nMEDIA DE FUNCIONARIOS MEDIO PORTE: %.1f", medM);
    printf("\nMEDIA DE FUNCIONARIOS PEQUENO PORTE: %.1f", medP);
    printf("\nMEDIA DE FUNCIONARIOS MICRO: %.1f", medR);
    printf("\nPERCENTUAL GRANDE PORTE: %.1f%%", percentG);
    printf("\nPERCENTUAL MEDIO PORTE: %.1f%%", percentM);
    printf("\nPERCENTUAL PEQUENO PORTE: %.1f%%", percentP);
    printf("\nPERCENTUAL MICRO: %.1f%%", percentR);



    return 0;
}
