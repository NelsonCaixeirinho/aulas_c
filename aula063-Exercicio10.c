#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 63:Exeercicio 10
        Faça um programa que, dado três valores a, b e c, verifique se  eles podem ser os
        comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar
        também se o triângulo é equilátero, isósceles ou escaleno. Caso contrário, seu
        programa deve escrever a mensagem "Não formam um triângulo".
        LEMBRETES:
        Equilátero: 3 lados iguais
        Isósceles: 2 lados iguais
        Escaleno: 3 lados diferentes
        */

int main(){

    setlocale(LC_ALL,"");

    int a,  b, c;

    printf("\n\t\tDigite o 1º valor: ");
    scanf("%d", &a);

    printf("\t\tDigite o 2º valor: ");
    scanf("%d", &b);

    printf("\t\tDigite o 3ª valor: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("\n\n\t\t\Os 3 lados formam um triângulo!\n");
        if(a == b && a == c)
            printf("Equilátero\n");
        else
            if( a == b || a == c || b == c)
                printf("Isósceles\n");
            else
                printf("Escaleno\n");

        }
    else
        printf("\n\n\t\tOs 3 lados não formam um triângulo!\n");



    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
