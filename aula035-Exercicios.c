#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 35
        5) Uma empresa contrata um encanador a 45�/dia. fa�a um programa que solicite o n�mero
        de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga, sabendo
        que s�o descontados 8% para imposto de renda.
        */

int main(){

    setlocale(LC_ALL,"");

    float dias, desc, total, mobra = 45;

    printf("\nDigite o n�mero de dias de trabalho: ");
    scanf("%f", &dias);

    total = (dias * 45);
    desc = total * 8/100;
    total  -= desc;
    printf("\nTotal a receber = %.2f Euros", total);


    /*
    float despesa, gorjeta, total;
    int pessoas;

    printf("\nAlmo�o: ", despesa);
    scanf("%f", &despesa);

    printf("\nGorjeta: ", gorjeta);
    scanf("\n%f", &gorjeta);

    total = (despesa * gorjeta/100) + despesa;


    printf("\nTotal %.2f", total);
    printf("\n\nN�mero de pessoas a repartir: ");
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
