#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*                  Aula 30
            Tabela  ascii e acentua��o
            1 byte (8 bits) -> -128 at� 127
            unsigned 1 byte -> 0 at� 255

            9 � o caractere de tabula��o \t.
            10 � o caractere de nova linha \n.
            65 � a letra A mais�cula.
            66 � a letra B mai�scula.
            90 � a letra Z mai�scula.

            1� setelocale(LC_ALL, NULL); //padr�o da linguagem C
            2� setelocale(LC_ALL, ""); // padr�o do  sistema operacional
            3� setelocale(LC_ALL, "Portuguese"); //Portugu�s brasileiro
        */

int main(){

    setlocale(LC_ALL,"");

    printf("\nCora��o\n");
    printf("%s\n", setlocale(LC_ALL,"Portuguese"));



    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
