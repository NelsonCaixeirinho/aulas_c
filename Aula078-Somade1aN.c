#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 78; Exercicio 09
         Fa�a um programa que calcule o valor de A, dado por:
        A = 1 + 2 + 3 + 4 + � + n, onde n � um n�mero inteiro,
        maior que zero informado pelo usu�rio.

*/



int main(){

    setlocale(LC_ALL,"");
    int i, n, A = 0;

    do{
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);
    }while(n < 1);

    for(i = 1; i <= n; i++)
        A = A + i;

    printf("Soma de 1 at� %d: %d\n\n", n, A);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
