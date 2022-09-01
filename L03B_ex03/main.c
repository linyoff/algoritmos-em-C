/*


Nome: Aliny Alves Dutra
CPF:
Data:
Curso: 1º período de Análise e Desenvolvimento de Sistemas
Email: aliny1505dutra@gmail.com
Prof. Ernani Cláudio Borges


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

    //criando vars
    char nm[50], sx[2];

    //inicializando vars
    strcpy (nm, "");
    strcpy (sx, "m");
    strcpy (sx, "M");
    strcpy (sx, "f");
    strcpy (sx, "F");

    //recebendo dados
    printf ("\n\n Digite seu nome: ");
    fflush (stdin);
    gets(nm);

    if (strcmp(nm, "") == 0)
        printf ("\nRESPOSTA INVÁLIDA!\n ");
    else
    {
        printf ("\n\n Digite a inicial do seu sexo(F para feminino e M para masculino): ");
        fflush (stdin);
        scanf ("%c", &sx);
        if (strcmp(sx, "f") == 0 || strcmp(sx, "F") == 0 || strcmp(sx, "m") == 0 || strcmp(sx, "M") == 0)
        {

            if (strcmp(sx, "f") == 0 || strcmp(sx, "F") == 0)
                printf ("\n\n Ilma Sra. %s \n\n", nm);
            else
                printf ("\n\n Ilmo Sr. %s \n\n", nm);
        }
        else
            printf ("\nRESPOSTA INVÁLIDA!\n ");

    }














    return 0;
}
