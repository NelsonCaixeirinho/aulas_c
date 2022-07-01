#include <stdio.h>
#include <stdlib.h>

/*
            Aula 9
        Lendo caracteres
        Função fgetc(); file get character
*/

int main(){

    char  letra;

    printf("\nDigite um caracter: ");
    letra = fgetc(stdin);

    printf("\nCaracter lido: %c\n", letra);


    return 0;
}
