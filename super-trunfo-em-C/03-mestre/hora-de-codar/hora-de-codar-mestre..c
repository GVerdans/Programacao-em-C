#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroMaquina, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroMaquina = rand() % 100 + 1;

    // Inicio do Game
    printf("Bem-Vindo ao jogo 'adivinhe o numero e saiba se ganhou ou perdeu =]'\n");
    printf("Escolha um numero e um tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    
    printf("Escolha a compração: ");
    scanf("%c", &tipoComparacao);
    
    printf("Digite um numero: ");
    scanf("%d", &numeroJogador);
    
    // Print do numero da maquina.
    // printf("Numero da Máquina é: %d\n", numeroMaquina);
    
    
    switch(tipoComparacao){
        case 'M':
        case 'm':
        printf("Você Escolheu a opção MAIOR\n");
        resultado = numeroJogador > numeroMaquina ? 1 : 0;
        
        break;
        
        case 'N':
        case 'n':
        printf("Você Escolheu a opção MENOR\n");
        resultado = numeroJogador < numeroMaquina ? 1 : 0;
        break;
        
        case 'I':
        case 'i':
        printf("Você Escolheu a opção IGUAL\n");
        resultado = numeroJogador == numeroMaquina ? 1 : 0;
        break;
        
        
        default:
        printf("opção Inválida !\n");
        break;
    }
    
    printf("Numero da Máquina é: '%d' e o do Jogador é: '%d'\n", numeroMaquina, numeroJogador);

    if(resultado == 1){
        printf("Você Venceu !\n");
    } else {
        printf("Você Perdeu buxa !\n");
    }
}