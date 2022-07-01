#include <stdio.h>
#include <stdlib.h>

/*                  Aula 22
        Operador long para o tipo double
        double -> %lf
        long  double -> %Lf

        __mingw_printf();
*/

int main(){

    float x = 3.1415;

    double y = 3.14159265358979323846;

    long double z = 3.14159265358979323846;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    printf("Valor de y: %lf\n", y);
    printf("Valor de y: %.48lf\n", y);
    printf("Valor de z: %Lf\n", z); //só em Mac   ou Linux
    __mingw_printf("Valor de z: %.48Lf\n", z);
    printf("Um long double precisa de %d bytes de memoria. \n", sizeof y);


    // 8 * 8 = 64 bits

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
