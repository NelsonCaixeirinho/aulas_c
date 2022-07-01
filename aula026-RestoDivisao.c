#include <stdio.h>
#include <stdlib.h>

/*                  Aula 26
            Operador de resto da divisão
        */

int main(){

    int a = 10, b = 20, c = 7;


    // Divisão Inteira %
    // 20 / 10 = 0 resto da  divisão
    // 10 / 20 = 10 resto da divisão

    printf("\n\n\tResto da divisao inteira: %d\n",  a % b);
    printf("\tResto da divisao inteira: %d\n", b % b);
    printf("\tResto da divisao inteira: %d\n", b % c);
    printf("\tResto da divisao inteira: %d\n", b % 2); //Divisão inteira por dois  dá resultado PAR(resto 0) ou ÍMPAR(resto  1)
    printf("\tResto da divisao inteira: %d\n", c % 2); //Divisão inteira por dois  dá resultado PAR(resto 0) ou ÍMPAR(resto  1)

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
