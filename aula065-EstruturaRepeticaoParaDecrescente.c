#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 65
        */
int main(){

    setlocale(LC_ALL,"");

       int i = 10;

    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d \n\n", i--);

    for(i = 10; i >= 0; i--){
        printf("%d ", i);
       }




    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
