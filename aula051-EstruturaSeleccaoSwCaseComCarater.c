#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                Aula 51: Estrutura de selecção switch case com carater
                opções  - a = cadastrar produto
                        - b = vender produto
                        - c = buscar produto
                        - d =imprimir relatório
                        - z = sair

*/

int main(){

    setlocale(LC_ALL,"");

    char opcao;

    printf("\ta - Cadastrar produto\n\tb - Vender produto\n\tc - Buscar produto\n\td - Imprimir\n\n\tz - Sair\n\n\t");
    scanf("%c", &opcao);

    switch(opcao){
    case 'a':
        printf("\nCadastrando novo produto.\n");
        break;
    case 'b':
        printf("\nVendendo um novo produto.\n");
        break;
    case 'c':
        printf("\nBuscando um novo produto.\n");
        break;
    case 'd':
        printf("\nImprimindo.\n");
        break;
    case 'z':
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpção inválida!!!\n");
    }

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
