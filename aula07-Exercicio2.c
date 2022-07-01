#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 70: Escreva um programa que repita a leitura de uma senha até que ela
        seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem
        “Senha Invalida”. Quando a senha for informada corretamente deve ser impressa a
        mensagem “Acesso Permitido” e o programa deve serencerrado. Considere que a senha
        correta é o valor 123456.
                */



int main(){

    setlocale(LC_ALL,"");



    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
