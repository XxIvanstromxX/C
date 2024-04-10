#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Entrada: Po, r , t
Proceso: Pt=Po*pow(1+r,t)
Salida: Pt **/

int main()
{
    printf(" Modelo de poblacion\n ");

    float Po, r, t;//variable de entrada
    float Pt; //variable de salida
    printf(" Introduce la Poblacion incial (Po)\n ");
    scanf("%f",&Po);//declaracion de varibales de entrada
    printf(" Introduce la tasa de crecimiento(r)\n ");
    scanf("%f",&r);//declaracion de varibales de entrada
    printf(" Introduce el tiempo de crecimiento en semanas(t)\n ");
    scanf("%f",&t);//declaracion de varibales de entrada

    Pt=Po*pow(1+r,t);
    printf(" El calculo de la poblacion es: %.2f\n",Pt);//Salida
    return 0;
}
