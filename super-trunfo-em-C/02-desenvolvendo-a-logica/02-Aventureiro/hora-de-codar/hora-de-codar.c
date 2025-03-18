#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolhaMaquina;
    srand(time(0));

    printf("==================\n");
    printf("||    JOKENPO   ||\n");
    printf("==================\n");
    printf("|| 1. Pedra     ||\n");
    printf("|| 2. Papel     ||\n");
    printf("|| 3. Tesoura   ||\n");
    printf("==================\n");
    printf("Escolha um número: ");
    scanf("%d", &escolhaJogador);

    escolhaMaquina = rand() % 3 + 1;

    switch (escolhaJogador){
        case 1:
            printf("Jogador: Pedra - ");
        break;

        case 2:
            printf("Jogador: Papel - ");
        break;

        case 3:
            printf("Jogador: Tesoura - ");
        break;

        default:
            printf("Opção Inválida\n");
        break;
    }


    switch (escolhaMaquina){
        case 1:
            printf("Máquina: Pedra\n\n");
        break;

        case 2:
            printf("Máquina: Papel\n\n");
        break;

        case 3:
            printf("Máquina: Tesoura\n\n");
        break;

    }
    
    if(escolhaMaquina == escolhaJogador){
        printf("************ \n");
        printf("||  Empate ||\n");
        printf("*************\n\n");
    } else if ((escolhaJogador == 1) && (escolhaMaquina == 3) || (escolhaJogador == 2) && (escolhaMaquina == 1) || (escolhaJogador == 3) && (escolhaMaquina == 2)){
        printf("##########################\n");
        printf("||  Vitória do Humano ! ||\n");
        printf("##########################\n");
    } else {
        printf("#############################\n");
        printf("||  Vitória da Máquina !   ||\n");
        printf("#############################\n");
    }
    

return 0;
}


/*
PEDRA > TESOURA
PAPEL < TESOURA
TESOURA > PAPEL
*/