#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 74: Exercicio 05
         Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
        imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
        pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/



int main(){

    setlocale(LC_ALL,"");

    float nota1, nota2, media;


    do{
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    }while (nota1 < 0 || nota1 > 10);

    do{
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);
    }while (nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final %.2f\n", media);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
