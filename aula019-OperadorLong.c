#include <stdio.h>
#include <stdlib.h>

/*                  Aula 19
        Operador long para o tipo int
        %li e %ld
*/

int main(){

    short int a = 0; // Só possso usar um short e não short short

    int y = 2147483647;
    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %lld\n", x); // Colocar lld para long long int
    x++;
    printf("Valor de x: %lli\n", x);


    //4 * 8bits = 32 bits
    //2 * 8bits = 16 bits


    printf("\nPresione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
