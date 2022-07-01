#include <stdio.h>
#include <stdlib.h>

/*                  Aula 21
                Tipo double
                %lf
*/

int main(){

    float x = 3.1415;

    double y = 3.14159265358979323846;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    printf("Um double precisa de %d bytes de memoria. \n", sizeof y);

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
