#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 42: Endentação e uso de chaves
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado logico: %d\n", a < 0);

    if(a < 0)
        printf("\n\tValor negativo!\n");
    else {
        printf("\n\tValor positivo ou igual a zero!\n");
        printf("\n\t**Valor positivo ou iguaL a zero!**\n");
    }
    printf("\nContinuação do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
