#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 31
            Lista  de exercicio
        */

int main(){

    setlocale(LC_ALL,"");

    int a, b, c;

    printf("\nDigite dois valores inteiros; ");
    scanf("\n%d\n%d", &a, &b);
    printf("\n\tO valor de a = %d\n\tO valor de b = %d", a, b);

    c = a;
    a = b;
    b = c;
    printf("\n\n\tO valor de a = %d\n\tO valor de b = %d", a, b);





    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
