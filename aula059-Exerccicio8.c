#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 59:Exercicio 8
        Elabore um programa que, dado o número do mês, indica quantos  dias têm esse mês.
        Utilize para isso a estrutura de seleção switch.
        Obs.: Considere Fevereiro como tendo 28 dias.
        */

int main()
{

    setlocale(LC_ALL,"");

    int  mes;

    printf("\n\t\tDigite o número do mês: ", mes);
    scanf("%d", &mes);

    switch(mes) {
    case 1:
        printf("\n\n\t\tO número digitado corresponde ao mês de Janeiro\n");
        break;
    case 2:
        printf("\n\n\t\tO número digitado corresponde ao mês de Fevereiro\n");
        break;
    case 3:
        printf("\n\n\t\tO número digitado corresponde ao mês de Março\n");
        break;
    case 4:
        printf("\n\n\t\tO número digitado corresponde ao mês de Abril\n");
        break;
    case 5:
        printf("\n\n\t\tO número digitado corresponde ao mês de Maio\n");
        break;
    case 6:
        printf("\n\n\t\tO número digitado corresponde ao mês de Junho\n");
        break;
    case 7:
        printf("\n\n\t\tO número digitado corresponde ao mês de Julho\n");
        break;
    case 8:
        printf("\n\n\t\tO número digitado corresponde ao mês de Agosto\n");
        break;
    case 9:
        printf("\n\n\t\tO número digitado corresponde ao mês de Setembro\n");
        break;
    case 10:
        printf("\n\n\t\tO número digitado corresponde ao mês de Outubro\n");
        break;
    case 11:
        printf("\n\n\t\tO número digitado corresponde ao mês de Nomvembro\n");
        break;
    case 12:
        printf("\n\n\t\tO número digitado corresponde ao mês de Dezembro\n");
        break;
    default:
        printf("\n\n\t\tValor não corresponde a nenhum mês!!!\n");

    }
    if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 12)
        printf("\t\tO mês tem 31 dias.\n\n\n\n\n");
    else if( mes == 4 || mes == 6 || mes == 9 || mes == 10 || mes == 11)
        printf("\t\tO mês tem 30 dias.\n\n\n\n\n");
    else
        printf("\t\tO mês tem 28 dias.\n\n\n\n\n");




    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
