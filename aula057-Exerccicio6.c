#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 57;Exercicio 06
        Faça  um programa para lêr um número inteiro e verificar se corresponde
        a um mês válido no calendário. Caso corresponda, escrever o nome do mês,
        caso contrário, escrever a mensagem "Mês Inválido".
        */

int main()
{

    setlocale(LC_ALL,"");

    int  mes;

    printf("\n\t\tDigite o número  do mês: ", mes);
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("\n\n\t\tO número digitado corresponde ao mês de Janeiro\n\n\n\n\n");
        break;
    case 2:
        printf("\n\n\t\tO número digitado corresponde ao mês de Fevereiro\n\n\n\n\n");
        break;
    case 3:
        printf("\n\n\t\tO número digitado corresponde ao mês de Março\n\n\n\n\n");
        break;
    case 4:
        printf("\n\n\t\tO número digitado corresponde ao mês de Abril\n\n\n\n\n");
        break;
    case 5:
        printf("\n\n\t\tO número digitado corresponde ao mês de Maio\n\n\n\n\n");
        break;
    case 6:
        printf("\n\n\t\tO número digitado corresponde ao mês de Junho\n\n\n\n\n");
        break;
    case 7:
        printf("\n\n\t\tO número digitado corresponde ao mês de Julho\n\n\n\n\n");
        break;
    case 8:
        printf("\n\n\t\tO número digitado corresponde ao mês de Agosto\n\n\n\n\n");
        break;
    case 9:
        printf("\n\n\t\tO número digitado corresponde ao mês de Setembro\n\n\n\n\n");
        break;
    case 10:
        printf("\n\n\t\tO número digitado corresponde ao mês de Outubro\n\n\n\n\n");
        break;
    case 11:
        printf("\n\n\t\tO número digitado corresponde ao mês de Nomvembro\n\n\n\n\n");
        break;
    case 12:
        printf("\n\n\t\tO número digitado corresponde ao mês de Dezembro\n\n\n\n\n");
        break;
    default:
        printf("\n\n\t\tValor não corresponde a nenhum mês!!!\n\n\n\n\n");

    }




    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
