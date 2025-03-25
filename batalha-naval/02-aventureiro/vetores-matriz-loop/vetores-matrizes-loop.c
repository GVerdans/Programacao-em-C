#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int matriz[3][3];
    int soma = 0;

    

    for(int i = 0; i < 3; i++){ // Atribuindo valores aleatorio a matriz

        for(int j = 0; j < 3; j++){
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j] = rand() % 11);
        }
    }

    for(int i = 0; i < 3; i++){ // Somando os vetores da matriz

        for( int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }

    printf("soma dos vetores da matriz é igual a: %d\n", soma);


    return 0;
}