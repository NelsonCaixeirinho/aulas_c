#include <stdio.h>
#include <stdlib.h>

/*                  Aula 26
            Operador de resto da divis�o
        */

int main(){

    int a = 10, b = 20, c = 7;


    // Divis�o Inteira %
    // 20 / 10 = 0 resto da  divis�o
    // 10 / 20 = 10 resto da divis�o

    printf("\n\n\tResto da divisao inteira: %d\n",  a % b);
    printf("\tResto da divisao inteira: %d\n", b % b);
    printf("\tResto da divisao inteira: %d\n", b % c);
    printf("\tResto da divisao inteira: %d\n", b % 2); //Divis�o inteira por dois  d� resultado PAR(resto 0) ou �MPAR(resto  1)
    printf("\tResto da divisao inteira: %d\n", c % 2); //Divis�o inteira por dois  d� resultado PAR(resto 0) ou �MPAR(resto  1)

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
