#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 60:Exercicio 09
        Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja
        calcular a partir de tr�s notas. Fa�a um programa que  leia as notas e o tipo
        da m�dia escolhida pelo usu�rio e calcule a presente m�dia:
        Op��es:
        � `a� - Atm�tica.
        � `p� - Ponderada  (pesos; 3,3,4).
        */

int main()
{

    setlocale(LC_ALL,"");

    float nota, nota1, nota2, opcao;
    char escolha;

    printf("Qual � a m�dia?\na - Aritm�tica\np - Ponderada\n");
    scanf("%c", &escolha);

    if(escolha == 'a' || escolha == 'A' || escolha == 'p' || escolha == 'P'){
        printf("Digita a 1� nota: ");
        scanf("%f", &nota);

        printf("Digite a 2� nota1: ");
        scanf("%f", &nota1);

        printf("Digite a 3� nota2: ");
        scanf("%f", &nota2);
    }

    if( escolha == 'a' || escolha == 'A' )
        printf("M�dia Aritm�tica: %.2f\n", (nota + nota1 + nota2) / 3);
    else
        if(escolha == 'p' || escolha == 'P')
            printf("M�dia Ponderada: %.2f\n", ( nota * 3 + nota1  * 3 + nota2 * 4) / 10);
        else
            printf("\nOp��o Inv�lida!!!\n");











    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
