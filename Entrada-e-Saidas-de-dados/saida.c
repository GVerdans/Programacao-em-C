#include <stdio.h>

int main(){
    int idade = 27;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Gabriel";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura); // Esse .2f é tipo o toFixed(2). Duas casas decimais.
    printf("A idade opção é: %c\n", opcao);
    
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