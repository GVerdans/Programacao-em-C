#include <stdio.h>

int main(){

// int a = 20;
// float b = 20;

// printf("a >= b %d\n", a >= b);   
// printf("a <= b %d\n", a <= b);   
// printf("a == b %d\n", a == b); 
// printf("a != b %d\n", a != b); 

/*---------------------------------------------*/

// int x = 5;
// float y = 5.0;
// char c = 'a';

// // Aqui rola uma conversão implicita o, X vai pra float.
// printf("x >= y: %d\n", x >= y);
// printf("x == y: %d\n", x == y);
// printf("x != y: %d\n", x != y);

// printf("x >= c: %d\n", x >= c);
// printf("O valor ASCII de %c é %d\n", c, c);

/*--------------------------------------------------*/

float num1 = 10.2;
int num2 = 10;

// Converção explicita para comprar os numeros inteiros, e nao considerar o decimal.
printf("num1 > num2: %d\n", (int)num1 > num2);
printf("num1 == num2: %d\n", (int)num1 == num2);




return 0;

}





/*

++ OPERADORES RELACIONAIS ++

== -> Igual
> -> Maior que
< -> Menor que
!= -> diferente

*/