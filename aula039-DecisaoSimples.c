#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 39: Decis�o simples
            Verificando se um n�mero � negativo

            Bras�lia � a capital do Brasil? Sim = 1 N�o = 0
*/

int main(){

    setlocale(LC_ALL,"");

    int a = 10;

    printf("\n\Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\nValor negativo!\n");
    printf("\nContinua��o do programa...\n");


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
