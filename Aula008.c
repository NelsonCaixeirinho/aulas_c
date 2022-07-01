#include <stdio.h>
#include <stdlib.h>

/*
            Aula 8
        Lendo caracteres
        Função getc()
*/

int main(){

    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);

    printf("\nCaracter lido: %c\n", letra);


    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
