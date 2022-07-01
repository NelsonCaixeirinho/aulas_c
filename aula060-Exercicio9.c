#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 60:Exercicio 09
        Um usuário deseja um programa onde possa escolher que tipo de média deseja
        calcular a partir de três notas. Faça um programa que  leia as notas e o tipo
        da média escolhida pelo usuário e calcule a presente média:
        Opções:
        º `a´ - Atmética.
        º `p´ - Ponderada  (pesos; 3,3,4).
        */

int main()
{

    setlocale(LC_ALL,"");

    float nota, nota1, nota2, opcao;
    char escolha;

    printf("Qual é a média?\na - Aritmética\np - Ponderada\n");
    scanf("%c", &escolha);

    if(escolha == 'a' || escolha == 'A' || escolha == 'p' || escolha == 'P'){
        printf("Digita a 1ª nota: ");
        scanf("%f", &nota);

        printf("Digite a 2ª nota1: ");
        scanf("%f", &nota1);

        printf("Digite a 3ª nota2: ");
        scanf("%f", &nota2);
    }

    if( escolha == 'a' || escolha == 'A' )
        printf("Média Aritmética: %.2f\n", (nota + nota1 + nota2) / 3);
    else
        if(escolha == 'p' || escolha == 'P')
            printf("Média Ponderada: %.2f\n", ( nota * 3 + nota1  * 3 + nota2 * 4) / 10);
        else
            printf("\nOpção Inválida!!!\n");











    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
