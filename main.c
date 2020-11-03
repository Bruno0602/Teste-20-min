#include <stdio.h>

int num1, num2;
int num3, num4, num5; //resultados das operações 
float num6;



int main(){

printf("Insira o primeiro numero:");
scanf("%d", &num1);
printf("Insira o segundo numero:");
scanf("%d", &num2);

num3 = (num1 + num2);
num4 = (num1 - num2);
num5 = (num1 * num2);
num6 = (num1 / num2);

printf("A soma de %d + %d e %d\n",num1, num2, num3);
printf("A subtracao de %d - %d e %d\n",num1, num2, num4);
printf("A multiplicacao de %d x %d e %d\n",num1, num2, num5);
printf("A divisao de %d / %d e %f.2\n",num1, num2, num6);

getchar();

return 0;
}