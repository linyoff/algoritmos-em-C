/*


Nome: Aliny Alves Dutra
Data: 13/10/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

– Vamos simular um comércio de mercadorias (um mini supermercado).
 Faça um algoritmo que:
a) Receba um vetor chamado PROD de 100 elementos (posições) contendo o nome de produtos;
b) Receba um vetor chamado VLCUSTO de 100, o qual irá conter o valor de custo de cada uma das
mercadorias (em sua ordem de entrada).
c) Receba um vetor chamado VLVENDA de 100, o qual irá conter o valor de venda de cada uma das
mercadorias (em sua ordem de entrada).
d) Calcule o lucro obtido (VLVENDA - VLCUSTO), guardando o resultado em um vetor chamado LUCRO
de 100 elementos.
Processar e mostrar:
a) Qual o maior valor de venda e o nome(s) da(s) mercadoria(s);
b) Qual o menor valor de lucro e o nome(s) da(s) mercadoria(s);
c) O valor total de custo;
d) O valor total de venda; e,
e) O valor total de lucro.

*/
//==========================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 3

//==========================================================

float recebendo_valores (float x)
{
    do
    {
        printf("\nDigite o valor: ");
        fflush(stdin);
        scanf("%f", &x);
        if(x<1)
            printf("\n\nINVALIDO");

    }while(x<1);


    return(x);
}

//====================Codigo principal======================
int main()
{

    //criando vars
    char prod[tam][50], nm_maior_venda[50], nm_menor_lucro[50];
    float vl_custo[tam], vl_venda[tam], lucro[tam], vl_tot_custo, vl_tot_venda, vl_tot_lucro, maior_vl_venda, menor_vl_lucro;
    int i;

    //recebendo valor
    for(i=0; i<tam; i++)
    {
        //recebendo nome do produto
        printf("\nDigite o nome do produto %d: ", i+1);
        fflush(stdin);
        gets(prod[i]);
        //recebendo valores
        printf("\nValor de custo do produto");
        vl_custo[i] = recebendo_valores(vl_custo[i]);
        printf("\nValor de venda do produto");
        vl_venda[i] = recebendo_valores(vl_venda[i]);
        //verificando maior valor de venda
        if(i == 0)
        {
            maior_vl_venda = vl_venda[i];
            strcpy(nm_maior_venda, prod[i]);
        }
        if(vl_venda[i] > maior_vl_venda)
        {
            maior_vl_venda = vl_venda[i];
            strcpy(nm_maior_venda, prod[i]);
        }
        //calculo do lucro obtido
        lucro[i] = vl_venda[i] - vl_custo[i];
        //verificando menor lucro obtido
        if(i == 0)
        {
            menor_vl_lucro = lucro[i];
            strcpy(nm_menor_lucro, prod[i]);
        }
        if(lucro[i] < menor_vl_lucro)
        {
            menor_vl_lucro = lucro[i];
            strcpy(nm_menor_lucro, prod[i]);
        }
        //total
        vl_tot_custo = vl_tot_custo + vl_custo[i];
        vl_tot_venda = vl_tot_venda + vl_venda[i];
        vl_tot_lucro = vl_tot_lucro + lucro[i];

    }
    //exibindo resultados
    for(i=0; i<tam; i++)
    {
        printf("\n\n\nNome do produto: %s", prod[i]);
        printf("\nValor de custo do produto: %.2f", vl_custo[i]);
        printf("\nValor de venda do produto: %.2f", vl_venda[i]);
        printf("\nLucro obtido: %.2f", lucro[i]);
    }
    printf("\n\nValor de custo total: %.2f", vl_tot_custo);
    printf("\nValor de venda total: %.2f", vl_tot_venda);
    printf("\nValor de lucro total: %.2f\n\n\n", vl_tot_lucro);

    printf("\n\nO maior valor de venda foi de %.2f do produto %s", maior_vl_venda, nm_maior_venda);
    printf("\n\nO menor valor de lucro obtido foi de %.2f do produto %s\n\n", menor_vl_lucro, nm_menor_lucro);


    return 0;
}
