#include <stdio.h>

int main() {

    char estado[2], codCarta[3], nomeDaCidade[50];
    int populacao, numPontosTuristicos, carta;
    float areaCidade, PIB;
    
    // for (carta = 1; carta < 3; carta++) { // Loop para contar as cartas.
        
        printf("\nDigite o Estado da carta 1: (A-H) \n"); // saida da pergunta
        scanf("%s", estado); // Armazena o valor digitado na variavel estado

        printf("Digite o código da carta: \n"); // saida da pergunta
        scanf("%s", codCarta); // Armazena o valor digitado na variavel codCarta

        printf("Digite o nome da Cidade: \n"); // saida da pergunta
        scanf("%s", nomeDaCidade); // Armazena o valor digitado na variavel nomeDaCidade

        printf("Digite a quantidade da População da cidade: \n");
        scanf("%d", &populacao); // Armazena o valor digitado na variavel populacao

        printf("Digite a área da cidade em km²: \n");
        scanf("%f", &areaCidade); // Armazena o valor digitado na variavel areaCidade

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &PIB); // Armazena o valor digitado na variavel PIB

        printf("Digite o numero de pontos turísticos da cidade: \n");
        scanf("%d", &numPontosTuristicos); // Armazena o valor digitado na variavel numPontosTuristicos


        printf("\nCarta 1: \n"); // imprime o contador do numero da carta.
        printf("Estado: %s \n", estado); // imprime o valor armazenado na variavel estado.
        printf("Código: %s%s\n", estado, codCarta); // "concatena" os valores estado e codCarta
        printf("Nome da Cidade: %s \n", nomeDaCidade); // imprime o valor armazenado na variavel nomeDaCidade.
        printf("População: %d \n", populacao); // imprime o valor armazenado na variavel populacao.
        printf("Área: %.2f km² \n", areaCidade); // imprime o valor armazenado na variavel areaCidade.
        printf("PIB: %.2f Bilhões de reais \n", PIB); // imprime o valor armazenado na variavel PIB.
        printf("Número de Pontos Turísticos: %d \n\n", numPontosTuristicos); // imprime o valor armazenado na variavel numPontosTuristicos.
    // }

    return 0;
}

