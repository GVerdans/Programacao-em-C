#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main(){

    int matriz[LINHA][COLUNA];

    int target = 7;
    int found = 0;
    int soma = 1;

    
    // Atribui valores a matriz
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }


    // Buscador de valores/indices na matriz.
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(matriz[i][j] == target){
                printf("O valor %d encontrado no indice (%d, %d)\n", target, i, j);
                found++;
                break;
            }
        }
        if(found) break;
    }

    if(!found){
        printf("Elemento %d não encontrado na matriz\n", target);
    }

    return 0;
}