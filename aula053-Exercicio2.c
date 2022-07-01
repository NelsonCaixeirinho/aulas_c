#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 53: Exercício 02
            Escreva um programa em C que lê 5 números inteiros, um de cada vez.
            conte quantos destes valores são negativos  e quantos são positivos.
            No final, imprima no ecrã a quantidade de números negativos e positivos.
*/

int main(){

    setlocale(LC_ALL,"");

    int num1,  num2,  num3, num4, num5, positivos = 0, negativos = 0;

    printf("\n\t\t\tDigite o primeiro número inteiro:\t ");
    scanf("%d", &num1);
    printf("\t\t\tDigite o segundo número inteiro :\t ");
    scanf("%d", &num2);
    printf("\t\t\tDigite o terceiro número inteiro:\t ");
    scanf("%d", &num3);
    printf("\t\t\tDigite o quarto número inteiro  :\t ");
    scanf("%d", &num4);
    printf("\t\t\tFigite o quinto número inteiro  :\t ");
    scanf("%d", &num5);

    if(num1 < 0)
        negativos++; // negativos +=  1;
    else
        positivos++; // positivos +=  1;
    if(num2 < 0)
        negativos += 1;
    else
        positivos += 1;
    if(num3 < 0)
        negativos += 1;
    else
        positivos += 1;
    if(num4 < 0)
        negativos += 1;
    else
        positivos += 1;
    if(num5 < 0)
        negativos += 1;
    else
        positivos += 1;

    printf("\n\n\t\t\t\t\tPositivos: %d\n\t\t\t\t\tNegativos: %d\n\n\n\n", positivos, negativos);


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
