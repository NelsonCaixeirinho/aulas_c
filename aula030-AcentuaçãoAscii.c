#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 30
            Tabela  ascii e acentuação
            1 byte (8 bits) -> -128 até 127
            unsigned 1 byte -> 0 até 255

            9 é o caractere de tabulação \t.
            10 é o caractere de nova linha \n.
            65 é a letra A maisúcula.
            66 é a letra B maiúscula.
            90 é a letra Z maiúscula.

            1ª setelocale(LC_ALL, NULL); //padrão da linguagem C
            2ª setelocale(LC_ALL, ""); // padrão do  sistema operacional
            3ª setelocale(LC_ALL, "Portuguese"); //Português brasileiro
        */

int main(){

    setlocale(LC_ALL,"");

    printf("\nCoração\n");
    printf("%s\n", setlocale(LC_ALL,"Portuguese"));



    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
