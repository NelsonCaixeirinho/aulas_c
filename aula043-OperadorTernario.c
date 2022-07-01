#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 43: Operador Ternário em C
                        condição ? verdadeiro : falso
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("Operador ternário:\n");
    a < 0 ? printf("\n\tValor negativo!\n"), printf("\n\t**Valor negativo**\n") : printf("\n\tValor positivo ou igual a zero!\n");


    printf("\n\nIf/else\n");
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
