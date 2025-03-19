#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("###########################################\n");
    printf("### MENU DE GERENCIAMENTO DE ESTUDANTES ###\n");
    printf("###########################################\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção: \n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Calcular a media\n");   

            printf("Digite a primeira nota:\n"); 
            scanf("%f", &nota1);   

            printf("Digite a segunda nota:\n"); 
            scanf("%f", &nota2);

            if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){

                media = (nota1 + nota2) / 2;
                printf("Média do Aluno: %.2f\n", media);
                
            } else {
                printf("Somente notas entre 0 e 10.\n");
            }
        break;
    
        case 2:
            printf("Detreminar Status\n");
            printf("Entre com a sua média: \n");
            scanf("%f", &media);
            
            // media >= 5 ? printf("Aprovado !\n") : printf("Reprovado !\n");

            if(media >= 7){
                printf("Aprovado !");
            } else if(media >= 5){
                printf("Recuperação !");
            } else {
                printf("Reprovado !");
            }
            
        break;

        case 3:
            printf("Sair do Programa\n");
        
        break;

        default:
            printf("Opção Inválida");
        break;
    }

    return 0;
}