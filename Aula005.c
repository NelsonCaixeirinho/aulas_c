#include <stdio.h>
#include <stdlib.h>

/*
            Aula 5
    Lendo n�meros reais
*/

int main(){

    // Tipo nome
    float numero = 3.1415;

    printf("\nO valor da variavel: %.4f\n", numero);

    printf("\nDigite um numero real: ");
    scanf("%f", &numero);

    printf("\nValor lido: %.2f", numero);

    /*
    int valor, valor2;//Criei uma variav�l para guardar um valor do tipo inteiro

    //Atribui��o -> atribuir um valor a uma variav�l
    valor = 50;


    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor: ");
    scanf("%d", &valor2);


    printf("\n\nValor da minha variavel: %d\n\nSegundo  valor: %d\n\n", valor, valor2);
    */


    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
