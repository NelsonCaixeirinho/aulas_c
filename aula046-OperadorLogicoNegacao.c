#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 46: Operador Lógico de negação
                        TABELA  VERDADE     x  !x
                                            v   f
                                            f   v
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nValor lógico de a: %d\n", a < 0);

    printf("\nOperador ternário:\n");
    !(a < 0) ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");


    printf("\n\n**If/else:**\n");
    if(!(a < 0))
        printf("\n\t**Valor negativo!**\n");
    else {
        printf("\n\t**Valor positivo ou igual a zero!**\n");
    }
    printf("\nContinuação do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
