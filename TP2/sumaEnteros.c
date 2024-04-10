#include <stdio.h>
#include <stdlib.h>
/*Algoritmo 1. SUMA DE ENTEROS
ENTRADA: num1,num2
Proceso: res=num1+num2
Salida: res */
int main()
{
    int num1,num2;/*v.entrada*/
    int res; /*v.salida*/
    printf("introdude el valor de num1\n");
    scanf("%d",&num1);
    printf("Introduce el valor de num2\n");
    scanf("%d",&num2);
    res=num1+num2;
    printf("la suma de %d + %d = %d\n",num1,num2,res);
    return 0;
}

