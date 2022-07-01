#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 41: Verdadeiro e falso na linguagem C

*/

int main(){

    setlocale(LC_ALL,"");

    float a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%f", &a);

    printf("\nResultado logico: %f\n", a < 0);

    if(a < 0 == 1)
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n");
    printf("\nContinuação do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
