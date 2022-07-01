#include <stdio.h>
#include <stdlib.h>

/*                  Aula 17
        Operador short para o tipo int
        intervalo: -32.768 até 32.767
        %hi ou %d
*/

int main(){

    int y = 0;
    short int x = 32767;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x; %hi\n", x);



    //printf("Tamanho em  memoria de int; %d bytes\n", sizeof y);
    //printf("Tamanho em memoria de short int: %d bytes\n", sizeof x);

    //4 * 8bits = 32 bits
    //2 * 8bits = 16 bits


    printf("\nPresione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
