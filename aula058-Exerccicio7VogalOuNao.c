#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 58:Exercicio 07
        Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.
        */

int main(){

    setlocale(LC_ALL,"");

    char carater;

    printf("\n\n\n\t\t\tDigite um Carater: ");
    scanf("%c", &carater);

    if(carater == 'a' || carater == 'A' || carater == 'e' || carater == 'E' || carater == 'i' || carater == 'I' || carater == 'o'
       || carater == 'O' || carater == 'u' || carater == 'U')
        printf("\n\n\n\t\t\tO carater digitado � uma vogal ...\n");
    else
        printf("\n\n\n\t\t\tO carater digitado � uma consoante ...\n\n\n\n\n\n\n");





    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
