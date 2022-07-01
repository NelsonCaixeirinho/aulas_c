#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 47; Operador lógico e (&)
                        TABELA  VERDADE a   b   a & b
                                        V   V     V
                                        v   f     f
                                        f   v     f
                                        f   f     f
*/

int main(){

    setlocale(LC_ALL,"");

    int idade;
    char sexo;

    printf("Digte o seu sexo [f/m]: ");
    scanf("%c", &sexo);
    printf("\nIdade: ");
    scanf("%d", &idade);


    if(sexo == 'm' && idade == 18)
       printf("Alistamento obtigatório!\n");
    else
        printf("Dispensado!\n");

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
