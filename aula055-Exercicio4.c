#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 55;Exercicío 04
    Crie um programa que permita fazer a conversão de Real para Dólar ou de Dólar
    para Real. Utilize. como taxa de cãmbio $1 igual a R$5.30
        */

int main(){

    setlocale(LC_ALL,"");

    float valor, valorconvertido;
    int opcao;

    printf("\n\t\t\Digite o valor a converter: ");
    scanf("%f", &valor);

    printf("\n\t\t1 - Converter de Real para Dolar\n\t\t2 - Converter de Dolar para Real\n\t\t");
    scanf("%d",&opcao);

    switch(opcao){
    case 1:
        valorconvertido = valor / 5.3;
        printf("Valor convertido: $%.2f\n", valorconvertido);
        break;
    case 2:
        valorconvertido = valor * 5.3;
        printf("Valor convertido: R$%.2f\n", valorconvertido);
        break;
    default:
        printf("\n\t\tOpção Inválida!!!\n");
    }
    printf("Valor convertido: %.2f\n", valorconvertido);



    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
