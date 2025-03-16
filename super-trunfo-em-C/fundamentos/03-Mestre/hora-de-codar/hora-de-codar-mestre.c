#include <stdio.h>

int main(){

    char produtoA[30] = "Geladeira SAMSUNG";
    char produtoB[30] = "Computador POSITIVO";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 999.99;
    float valorB = 2.50;

    unsigned int estoqueMininoA = 500;
    unsigned int estoqueMininoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // printando os produtos
    printf("Produto '%s' tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto '%s' tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparando com o valor minino de estoque.
    resultadoA = estoqueA > estoqueMininoA;
    resultadoB = estoqueB > estoqueMininoB;

    printf("O produto '%s' tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto '%s' tem estoque mínimo %d\n", produtoB, resultadoB);

    // Comparando valores totais

    printf("Valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

}

// A = GELADEIRA
// B = COMPUTADOR