/*


Nome: Aliny Alves Dutra
Data: 26/09/2022
Curso: 1� per�odo de An�lise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo em linguagem C, que receba um n�mero
inteiro e positivo, processar e mostrar o resultado da soma dos N�s n�meros inteiros come�ando
em 01 (um) variando de 1 em 1 at� esse n�mero N.
 Obs.:
1) criar uma fun��o com passagem de par�metro por �refer�ncia�, para validar a entrada de dados
para que o n�mero de entrada seja positivo.
2) Criar uma fun��o que receba como par�metro o �valor� de N, processar dentro desta fun��o o
somat�rio solicitado e mostrar os resultado dentro da pr�pria fun��o.


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
