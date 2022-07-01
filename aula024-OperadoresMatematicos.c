#include <stdio.h>
#include <stdlib.h>

/*                  Aula 24
        Operadores matematicos para:
        Soma                       +
        Subtracção                 -
        Multiplicação              *
        Divisão                    /
        */

int main(){

    printf("\n\t\tSoma: %d\n", 10 + 20);
    printf("\n\t\tSubtracao: %d\n", 10 - 20);
    printf("\n\t\tMultiplicacao: %d\n", 10 * 20);
    printf("\n\t\tDivisao: %.2f\n", 10.0 / 20);

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
