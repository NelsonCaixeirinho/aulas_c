#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                Aula 50: Estrutura de selec��o switch case
                op��es  - 1 = cadastrar produto
                        - 2 = vender produto
                        - 3 = buscar produto
                        - 4 =imprimir relat�rio
                        - 0 = sair

*/

int main(){

    setlocale(LC_ALL,"");

    int opcao;

    printf("\t1 - Cadastrar produto\n\t2 - Vender produto\n\t3 - Buscar produto\n\t4 - Imprimir\n\n\t0 - Sair\n\n\t");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("\nCadastrando novo produto.\n");
        break;
    case 2:
        printf("\nVendendo um novo produto.\n");
        break;
    case 3:
        printf("\nBuscando um novo produto.\n");
        break;
    case 4:
        printf("\nImprimindo.\n");
        break;
    case 0:
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOp��o inv�lida!!!\n");
    }

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
