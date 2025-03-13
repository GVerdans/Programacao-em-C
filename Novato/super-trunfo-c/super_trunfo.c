#include <stdio.h>

int main()
{

    char estado[2], codCarta[3], nomeDaCidade[50];
    int populacao, numPontosTuristicos, carta;
    float areaCidade, PIB;

    // for (carta = 1; carta < 3; carta++) {

    // ENTRADA DE DADOS DA CARTA 1

    printf("\nDigite o Estado da carta 1: (A-H) \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codCarta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("Digite a quantidade da População da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &areaCidade);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &numPontosTuristicos);

    // SAIDA DE DADOS DA CARTA 1
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s\n", estado, codCarta);
    printf("Nome da Cidade: %s \n", nomeDaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", areaCidade);
    printf("PIB: %.2f Bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d \n\n", numPontosTuristicos);
    // }

    // ENTRADA DE DADOS DA CARTA 2

    printf("\nDigite o Estado da carta 2: (A-H) \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codCarta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("Digite a quantidade da População da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &areaCidade);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &numPontosTuristicos);

    // SAIDA DE DADOS DA CARTA 2
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s\n", estado, codCarta);
    printf("Nome da Cidade: %s \n", nomeDaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", areaCidade);
    printf("PIB: %.2f Bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d \n\n", numPontosTuristicos);

    return 0;
}
