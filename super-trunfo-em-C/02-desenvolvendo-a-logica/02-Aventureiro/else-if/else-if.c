#include <stdio.h>

int main(){

    // int idade = 59;

    // if(idade < 12){
    //     printf("voce é uma criança!\n");

    // } else if (idade >= 12 && idade < 18){
    //     printf("Você é um adolescente\n");

    // } else if(idade >= 18 && idade < 60){
    //     printf("Você é um Adulto!\n");

    // } else
    //     printf("Valeu idoso!\n");
    

    int nota;

    printf("Digite sua nota: ");
    scanf("%i", &nota);

    if(nota >= 90){
        printf("Conceito A\n");

    } else if ("nota >= 80"){
        printf("Conceito B\n");

    } else if(nota >= 70){
        printf("Conceito C\n");

    }else if (nota >= 60){
        printf("Conceito B\n");
    } else {
        printf("Burrão\n");
    }


}