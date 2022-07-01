#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 44: Decis�o aninhadas
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nValor l�gico de a: %d\n", a < 0);

    printf("\nOperador tern�rio:\n");
    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");


    printf("\n\nIf/else\n");
    if(a < 0)
        printf("\n\tValor negativo!\n");
    else {
        if(a > 0)
            printf("\n\tValor positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");
    }
    printf("\nContinua��o do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
