#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 40: Decisão completa
            Verificando se um número é negativo

*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    /*
        se(a < 0)
            verdadeiro
        senão
            falso
    */

    if(a < 0)
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n");
    printf("\nContinuação do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
