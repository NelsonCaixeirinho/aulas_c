#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 83; Exercicio 13
        13) Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 1 e diga se o n�mero
        informado � primo ou n�o.

        1� Qual a defini��o  de n�mero primo? 2, 3, 463
*/

int main(){

    setlocale(LC_ALL,"");

    int numero, i, divisores = 0, opcao;


    do{
        do{
            printf("Digite um n�mero inteiro maior que 1: ");
            scanf("%d", &numero);
        }while(numero < 2);

        printf("Divisores  de %d: ", numero);
        for(i = 2; i <= numero/2; i++){
            if(numero % i == 0){
                printf("%d ", i);
                divisores++;
            }
        }
        printf("\n");

        if(divisores > 2)
            printf("%d n�o �  primo\n", numero);
        else
            printf("%d � primo\n", numero);
        printf("\n1 - Digitar outro valor\n2 - Sair\n");
        scanf("%d", &opcao);
    }while(opcao != 2);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


}
