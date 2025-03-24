#include <stdio.h>

// MATRIZ É UM ARRAY MULTIDIMENSIONAL.

//  MAIS COMUM BIDIMENSIONAL, LINHAS E COLUNA.

int main(){
    // DECLARAÇÃO CORRETA DE UMA MATRIZ
    int matriz[3][3] = {
        {1, 2, 3}, // 0 1 2
        {4, 5, 6}, // 1 
        {7, 8, 9}  // 2
    };

    // //     y  x     -- onde Y é a linha e X coluna
    // matriz[0][0] = 1;
    // matriz[0][1] = 2;
    // matriz[0][2] = 3;
    // matriz[1][0] = 4;
    // matriz[1][1] = 5;
    // matriz[1][2] = 6;
    // matriz[2][0] = 7;
    // matriz[2][1] = 8;
    // matriz[2][2] = 9;

    // // Acessando elementos da matriz
    printf("Elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("Elemento na posição [2][0] é %d\n", matriz[2][1]);

}