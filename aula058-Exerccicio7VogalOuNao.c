#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 58:Exercicio 07
        Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
        */

int main(){

    setlocale(LC_ALL,"");

    char carater;

    printf("\n\n\n\t\t\tDigite um Carater: ");
    scanf("%c", &carater);

    if(carater == 'a' || carater == 'A' || carater == 'e' || carater == 'E' || carater == 'i' || carater == 'I' || carater == 'o'
       || carater == 'O' || carater == 'u' || carater == 'U')
        printf("\n\n\n\t\t\tO carater digitado é uma vogal ...\n");
    else
        printf("\n\n\n\t\t\tO carater digitado é uma consoante ...\n\n\n\n\n\n\n");





    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
