#include <stdio.h>

int main(){

    int idade;
    float altura;
    char nome[20];
    char opcao;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu Nome: \n");
    scanf("%s", nome);

    printf("Digite sua opcao: \n");
    scanf(" %c", &opcao);

    printf("A idade é: %d \n", idade);
    printf("A altura é: %.2f \n", altura);
    printf("O nome é: %s \n", nome);
    printf("A opção é: %c \n", opcao);

}


/* 

%d -> Inteiro no formato decimal
%i -> Eaquivalente ao %d
%f -> Ponto flutuante
%e -> Ponto Flutuante no notação cientifica
%c -> Unico Caractere
%s -> Imprime uma cadeia de string


printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

*/