#include <stdio.h>
#include <stdlib.h>

/*                  Aula 18
        Tamanho de um int na memória
        intervalo: -2.147.483.648 até 2.147.483.647
        %hi ou %d
*/

int main(){

    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x; %d\n", x);

    printf("\n\nTamanho em memoria de x: %d bits\n", sizeof (2147483647));
    printf("Tamanho em memoria de x: %d bits\n", sizeof (2147483648));



    //4 * 8bits = 32 bits
    //2 * 8bits = 16 bits


    printf("\nPresione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
