#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Lista de Exercicios III:
        Elabore um programa em C para l�r um n�mero de 1 a 10
        e que apresente a Tabuada desse n�mero:
                */



int main(){

    setlocale(LC_ALL,"");




    int i, num;


    do{
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &num);
    }while(num < 1 || num > 10);
        printf("N�mero Inv�lido");

    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);



    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
