#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**Algoritmo 2. AREA CIRCULO
Entradas: radio
Proceso: A=M_PI*pow(radio,2)
Salida: A */
int main()
{
	float radio; //v. entrada
	float A; //v. salida
	printf("introduce el radio\n");
	scanf("%f",&radio);
	A=M_PI*pow(radio,2);
	printf("Area =%f\n",A);
    return 0;
}
