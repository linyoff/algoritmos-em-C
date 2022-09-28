/*


Nome: Aliny Alves Dutra
Data: 26/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo em linguagem C, que receba um número
inteiro e positivo, processar e mostrar o resultado da soma dos N’s números inteiros começando
em 01 (um) variando de 1 em 1 até esse número N.
 Obs.:
1) criar uma função com passagem de parâmetro por “referência”, para validar a entrada de dados
para que o número de entrada seja positivo.
2) Criar uma função que receba como parâmetro o “valor” de N, processar dentro desta função o
somatório solicitado e mostrar os resultado dentro da própria função.


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

void validar_numero (int *x)
{
    while (*x <= 0)
    {
        printf("\n\nVALOR INVALIDO\n\nDigite outro valor");
        fflush(stdin);
        scanf("%d", *x);
    }
}

int somatorio_val(int x)
{
    int cont = 0, s = 0;
    while(cont < x)
    {
        cont++;
        s = s + cont;
    }
    return(s);
}

//=============CODIGO PRINCIPAL=============================

int main()
{
    //CRIANDO VARS
    int n = 0, somatorio = 0;

    //RECEBENDO DADOS
    printf("\n\nDigite um numero inteiro e positivo: ");
    fflush(stdin);
    scanf("%d", &n);
    //VALIDAR
    validar_numero(&n);
    //CHAMANDO FUNCAO SOMATORIO
    somatorio = somatorio_val(n);
    //FINALIZANDO
    printf("\n\n A soma dos valores e igual a %d\n\n\n", somatorio);

    return 0;
}
