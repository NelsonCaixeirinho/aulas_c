#include <stdio.h>
#include <stdlib.h>

/*
            Aula 12
    Ler sexo, idade, peso e altura

*/

int main(){

    char sexo;
    int idade;
    float peso, altura;

    printf("\nDigite idade, peso e altura, sexo [F/M]:\n");
    scanf("%d %f %f %c", &idade, &peso, &altura, &sexo);

    printf("\nIdade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

    // Buffer do teclado =>

    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
