#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 77; Exercicio 08
         Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
        um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair
        Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
        escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
        Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
        programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).

*/



int main(){

    setlocale(LC_ALL,"");
    int opcao, num1, num2;

    do
    {
        printf("\n\t\t1 - Soma\n\t\t2 - Subtracção\n\t\t3 - Multiplicação\n\t\t4 - Divisão\n\t\t0 - Sair\n\n\t\t");
        scanf("%d", &opcao);

        if(opcao >0 && opcao < 5){
        printf("\n\tDigite o 1º valor: ");
        scanf("%d", &num1);

        printf("\tDigite o 2º valor: ");
        scanf("%d", &num2);
        }
        switch(opcao)
        {
        case 0:
            printf("\n\tSaindo...\n");
            break;
        case 1:
            printf("\n\tSoma: %d\n", num1 + num2);
            break;
        case 2:
            printf("\n\tSubtracção: %d\n", num1 - num2);
            break;
        case 3:
            printf("\n\tMultiplicação: %d\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0)
            {
                printf("Não existe divisão por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("\m\tDivisão: %d\n", num1 / num2);
            break;
        default:
            printf("\n\tOpção inválida.\nDigite outra opção: ");
        }
    } while(opcao != 0);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
