#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 37
        7) Faça um programa para lêr do teclado uma quantidade de segundos e imprimir na tela
        a conversão para horas, minutops e segundos.
        Exemplo:
        Entrada: 3672
        Saída: 1:1:12
        */

int main(){

    setlocale(LC_ALL,"");

    int segundos, m, h, s, resto;

    printf("Digite o valor em segundos: ");
    scanf("%d", &segundos);
    //3672 segundos
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("\n%d:%d:%d\n Horas", h, m, s);


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
