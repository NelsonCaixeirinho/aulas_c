#include <stdio.h>
#include <stdlib.h>

/*                  Aula 28
            Operador de decremento --
        */

int main(){
    int resultado, contador = 10;

    printf("Valor: %d\n", contador--);

    resultado = --contador;

    printf("\tValor:  %d\n", resultado);

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
