#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 56:Exercicio 06
    O IMC, Pode ser calculado dividindo-se o  peso da pessoa
    pela Altura elevada ao quadrado (imc=m/h^).
    Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o
     IMC e a faixa em que o individuo se enquadra de acordo com a tabela abaixo:

                IMC                  Interpretação
    Menor que 18,5                   Abaixo do peso
    Entre 25 e menor que 25          Peso normal
    Entre 25 e menor que 30          Acima do peso
    Entre 30 e menor que 35          Obesidade grau 1
    Entre 35 e menor que 40          Obesidade grau 2
    Maior ou igual a 40              Obesidade grau 3
        */

int main(){

    setlocale(LC_ALL,"");

    float peso, altura, imc;

    printf("\n\t\tDigite o seu Peso: ");
    scanf("%f", &peso);
    printf("\t\tDigite a sua Altura: ");
    scanf("%f", &altura);

    imc = peso / ( altura * altura );

    if( imc < 18.5 )
        printf("\n\n\t\tIMC: %.2f\t\tAbaixo do peso\n\n\n\n", imc);
    else if( imc >= 18.5 && imc < 25)
        printf("\n\n\t\tIMC: %.2f\t\tPeso normal\n\n\n\n", imc);
    else if( imc >= 25 && imc < 30)
        printf("\n\n\t\tIMC: %.2f\t\tAcima do peso!\n\n\n\n", imc);
    else if( imc >= 30 && imc < 35 )
        printf("\n\n\t\tIMC: %.2f\t\tObesidade grau 1 !!\n\n\n\n", imc);
    else if( imc >= 35  && imc < 40)
        printf("\n\n\t\tIMC: %.2f\t\tObesidade grau 2 !!!\n\n\n\n", imc);
    else
        printf("\n\n\t\tIMC: %.2f\t\tObesidade grau 3, Consulte o seu médico!!!\n\n\n\n", imc);



    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
