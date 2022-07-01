#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 67; Estrutura de Repetição While(enquanto)
        */
int main(){

    setlocale(LC_ALL,"");

    int valor;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    //enquanto(valor  <= 0)
    while(valor <= 0){
        printf("Valor inválido! Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("Valor lido: %d\n\n", valor);

    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
