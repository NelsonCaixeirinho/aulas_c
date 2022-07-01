#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 77; Exercicio 08
         Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
        um menu ao usu�rio da seguinte forma:
1 � Somar
2 � Subtrair
3 � Multiplicar
4 � Dividir
0 � Sair
        Uma estrutura do tipo switch deve ser utilizada para realizar cada opera��o em um case. Ap�s a
        escolha da opera��o, dois valores devem ser pedidos ao usu�rio para realizar a opera��o escolhida.
        Se a opera��o escolhida for a 4 o dividendo n�o pode ser zero, um novo valor deve ser solicitado. O
        programa deve funcionar at� que o usu�rio escolha a op��o 0 (op��o de sa�da).

*/



int main(){

    setlocale(LC_ALL,"");
    int opcao, num1, num2;

    do
    {
        printf("\n\t\t1 - Soma\n\t\t2 - Subtrac��o\n\t\t3 - Multiplica��o\n\t\t4 - Divis�o\n\t\t0 - Sair\n\n\t\t");
        scanf("%d", &opcao);

        if(opcao >0 && opcao < 5){
        printf("\n\tDigite o 1� valor: ");
        scanf("%d", &num1);

        printf("\tDigite o 2� valor: ");
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
            printf("\n\tSubtrac��o: %d\n", num1 - num2);
            break;
        case 3:
            printf("\n\tMultiplica��o: %d\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0)
            {
                printf("N�o existe divis�o por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("\m\tDivis�o: %d\n", num1 / num2);
            break;
        default:
            printf("\n\tOp��o inv�lida.\nDigite outra op��o: ");
        }
    } while(opcao != 0);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
