#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 36
        6) Crie um Programa em C que permita fazer a convers�o cambial entre Reais e D�lares.
        Considere como taxa de c�mbio us$1,0 = R$5.30. Leia um valor em Reais e mosttre o
        correspondente em D�lares.
        */

int main(){

    setlocale(LC_ALL,"");

    float real, us, total;
    printf("\nQuantor R$ quer cambiar: ");
    scanf("%f", &real);

    total = real / 5.3;

    printf("\nO total � US$%.2f", total);


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
