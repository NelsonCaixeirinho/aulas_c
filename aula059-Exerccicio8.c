#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 59:Exercicio 8
        Elabore um programa que, dado o n�mero do m�s, indica quantos  dias t�m esse m�s.
        Utilize para isso a estrutura de sele��o switch.
        Obs.: Considere Fevereiro como tendo 28 dias.
        */

int main()
{

    setlocale(LC_ALL,"");

    int  mes;

    printf("\n\t\tDigite o n�mero do m�s: ", mes);
    scanf("%d", &mes);

    switch(mes) {
    case 1:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Janeiro\n");
        break;
    case 2:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Fevereiro\n");
        break;
    case 3:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Mar�o\n");
        break;
    case 4:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Abril\n");
        break;
    case 5:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Maio\n");
        break;
    case 6:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Junho\n");
        break;
    case 7:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Julho\n");
        break;
    case 8:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Agosto\n");
        break;
    case 9:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Setembro\n");
        break;
    case 10:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Outubro\n");
        break;
    case 11:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Nomvembro\n");
        break;
    case 12:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Dezembro\n");
        break;
    default:
        printf("\n\n\t\tValor n�o corresponde a nenhum m�s!!!\n");

    }
    if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 12)
        printf("\t\tO m�s tem 31 dias.\n\n\n\n\n");
    else if( mes == 4 || mes == 6 || mes == 9 || mes == 10 || mes == 11)
        printf("\t\tO m�s tem 30 dias.\n\n\n\n\n");
    else
        printf("\t\tO m�s tem 28 dias.\n\n\n\n\n");




    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
