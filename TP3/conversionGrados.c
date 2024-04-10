#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Algoritmo 3. Calcular la conversión
grados_c a grados_k
grados_c a grados_f
entrada: grados_c
proceso: grados_k=grados_c+273.15
        grados_f=(grados_c*1.8)+30
Salida:: grados_k,grados_f*/

int main() {
    float grados_c, grados_k, grados_f; // Variable entrada
    printf("Introduce los grados Celsius que quieres calcular a grados Kelvin\n");
    scanf("%f", &grados_c);
    grados_k = grados_c + 273.15; // Calcular Kelvin
    printf(" Los Grados Kelvin son; = %.2f\n", grados_k);
    printf("introduce los grados celsius que quiere calcular a grados fharenheit\n");
    scanf("%f", &grados_c);
    grados_f = (grados_c * 1.8) + 30; //Calcular Fharenheit
    printf(" Los Grados Fharenheit = %.2f\n", grados_f);
    return 0;
}

