#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 66: Incremento diferente de 1
        */
int main(){

    setlocale(LC_ALL,"");

    int i;

    for(i = 1; i <= 100; i +=1){ // i = i + 1 Pares
        if(i % 2 == 0)
        printf("%d ", i);
    }

    for(i = 1; i <= 100; i +=2) // i = i + 2 Impares
        printf("\t%d ", i);


    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
