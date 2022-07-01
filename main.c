#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 83; Exercicio 13
        13) Faça um programa que peça ao usuário um número inteiro maior que 1 e diga se o número
        informado é primo ou não.

        1ª Qual a definição  de número primo? 2, 3, 463
*/

int main(){

    setlocale(LC_ALL,"");

    int numero, i, divisores = 0, opcao;


    do{
        do{
            printf("Digite um número inteiro maior que 1: ");
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
            printf("%d não é  primo\n", numero);
        else
            printf("%d é primo\n", numero);
        printf("\n1 - Digitar outro valor\n2 - Sair\n");
        scanf("%d", &opcao);
    }while(opcao != 2);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


}
