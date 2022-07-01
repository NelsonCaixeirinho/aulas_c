#include <stdio.h>
#include <stdlib.h>

/*              Aula 16
            Operador sizeof

        sizeof x ou sizeof(int)
*/

int main(){

    float x = 1.0;

    printf("Tamanho em memoria de um float: %d bytes\n", sizeof x);
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));

    // 4b *8bits = 32 bits

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
