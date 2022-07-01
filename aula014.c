#include <stdio.h>
#include <stdlib.h>

/*              Aula 14
        Lêr dois carateres
*/

int main(){

    char a, b;

    printf("Digite a primeira letra: ");
    scanf("%c", &a);

    // Buffer =>  \n posso substituir o espaço por
    // scanf("");
    // vai ocupar na memória o ENTER, e não mando imprimir "printf", assim não aparece

    printf("Digite a segunda letra: ");
    scanf(" %c", &b); // e assim posso retirar o espaço

    // Qualquer tecla ou o \n ocupa espaço no Buffer do Teclado, e vai colocar na variavél
    // Espaço entre os %c -> Comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
    // fflush(); Só funciona  no Windows,


    printf("\nPrimeira letra: %c\nSegunda letra: %c\n", a,  b);



    printf("\nPressione qualquer tecla para finalizar ...");
    getchar();


    return 0;
}
