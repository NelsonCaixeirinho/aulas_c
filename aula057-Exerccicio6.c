#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 57;Exercicio 06
        Fa�a  um programa para l�r um n�mero inteiro e verificar se corresponde
        a um m�s v�lido no calend�rio. Caso corresponda, escrever o nome do m�s,
        caso contr�rio, escrever a mensagem "M�s Inv�lido".
        */

int main()
{

    setlocale(LC_ALL,"");

    int  mes;

    printf("\n\t\tDigite o n�mero  do m�s: ", mes);
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Janeiro\n\n\n\n\n");
        break;
    case 2:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Fevereiro\n\n\n\n\n");
        break;
    case 3:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Mar�o\n\n\n\n\n");
        break;
    case 4:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Abril\n\n\n\n\n");
        break;
    case 5:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Maio\n\n\n\n\n");
        break;
    case 6:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Junho\n\n\n\n\n");
        break;
    case 7:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Julho\n\n\n\n\n");
        break;
    case 8:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Agosto\n\n\n\n\n");
        break;
    case 9:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Setembro\n\n\n\n\n");
        break;
    case 10:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Outubro\n\n\n\n\n");
        break;
    case 11:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Nomvembro\n\n\n\n\n");
        break;
    case 12:
        printf("\n\n\t\tO n�mero digitado corresponde ao m�s de Dezembro\n\n\n\n\n");
        break;
    default:
        printf("\n\n\t\tValor n�o corresponde a nenhum m�s!!!\n\n\n\n\n");

    }




    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
