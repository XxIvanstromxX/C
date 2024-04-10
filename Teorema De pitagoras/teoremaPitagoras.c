#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int CO, CA;
    float H;
    printf("introduce el cateto opuesto del triangulo(CO)\n");
    scanf("%d",&CO); //V.ENTRADA
    printf("introduce el cateto adyacente del triangulo(CA)\n");
    scanf("%d",&CA); //V.ENTRADA
    H=sqrt(pow(CO,2)+pow(CA,2));
         printf("El resultado de la hipotenusa es: %f\n",H);
    return 0;
}
