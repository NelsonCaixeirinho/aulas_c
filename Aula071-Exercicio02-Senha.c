#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 71: Exercicio 02
        Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura
        de senha incorreta informada, escrever a mensagem �Senha Invalida�. Quando a senha for
        informada corretamente deve ser impressa a mensagem �Acesso Permitido� e o programa deve ser
        encerrado. Considere que a senha correta � o valor 123456.
*/



int main(){

    setlocale(LC_ALL,"");

    int senha, senhaValida = 123456;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while(senha != senhaValida ){
        printf("Senha inv�lida!\n\nDigite a sua senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");


    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
