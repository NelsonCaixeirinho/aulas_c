#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 54:Exercicio 03
        Escreva um programa em C que leia um n�mero e informe se ele � divis�vel por 2,
        por 3 ou por 5, ou se n�o  � divis�vel por nenhum deles.
        */

int main(){

    setlocale(LC_ALL,"");

    int num;

    printf("Digite um valor qualquer: ");
    scanf(&"%d", &num);

    //10 % 2/3/5
    if(num % 2 == 0 || num % 3 == 0 || num % 3 == 0)
        printf("� divis�vel por 2, 3 ou 5.\n");
    else
        printf("N�o � divis�vel por 2, 3 e 5.\n");





    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
