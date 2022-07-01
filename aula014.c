#include <stdio.h>
#include <stdlib.h>

/*              Aula 14
        L�r dois carateres
*/

int main(){

    char a, b;

    printf("Digite a primeira letra: ");
    scanf("%c", &a);

    // Buffer =>  \n posso substituir o espa�o por
    // scanf("");
    // vai ocupar na mem�ria o ENTER, e n�o mando imprimir "printf", assim n�o aparece

    printf("Digite a segunda letra: ");
    scanf(" %c", &b); // e assim posso retirar o espa�o

    // Qualquer tecla ou o \n ocupa espa�o no Buffer do Teclado, e vai colocar na variav�l
    // Espa�o entre os %c -> Comando para o computador desconsiderar o ENTER, o TAB e o ESPA�O
    // fflush(); S� funciona  no Windows,


    printf("\nPrimeira letra: %c\nSegunda letra: %c\n", a,  b);



    printf("\nPressione qualquer tecla para finalizar ...");
    getchar();


    return 0;
}
