#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 39: Decisão simples
            Verificando se um número é negativo

            Brasília é a capital do Brasil? Sim = 1 Não = 0
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\nValor negativo!\n");
    printf("\nContinuação do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
