#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int opcao, numeroSecreto, palpite;

printf("======================\n");
printf("|| Menu Principal    ||\n");
printf("======================\n");
printf("|| 1 - Iniciar Jogo  ||\n");
printf("|| 2 - Ver Regras    ||\n");
printf("|| 3 - Sair          ||\n");
printf("======================\n");
printf("|| Escolha uma Opção:||\n");
printf("======================\n");
scanf("%d", &opcao);

switch(opcao){
    case 1:
        // printf("Execução do jogo\n");
        srand(time(0));
        numeroSecreto = rand() % 10;

        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        // printf("Você digitou: %d\n", palpite);
        // printf("Numero Secreto: %d\n\n", numeroSecreto);
        
        if(palpite == numeroSecreto){
            printf("Parabéns, você acertou !!!\n");
            printf("Numero Secreto: %d\n\n", numeroSecreto);
            
        } else {
            printf("Infelismente, você errou ! =[\n");
            printf("Numero Secreto: %d\n\n", numeroSecreto);
            }
    break;

    case 2:
        // printf("As regras são ...\n");
        printf("=======================================================================================\n");
        printf("|| Digite um número entre 0 e 9 e tente acertar o número que a máquina vai gerar =]  ||\n");
        printf("=======================================================================================\n");
        exit;
    break;
    
    case 3:
        // printf("Saindo do jogo ...\n");
        printf("Saindo do JooJ");
    break;

    default:
        printf("Opção Inválida.\n");
    break;
}
}