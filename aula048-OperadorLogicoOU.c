#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
                        Aula 48; Operador lógico ou (||)
                        TABELA  VERDADE a   b   a & b
                                        v   v     v
                                        v   f     v
                                        f   v     v
                                        F   F     F
*/

int main(){

    setlocale(LC_ALL,"");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade <= 5 || idade >= 60)
        printf("\n\tTem direito a passe livre!\n");
    else
        printf("\n\tNão tem direito a passe livre, ainda!\n");

    printf("\nPressione qualquer tecla para finalizar...\n");
    getchar();

    return 0;
}
