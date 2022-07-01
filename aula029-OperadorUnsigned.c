#include <stdio.h>
#include <stdlib.h>

/*                  Aula 29
                Operador unsigned
                trocar o %d por %u
                limite para o tipo int 2.147.483.647
                short int -> %d ou %hi
                unsigned short int %hu ou %d
                unsigned long int %lu
        */

int main(){

    unsigned int x = 2147483647; // deixa de ser -2.147... até 2.147.. para passar tudo a positivo 4.296.967.295
    // 4 * 8 = 32

    unsigned short int y = 55000;

    printf("\n\tValor da variavel \"x = %u\"\n\n", ++x);

    printf("\n\tValor da variavel \"y = %hu\"\n\n", y);

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
