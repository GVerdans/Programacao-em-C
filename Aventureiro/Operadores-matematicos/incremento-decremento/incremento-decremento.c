#include <stdio.h>

int main(){

int resultado;
int num1 = 1;

printf("Pós incremento:\n");
printf("Num1 vale: %i\n", num1);

// POS INCREMENTO/DECREMENTO

// num1 += 1;
resultado = num1++;
printf("Resultado com pos incremento: %i\n", resultado); // 1
printf("Agora num1 vale: %i\n\n", num1); // 2

// // PRE INCREMENTO/DECREMENTO

int num2 = 1;
int resultado2;

printf("Pre incremento:\n");

printf("Num2 vale: %i\n", num2);

resultado2 = ++num2; 
printf("Resultado com pre incremento: %i\n", resultado2);
printf("Agora num2 vale: %i\n\n", num2);

}