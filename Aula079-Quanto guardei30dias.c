#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 79; Exercicio 10
         Voc� decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
        centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
        dia, e assim por diante. Fa�a um programa para calcular quanto voc� ter� ao final dos 30 dias.

*/



int main(){

    setlocale(LC_ALL,"");

    int i, valorInicial = 1, valorFinal = 1;

    for( i = 1; i < 30; i++ ){
        valorInicial = valorInicial * 2;
        valorFinal += valorInicial;
    }

    printf("Valor em centimos: %d\n", valorFinal);
    printf("%.2f\n\n", valorFinal / 100.0);

    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
