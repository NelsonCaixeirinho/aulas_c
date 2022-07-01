#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 64:Estrutura de repetição PARA
        */

int main(){

    setlocale(LC_ALL,"");

    int i = 0;

    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d \n\n", i++);

    for(i = 0; i <= 10; i++){
        printf("%d ", i);
       }


    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
