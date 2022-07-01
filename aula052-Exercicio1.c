#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                Aula 52: Exercicio  01
            Escreva um programa em C que leia três valores e
            apresente qual é o maior  e qual é o menor.

*/

int main(){

    setlocale(LC_ALL,"");

    int a, b, c, menor, maior, men,  mai;

    printf("Digite primeiro valor inteiro: ");
    scanf("%d", &a);
    printf("Digite primeiro valor inteiro: ");
    scanf("%d", &b);
    printf("Digite primeiro valor inteiro: ");
    scanf("%d", &c);

    //Primeira solução
    if(a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }
    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }

    if(a > b){
        if(a > c)
            maior = a;
        else
            maior = c;
    }

    else{
        if(b > c)
            maior =  b;
        else
            maior = c;
    }
    printf("Primeira versão\tMenor: %d\tMaior: \%d\n", menor, maior);

    //Segunda versão

    men = a;
    mai = a;

    if(men > b)
        men = b;
    if (men > c)
        men = c;

    if(mai < b)
        mai = b;
    if(mai < c)
        mai = c;

    printf("Segunda versão\tMenor: %d\tMaior: %d\n", men, mai);


    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
