#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g 9.81



int main()

{

    float v0,A, t; //variables de entrada

    float x, y; //variables de salida

    printf("\tCalcular la distancia y la altura de un proyectil\n");
    printf("Componentes horizontal MRU\n");
    printf("Introduce el valor de velocidad inicial(v0)\n");
    scanf("%f",&v0);
    printf("Introduce el valor del coseno de alpha(A)\n");
    scanf("%f",&A);
    printf("Introduce el valor del tiempo\n");
    scanf("%f",&t);

    x=v0*(cos(A*M_PI/180))*t;

    printf("El resultado en el componente horizontal es = %.2f\n",x);

    y= (v0)*(sin(A*M_PI/180))*(t-.5)*g*(pow(t,2));

    printf("El resultaddo de la componente en vertical es= %.2f\n",y);

    return 0;

}

