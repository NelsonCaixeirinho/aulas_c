#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 45: Operador tern�rio aninhado
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nValor l�gico de a: %d\n", a < 0);

    printf("\nOperador tern�rio:\n");
    a < 0 ? printf("\n\tValor negativo!\n") :
        a > 0 ? printf("\n\tValor positivo!\n") : printf("\n\tValor igual a zero!\n");


    printf("\n\n**If/else:**\n");
    if(a < 0)
        printf("\n\t**Valor negativo!**\n");
    else {
        if(a > 0)
            printf("\n\t**Valor positivo!**\n");
        else
            printf("\n\t**Valor igual a zero!**\n");
    }
    printf("\nContinua��o do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
