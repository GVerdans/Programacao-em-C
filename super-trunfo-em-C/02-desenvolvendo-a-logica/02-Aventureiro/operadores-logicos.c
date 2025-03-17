/*
OPERADORES LÓGICOS || PRECEDENCIA

! - NOT            || 1⁰
&& - E             || 2⁰
|| - OU            || 3⁰

*/

#include <stdio.h>

int main(){

    
    int idade = 20;
    float altura = 1.69;
    
    if(idade >= 18 && idade <= 30 && altura > 1.70){
        printf("Voce está na faixa etária e tem a altura acima de 1.70\n");
    } else {
        printf("Você não atende aos requisitos!\n");
    }
}