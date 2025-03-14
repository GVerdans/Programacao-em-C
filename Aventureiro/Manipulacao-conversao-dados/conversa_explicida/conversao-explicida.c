#include <stdio.h>

int main(){
     
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' esta sendo convertido explicidamente.
    // O nome desse float /\ aqui em cima é CASTING.

    printf("Resultado: %.2f\n", quociente);

    return 0;
}