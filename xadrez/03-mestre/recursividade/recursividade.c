#include <stdio.h>


// void imprimirMensagem(){ // é uma function do JS
//     printf("Hello World\n");
// }

// void recursiveLoop(int n){
//     if(n > 0){
//         printf("%d ", n);
//         recursiveLoop(n - 1);
//     }
// }

void recursivo(int numero){
    
    if(numero > 0){
        printf("%d \n", numero);

        recursivo(numero - 1);
    }
}

int main(){

    // for(int i = 0; i <=10; i++){
    //     printf("%d ", i);imprimirMensagem();
    // } // SAIDA 'i Hello World'; 

    // int numero = 30;
    // printf("Contagem Regressiva: ");
    // recursiveLoop(numero);
    
    int quantidade = 10;

    printf("Contagem Regressiva: ... \n");
    recursivo(quantidade);



    return 0;

}