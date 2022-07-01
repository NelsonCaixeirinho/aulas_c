#include <stdio.h>
#include <stdlib.h>

/*
            Aula 7
        Lendo caracteres
        Função getchar()
*/

int main(){

    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("\nCaracter lido: %c\n", letra);


    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
