/*


Nome: Aliny Alves Dutra
Data: 28/09/2022
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com || aliny.dutra@estudante.iftm.edu.br

Elabore um algoritmo em linguagem C, que permita executar conforme
solicitado abaixo:
a) Criar uma função para montar o MENU PRINCIPAL contendo as opções de uma
calculadora e retornar o valor da opção, conforme abaixo:
CALCULADORA
 1-) Fatorial de um número
 2-) Resto de uma divisão entre dois números inteiros
 3-) Exponencial entre dois números inteiro
 4-) finalizar programa.
 Digite uma das opções acima: ___
b) Criar uma função para o cálculo do fatorial, a qual deverá retornar o resultado para o
código principal, onde será mostrado seu valor;
Observações para a regra matemática do fatorial:
 a representação matemática para o fatorial é pelo símbolo de exclamação
(ex.: 6! );
 não existe fatorial de número negativo (validar corretivamente para não ser
negativo);
 fatorial de 0 é igual a 1; e,
 o fatorial de um número é a multiplicação de todos os seus termos,
começando em 1 até ele mesmo, ou seja, 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720.
c) Criar uma função para o cálculo do resto da divisão de forma que o resultado do
cálculo seja retornado para o código principal onde será mostrado;
d) Criar uma função para o cálculo do exponencial de forma que o resultado do cálculo
seja retornado para o código principal onde será mostrado;
Observações para a regra matemática do exponencial:
 Matematicamente, todo número elevado a 0 (zero) é igual a 1 (um);
 receber dois números inteiros e processar o cálculo do exponencial sem utilizar
qualquer função pronta, tais como: exp, Ln, ^, entre outras. Você deverá criar
um laço de repetição para efetuar o cálculo.
e) Criar ÚNICA FUNÇÃO para ENTRADA seguintes dados:
 Para receber o número do fatorial;
 Para receber os números da base e do expoente;
 Para receber os dois números, visando o cálculo do resto da divisão entre eles.
f) Uma ÚNICA FUNÇÃO para VALIDAR corretivamente as entradas (todos maiores ou
igual a zero):
 do fatorial,
 da exponenciação, e;
 dos dois números para o cálculo do resto.

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

int menu_calculadora (int opc)
{
	printf("\n========CALCULADORA==========\n\n");
	printf("1) Fatorial de um numero\n");
	printf("2) Resto de uma divisao entre dois numeros inteiros \n");
    printf("3) Exponencial entre dois numeros inteiros \n");
    printf("4) finalizar programa.\n");
    printf("Digite uma das opcoes acima: ");
    fflush(stdin);
    scanf("%d", &opc);
    return(opc);
}

int validar_menu(int *n)
{
	while(*n <= 0 || *n > 4)
	{
		printf("\nVALOR INVALIDO\n\nDigite outro numero: ");
		fflush(stdin);
		scanf("%d", &*n);
	}
}

float receber_num (int n)
{
	printf("\n\nDigite um numero maior ou igual a 0: ");
	fflush(stdin);
	scanf("%d", &n);

	return (n);
}

float validar_num (int *n)
{
	while(*n < 0)
	{
		printf("\nVALOR INVALIDO\n\nDigite outro numero: ");
		fflush(stdin);
		scanf("%d", &*n);
	}
}

void fatorial_num (int num)
{
    //var
    int fat = 1, cont = 0;

    if (num == 0)
		printf("\n\nO fatorial de 0 e igual a 1\n\n");
	else
	{
		while(cont < num)
		{
			cont++;
			fat = fat * cont;
		}
		printf("\n\nO fatorial de %d e igual a %d\n\n", num, fat);
	}
}

int calculo_resto (int a, int b)
{
	//var
	float calc=0;
	calc = a%b;

	return(calc);
}

int exponencial_nums (int a, int b)
{
	//vars
	int calc=0;

	calc =
}

//===================CODIGO PRINCIPAL=======================

int main()
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    //VARS
    int opc = 0;

    //laco para exibir menu
    while (opc != 4)
	{

		//menu
		opc = menu_calculadora(opc);
		validar_menu(&opc);
		if (opc == 1)
		{
			system("cls");
			printf("\nVOCE ESCOLHEU A OPCAO 1\n");

			//VARS
    		int num = 0;

    		//recebendo dados
			num = receber_num(num);
			//validando
			validar_num(&num);
			//final
			fatorial_num(num);
			//limpando tela
			printf("\n\n\nAPERTE QUALQUER TECLA PARA CONTINUAR");
			getch();
			system("cls");

		}
		else
			if (opc == 2)
			{
				system("cls");
			    printf("\nVOCE ESCOLHEU A OPCAO 2\n");

			    //VARS
			    int n1=0, n2=0, res=0;
			    //recebendo primeiro numero
			    n1 = receber_num(n1);
			    //validando
			    validar_num(&n1);
			    //recebendo segundo numero
			    n2 = receber_num(n2);
			    //validando
			    validar_num(&n2);
				//calculo
				res = calculo_resto(n1, n2);
				//final
				printf("\n\nO resto da divisao entre %d e %d e igual %d\n", n1, n2, res);


			    //limpando tela
				printf("\n\n\nAPERTE QUALQUER TECLA PARA CONTINUAR");
				getch();
				system("cls");

			}
			else
				if (opc == 3)
				{
					system("cls");
			        printf("\nVOCE ESCOLHEU A OPCAO 3\n");

					//VARS
					int base=0, exp=0, calc_exp=0;

					//recebendo primeiro numero
			    	num1 = receber_num(num1);
			    	//validando
			    	validar_num(&num1);
			    	//recebendo segundo numero
			    	num2 = receber_num(num2);
			    	//validando
			    	validar_num(&num2);
			    	//calculo
			    	calc_exp = exponencial(base, exp);
			    	//final
			    	printf("\n%d elevado a %d e igual a %d", base, exp, calc_exp);

			       	//limpando tela
					printf("\n\n\nAPERTE QUALQUER TECLA PARA CONTINUAR");
					getch();
					system("cls");

				}
	}





    return 0;
}
