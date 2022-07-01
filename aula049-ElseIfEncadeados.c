#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 49: else e if encadeados

*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    //Primeira versão
     if(a < 0)
        printf("\n\tValor negativo!\n");
     else{
        if(a > 0)
            printf("\n\tValor positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");
     }

     //Segunda versão
     if(a < 0)
        printf("\n\tValor negativo!\n");
     else if(a > 0)
        printf("\n\tValor positivo!\n");
     else
        printf("\n\tValor igual a zero!\n");

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
