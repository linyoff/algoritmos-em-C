/*


Nome: Aliny Alves Dutra
Data: 12/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com


Em uma eleição para representante de sala da sua turma de processamento de dados existem quatro
candidatos. Os votos são informados através de código. Os dados utilizados para a escrutinagem
obedecem à seguinte codificação:
a) 1, 2, 3, 4 = voto para os respectivos candidatos;
b) 5 = voto nulo;
c) 6 = voto em branco;
d) 0 = fim da votação.
 Observação: o dado informado deve ser validado.
Elabore um algoritmo que solicite ao operador a série de votos (cujo elemento finalizador é zero) e
apresente no final os seguintes dados:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
- percentual dos votos em branco e nulos sobre o total geral de votantes;
- qual(is) o(s) candidato(s) vencedor(es).



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
    int v, tot_v, cand1, cand2, cand3, cand4, tot_brnc, tot_nulo, percent;

    //INICIALIZANDO VARS
    v=1;
    cand1=cand2=cand3=cand4=tot_brnc=tot_nulo=percent=tot_v=0;


    //MENU DE CANDIDATOS
    printf("\n     ELEICAO PARA REPRESENTATE DE SALA\n");

    while (v != 0)//REPETICAO
    {
        system("cls");
        printf("\n              CANDIDATOS\n");
        printf("=========================================\n\n");
        printf("Digite 1 para votar no(a) candidato(a) 1\n");
        printf("Digite 2 para votar no(a) candidato(a) 2\n");
        printf("Digite 3 para votar no(a) candidato(a) 3\n");
        printf("Digite 4 para votar no(a) candidato(a) 4\n");
        printf("Digite 5 para votar NULO\n");
        printf("Digite 6 para votar EM BRANCO\n");
        printf("Digite 0 para encerrar a votacao\n");
        printf("Digite sua escolha: ");
        fflush(stdin);
        scanf("%d", &v);
        while (v > 6)//VALIDANDO
        {
            printf("\n\nOPCAO INVALIDA!\n\n");
            printf("Digite um numero entre 1 a 4 do candidato que escolheu: ");
            fflush(stdin);
            scanf("%d", &v);
        }
        //VERIFICANDO RESULTADOS
        if (v == 1)
            cand1++;
        else
            if (v == 2)
                cand2++;
            else
                if (v == 3)
                    cand3++;
                else
                    if (v == 4)
                        Cand4++;
                    else
                        if (v == 5)
                            tot_nulo++;
                        else
                            if (v == 6)
                                tot_brnc++;

        //CALCULO TOTAL DE VOTOS
        tot_v = cand1 + cand2 + cand3 + cand4 + tot_nulo + tot_brnc;
        //CALCULO PERCENTUAL DE VOTOS EM BRANCO E NULOS
        percent = ((tot_brnc+tot_nulo)*100)/tot_v;

    //RESULTADO FINAL
    system("cls");
    printf("\n\n           RESULTADO FINAL");
    printf("\n\n=======================================\n\n");
    printf("CANDIDATO 1: %d\n", cand1);
    printf("CANDIDATO 2: %d\n", cand2);
    printf("CANDIDATO 3: %d\n", cand3);
    printf("CANDIDATO 4: %d\n", cand4);
    printf("VOTOS NULOS: %d\n", tot_nulo);
    printf("VOTOS EM BRANCO: %d\n", tot_brnc);
    printf("PERCENTUAL DE VOTOS BRANCOS E NULOS: %.0d%%\n\n\n", percent);

    //VERIFICANDO VENCEDOR
    if (cand1 == cand2 && cand1 == cand3 && cand1 == cand4)
        printf("HOUVE UM EMPATE\n\n\n");
            if (cand1 > cand2 && cand1 > cand3 && cand1 > cand4)
                printf("VENCEDOR: CANDIDATO 1\n\n\n");
            else
                if (cand2 > cand1 && cand2 > cand3 && cand2 > cand4)
                    printf("VENCEDOR: CANDIDATO 2\n\n\n");
                else
                    if (cand3 > cand1 && cand3 > cand2 && cand3 > cand4)
                        printf("VENCEDOR: CANDIDATO 3\n\n\n");
                    else
                        if (cand4 > cand1 && cand4 > cand2 && cand4 > cand3)
                            printf("VENCEDOR: CANDIDATO 4\n\n\n");
                        else
                            if (cand1 == cand2 || cand1 == cand3 || cand1 == cand4)
                                printf("HOUVE UM EMPATE ENTRE DOIS CANDIDATOS\n\n\n");
                            else
                                if (cand2 == cand3 || cand2 == cand4)
                                    printf("HOUVE UM EMPATE ENTRE DOIS CANDIDATOS\n\n\n");
                                else
                                    if (cand3 == cand4)
                                        printf("HOUVE UM EMPATE ENTRE DOIS CANDIDATOS\n\n\n");

    }


    return 0;
}
