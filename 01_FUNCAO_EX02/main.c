/*


Nome: Aliny Alves Dutra
Data: 26/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo em linguagem C, que receba três números inteiros,
representando horas, minutos e segundos. Processar e mostrar a conversão total em segundos.
Exemplo: 2h, 40 min e 10 seg correspondem a 9610 segundos.
 Obs.:
1) Criar uma única função com passagem de parâmetro por “valor”, para validar as entradas (horas,
minutos e segundos (cada um em seu tempo de entrada)) para serem maior ou igual a zero;
2) criar uma função que receba esses TRÊS PARÂMETROS de entrada (hora, minuto e segundo),
processar a conversão para SEGUNDOS e retornar esse valor para o código principal, onde será
mostrado para o usuário.


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

int validar_val (int temp)
{
    while(temp < 0)
    {
        printf("\nVALOR INVALIDO\n\nDigite outro valor: ");
        fflush(stdin);
        scanf("%d", &temp);
    }

}

int conversao (int hr, int min, int seg)
{
    int conv = 0;
    conv = (hr * 3600) + (min * 60) + seg;

}

//=============CODIGO PRINCIPAL=============================
int main()
{
    //CRIANDO VARS
    int hr = 0, min = 0, seg = 0, val = 0, conv = 0;

    //RECEBENDO DADOS HORAS
    printf("\n\nDigite um valor para horas: ");
    fflush(stdin);
    scanf("%d", &hr);
    //VALIDACAO
    val = validar_val(hr);
    //RECEBENDO DADOS MINUTOS
    printf("\n\nDigite um valor para minutos: ");
    fflush(stdin);
    scanf("%d", &min);
    //VALIDACAO
    val = validar_val(min);
    //RECEBENDO DADOS SEGUNDOS
    printf("\n\nDigite um valor para segundos: ");
    fflush(stdin);
    scanf("%d", &seg);
    //VALIDACAO
    val = validar_val(seg);
    //RECEBENDO VALOR CONVERSAO
    conv = conversao(hr, min, seg);
    //RESULTADO FINAL
    printf("\n\nA conversao de %dhr, %dmin e %dseg é igual a %d\n\n\n", hr, min, seg, conv);

    return 0;
}
