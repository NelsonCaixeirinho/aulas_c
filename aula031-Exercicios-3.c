#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 31-3
            3) Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem
            utilizar nenhuma vari�vel auxiliar.
        */

int main(){

    setlocale(LC_ALL,"");


    int a, b;


    printf("\nDigite dois valores inteiros; ");
    scanf("\n%d\n%d", &a, &b);

    printf("\n\tO valor de a = %d\n\tO valor de b = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\tO valor de a = %d\n\tO valor de b = %d", a, b);


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
