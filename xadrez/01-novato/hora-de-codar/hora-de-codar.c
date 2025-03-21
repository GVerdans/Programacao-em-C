#include <stdio.h>

int main(){
    // EXEMPLO DE UTILIZAÇÃO WHILE ****************************************************
    // int i = 0;

    // printf("Numeros pares:\n");

    // while(i <= 10){

    //     if(i % 2 == 0){
    //         printf("%d\n", i);
    //     }

    //     i++;
    // }

    // EXEMPLO DE UTILIZAÇÃO DO-WHILE ****************************************************

    // int numero;

    // do
    // {
    //     printf("Digite um numero 'par' para sair do programa !\n");
    //     scanf("%d", &numero);

    //     if (numero % 2 == 0)
    //     {
    //         printf("%d é par\n", numero);
    //     }
    //     else
    //     {
    //         printf("%d é ímpar\n", numero);
    //     }

    // } while (numero % 2 != 0);

    // printf("Voce digitou um numero par, saindo do programa !\n");


    // EXEMPLO DE UTILIZAÇÃO DE 'FOR'.
    int numero, i;

    printf("Digite um numero para ser gerada a Tabuada !\n");
    scanf("%d", &numero);

    printf("===================\n");
    printf("|| Tábuada de %d ||\n", numero);
    printf("===================\n");


    for(i = 0 ; i <= 10; i++){
        printf("%d x %d = %d \n", numero, i, i * numero);
    }

    return 0;
}