#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*              Aula 81; Exercicio 12
         Para uma turma de 45 alunos, construa um algoritmo que determine:
        a) A idade média dos alunos com menos de 1,70m de altura;
        b) A altura média dos alunos com mais de 20 anos.


*/



int main(){

    setlocale(LC_ALL,"");
    int i, idade, idadeBaixinhos = 0, quantIdadeBaix = 0, quantAlturaMaior20 = 0;
    float idadeMedia, alturaMedia, altura, alturaMais20 = 0;

    for(i = 1; i <= 4; i++){
        printf("Idade           : ");
        scanf("%d", &idade);
        printf("Altura(metros)  : ");
        scanf("%f", &altura);

        //Solução de a)
        if(altura < 1.7){
            idadeBaixinhos += idade;
            quantIdadeBaix++;
        }

        //Solução b)
        if(idade > 20){
            alturaMais20 += altura;
            quantAlturaMaior20++;
        }

    }
    idadeMedia = (float)idadeBaixinhos / quantIdadeBaix;
    alturaMedia = alturaMais20 / quantAlturaMaior20;
    printf("Idade média dos alunos com menos de 1,70m de altura: %.2f\n", idadeMedia);
    printf("Altura média dos alunos com mais de 20 anos: %.2f\n", alturaMedia);

    printf("\n\n\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
