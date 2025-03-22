#include <stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){ // Loop Externo

        printf("Tabuada de %i\n", i); 
        
        for(int j = 1; j <= 10; j++){ // Loop Interno
            printf("%i x %i = %i\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}