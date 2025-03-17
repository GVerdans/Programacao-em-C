#include <stdio.h>

int main()
{

    // int idade;
    // float renda;

    // printf("Digite a sua idade: \n");
    // scanf("%d", &idade);

    // printf("Digite a sua renda: \n");
    // scanf("%f", &renda);

    // if(idade <= 18 || idade >= 60){

    //     if(renda < 2000){
    //         printf("Voce tem direito ao desconto!\n");
    //     } else {
    //         printf("Voce nao tem direito ao desconto devido a renda!\n");
    //     }

    // } else {
    //     printf("Você não atende aos criterios devido a idade!\n");
    // }

    /*-----------------------------------------------------*/

    // int idade, dependentes;
    // float renda;

    // printf("Digite a sua idade: ");
    // scanf("%d", &idade);

    // printf("Digite a sua renda: ");
    // scanf("%f", &renda);

    // printf("Digite o numero de dependentes: ");
    // scanf("%d", &dependentes);

    // if (idade >= 18 && idade < 65)
    // {

    //     if (renda < 3000)
    //     {

    //         if (dependentes > 2)
    //         {
    //             printf("Você atende a todos os criterios!\n");
    //         }
    //         else
    //         {
    //             printf("Voce nao atende ao criterio de dependentes!\n");
    //         }
    //     }
    //     else
    //     {
    //         printf("Voce não atende ao critério da Renda\n");
    //     }
    // }
    // else
    // {
    //     printf("Voce nao atende ao criterio de idade!\n");
    // }

    /*-------------------------------------------------------*/

    int numero;

    printf("Digite um Numero: ");
    scanf("%d", &numero);

    if(numero > 0){
        if(numero % 2 == 0){
            printf("Numero par!\n");
        } else {
            printf("Numero Impar!\n");
        }

    } else if (numero == 0) {
        printf("Zero nao pode seu bunda! \n");

    } else {
        printf("Numero Negativo!\n");
    }

}