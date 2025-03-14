#include <stdio.h>

int main(){

    int num1, num2;
    int soma, subi, multi, divi;
    
    
    printf("Digite o primeiro numero para as operações: \n");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero para as operações: \n");
    scanf("%i", &num2);
    
    soma = num1 + num2;
    subi = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subi);
    printf("A multiplicação é: %d\n", multi);
    printf("A divisão é: %d\n\n", divi);
}