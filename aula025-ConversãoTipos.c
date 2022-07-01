#include <stdio.h>
#include <stdlib.h>

/*                  Aula 25
            Conversão de tipos
        */

int main(){

    int a = 10, b = 20;
    float pi = 3.14159265358979323846;

    a = (int)pi;

    printf("\nValor de a: %d\n", a);
    printf("\n\t\tSoma: %d\n", a + b);
    printf("\n\t\tSubtracao: %d\n", a - b);
    printf("\n\t\tMultiplicacao: %d\n", a * b);
    printf("\n\t\tDivisao: %f\n", a / (float)b);

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
