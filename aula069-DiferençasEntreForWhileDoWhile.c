#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 69: Diferenças entre for, while e do{}while
                */



int main(){

    setlocale(LC_ALL,"");

    int i = 0;

    do{
        printf("Digite um valor maior quer zero: ");
        scanf("%d", &i);
    }while(i <= 0);

    printf("\n\n\t\tValor lido: %d\n\n", i);

    /*
    printf("\n\t\tGerado com for  : ");
    for( i = 0; i <= 10; i++ )
        printf("%d ", i);

    i = 0;

    printf("\n\n\t\tGerado com while: ");
    while( i <= 10){
        printf("%d ", i++);
    }
    */


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
