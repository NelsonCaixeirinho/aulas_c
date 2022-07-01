#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 80; Exercicio 11
         Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
        massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
        se torne menor que 0,05 gramas.

*/



int main(){

    setlocale(LC_ALL,"");

    float massa;
    int tempo = 0;

    printf("Digite a massa inicial em gramas: ");
    scanf("%f", &massa);

    while(massa >= 0.05){
        massa /= 2;
        tempo += 50;
    }

    printf("Massa  final: %f\n", massa);
    printf("Tempo decorrido  foi de %d segundos.\n\n", tempo);


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
