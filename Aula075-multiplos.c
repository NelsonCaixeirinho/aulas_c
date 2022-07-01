#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 75; Exercicio 06
        Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.

*/



int main(){

    setlocale(LC_ALL,"");

    int i;

    for(i = 7; i < 9999; i+=7){
            printf("%4d ", i);
    }


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
