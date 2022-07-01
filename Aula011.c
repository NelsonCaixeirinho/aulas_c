#include <stdio.h>
#include <stdlib.h>

/*
            Aula 11
    Ler sexo, idade, peso e altura

*/

int main(){

    char sexo;
    int idade;
    float peso, altura;

    printf("\nDigite sexo [F/M], idade, peso e altura:\n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

    printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);



    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
