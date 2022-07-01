#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 72: Exercicio 03
         Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
        Restrição:
        -> O bloco de repetição deve executar no máximo 500 vezes.
*/



int main(){

    setlocale(LC_ALL,"");

    int i, soma = 0;

    for(i = 1; i <= 1000; i+=2){// vai excutar 500
        soma += i; // soma = soma + i -> 500
        printf("%3d ", i);}


    printf("Soma dos impares de 1 a 1000: %d\n\n", soma);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
