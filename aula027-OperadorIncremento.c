#include <stdio.h>
#include <stdlib.h>

/*                  Aula 27
            Operador de incremento --
        */

int main(){
    int resultado, contador = 10;

    resultado = ++contador;

    printf("\tValor:  %d\n", resultado);

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
