#include <stdio.h>

int main(){
    // int opcao;
    // float saldo = 1000, deposito, saque;

    
    
    // printf("=======================\n");
    // printf("|| ESCOLHA UMA OPÇÃO ||\n");
    // printf("=======================\n\n");

    // printf("1. Verificar saldo\n");
    // printf("2. Fazer Depósito\n");
    // printf("3. Sacar\n");
    // printf("--------------------\n\n");
    
    // scanf("%d", &opcao);
    
    
    // switch (opcao){

    //     case 1:
    //         printf("O seu saldo é de  R$ %.2f reais\n", saldo);
    //     break;

    //     case 2:
    //         printf("Quanto deseja depositar ? \n");
    //         scanf("%f", &deposito);

    //         saldo += deposito;

    //         printf("Novo saldo: R$ %.2f\n", saldo);
    //     break;

    //     case 3:
    //         printf("Quanto deseja Sacar ?\n");
    //         scanf("%f", &saque);

    //         saldo -= saque;

    //         printf("Novo saldo após Saque: R$ %.2f reais\n", saldo);
    //     break;

    //     default:
    //         printf("Opção Inválida, tente novamente !\n");
    //     break;
    // }

    /*----------------------------------------------------------*/

    int dia;

    printf("Entre com o dia da semana (1 a 7)");
    scanf("%d", &dia);

    if (dia == 1){
        printf("Domingo\n");

    } else if (dia == 2){
        printf("Segunda-Feira\n");

    } else if (dia == 3){
        printf("Terça-feira\n");

    } else if (dia == 4){
        printf("Quarta-feira\n");

    } else if (dia == 5){
        printf("Quinta-Feira\n");

    } else if (dia== 6){
        printf("Sexta-Cheira\n");
        
    } else {
        printf("Sábado\n");
    }


    // Dá pra fazer com Switch-Case, mas nao to afim de digitar tudo.
}