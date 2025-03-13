#include <stdio.h>

int main() {

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    printf("Digite sua matrícula: ");
    scanf("%i", &matricula);

    printf("Seu nome é: %s - Sua idade é: %i - Sua altura é: %.2f - Sua matrícula é: %i\n", nome, idade, altura, matricula);

    return 0;
}