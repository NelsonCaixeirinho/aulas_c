#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 38
            Operadores Relacionais
            menor que (a < b)            => 1
            maior que (a > b)            => 0
            menor ou igual (a <= b  )    => 1
            maior ou igual (a >= b)      => 0
            igual (a == b)               => 0 / 1
            diferente (a != b)           => 1 / 0
        */

int main(){

    setlocale(LC_ALL,"");

    int a = 10, b = 10;

    printf("\n\tResultado: %d\n\n", a != b);




    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
