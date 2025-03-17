#include <stdio.h>

int main(){

    int idade = 59;

    if(idade < 12){
        printf("voce é uma criança!\n");

    } else if (idade >= 12 && idade < 18){
        printf("Você é um adolescente\n");

    } else if(idade >= 18 && idade < 60){
        printf("Você é um Adulto!\n");

    } else
        printf("Valeu idoso!\n");
    
}