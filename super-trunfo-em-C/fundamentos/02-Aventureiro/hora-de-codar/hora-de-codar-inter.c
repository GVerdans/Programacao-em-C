#include <stdio.h>

// Média do Aluno

int main(){

    int nota1, nota2, nota3;
    float media;


    printf("+++ PROGRAMA DE CALCULO DE MEDIA +++\n");
    printf("Digite a sua primeira nota: \n");
    scanf("%d", &nota1);
    
    printf("Digite a sua segunda nota: \n");
    scanf("%d", &nota2);
    
    printf("Digite a sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3; // conversão explicita.

    printf("Sua média foi: %.2f\n", media);

    return 0;
}