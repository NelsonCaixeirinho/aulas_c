#include <stdio.h>
#include <stdlib.h>

/*              Aula 13
        L�r dois carateres
*/

int main(){

    char a, b;

    printf("Digite a duas letras: ");
    scanf("%c %c", &a, &b);

    // Qualquer tecla ou o \n ocupa espa�o no Buffer do Teclado, e vai colocar na variav�l
    // Espa�o entre os %c -> Comando para o computador desconsiderar o ENTER, o TAB e o ESPA�O
    // fflush(); S� funciona  no Windows,


    printf("\nPrimeira letra: %c\nSegunda letra: %c\n", a,  b);



    printf("\nPressione qualquer tecla para finalizar ...");
    getchar();


    return 0;
}
