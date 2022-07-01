#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 31-3
            Lista  de exercicio
        */

int main(){

    setlocale(LC_ALL,"");

    float despesa, gorjeta, total;
    int pessoas;

    printf("\nAlmoço: ", despesa);
    scanf("%f", &despesa);

    printf("\nGorjeta: ", gorjeta);
    scanf("\n%f", &gorjeta);

    total = (despesa * gorjeta/100) + despesa;


    printf("\nTotal %.2f", total);
    printf("\n\nNúmero de pessoas a repartir: ");
    scanf("\n%d", &pessoas);

    printf("\nValor a pagar  por pessoa: %.2f Euros", (total / pessoas));



    /*printf("\n\tO valor de a = %d\n\tO valor de b = %d", a, b);
    printf("\nDigite dois valores inteiros; ");
    scanf("\n%d\n%d", &a, &b);
    printf("\n\tO valor de a = %d\n\tO valor de b = %d", a, b);
*/

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
