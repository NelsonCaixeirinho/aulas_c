#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 68; Estrutura de repetição do {}while(faça enquanto)
*/
int main(){

    setlocale(LC_ALL,"");

    int valor, valor2;

    printf("Digite  um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){
        printf("Valor inválido! Digite um valor  maior que zero: ");
        scanf("%d", &valor);

    }

    printf("Valor lido: %d\n\n", valor);

    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d", &valor2);
    }while(valor2 <= 0);

    printf("Valor lido: %d\n\n", valor2);


    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
