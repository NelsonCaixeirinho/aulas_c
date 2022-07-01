#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 63:Exeercicio 10
        Fa�a um programa que, dado tr�s valores a, b e c, verifique se  eles podem ser os
        comprimentos dos lados de um tri�ngulo. Caso positivo, seu programa deve informar
        tamb�m se o tri�ngulo � equil�tero, is�sceles ou escaleno. Caso contr�rio, seu
        programa deve escrever a mensagem "N�o formam um tri�ngulo".
        LEMBRETES:
        Equil�tero: 3 lados iguais
        Is�sceles: 2 lados iguais
        Escaleno: 3 lados diferentes
        */

int main(){

    setlocale(LC_ALL,"");

    int a,  b, c;

    printf("\n\t\tDigite o 1� valor: ");
    scanf("%d", &a);

    printf("\t\tDigite o 2� valor: ");
    scanf("%d", &b);

    printf("\t\tDigite o 3� valor: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("\n\n\t\t\Os 3 lados formam um tri�ngulo!\n");
        if(a == b && a == c)
            printf("Equil�tero\n");
        else
            if( a == b || a == c || b == c)
                printf("Is�sceles\n");
            else
                printf("Escaleno\n");

        }
    else
        printf("\n\n\t\tOs 3 lados n�o formam um tri�ngulo!\n");



    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
