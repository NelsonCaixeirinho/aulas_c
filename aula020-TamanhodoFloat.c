#include <stdio.h>
#include <stdlib.h>

/*                  Aula 20
        Tamanho de um float na memória
        %f
*/

int main(){

    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
