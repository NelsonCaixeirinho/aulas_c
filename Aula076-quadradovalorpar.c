#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 76; Exercicio 07
        Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
        inclusive N, se for o caso.

*/



int main(){

    setlocale(LC_ALL,"");

    int i, n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2)
       printf("%d ", i * i);
    printf("\n\n");


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
