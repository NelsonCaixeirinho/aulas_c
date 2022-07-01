#include <stdio.h>
#include <stdlib.h>

/*                  Aula 23
        Caracteres de escape
        Quebra linha -> \n
        Tabulação    -> \t
        Aspa dupla   -> \"
        Aspa simples -> \'
        Contrabarra  -> \\
*/

int main(){

    printf("\n\n\t\\Isto e uma \"mensagem\" a ser impressa na tela.\n\n");

    printf("\nPressione qualquer tecla para finalizar...");
    getchar();

    return 0;
}
