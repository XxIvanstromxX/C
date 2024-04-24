//
//  main.c
//  Menurepetitivo
//
//  Created by Iván Martinéz on 21/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definicion de funcion

void portada(void)
{
    system("clear");
    printf("\n\n\n\t\t\t      \033[1;33m |ESIME ZACATENCO| \033[0m\n\n\n");
    printf("\t\t\t\t \033[1;33m GRUPO:1CM16 \033[0m\n\n\n");
    printf("\t\t     \033[1;31m NOMBRE: Membrillo Martinez Axel Ivan \033[0m\n\n\n");
    getchar();
    system("clear");
}

void ciclo(void)
{
    int i, j, N;
    float calfi,suma;
    printf("introduce el No. de alumnos\n");
    scanf("%d",&N);
    i=1;
    do {
        printf("Alumno No. = %d\n",i);
        i++;
        suma=0;
        j=1;
        do {
            printf("INTRODUCE LA CALIFICACION\n");
            scanf("%f",&calfi);
            suma=suma+calfi;
            printf("calificaciones = %.0f\n",calfi);
            j++;
        } while (j<=6);
        printf("promedio es = %.2f\n",suma/6);
    } while (i<=N);
    getchar();
}

void experimentos(void)
{
    int i, j, N;
    float exp,suma,prom;
    printf("introduce el No. de experimentos\n");
    scanf("%d",&N);
    i=1;
    prom=0;
    while (i<=N) {
        printf("Experimento No. = %d\n",i);
        i++;
        suma=0;
        
        for (j=1; j<=5; j++){
            printf("INTRODUCE El VALOR DEL EXPERIMENTO\n");
            scanf("%f",&exp);
            suma=suma+exp;
            printf("Experimento = %.0f\n",exp);
        }
        printf("promedio es = %.2f\n",suma/5);
        prom=prom+suma;
    }
    printf("promedio de experimento = %.3f\n",prom/N);
    getchar();
}

void tablas(void)
{
    int i,j;
    i=1;
    do {
        printf("tabla de %d\n",i);
        j=1;
        do {
            printf("%d * %d = %d\n\n",i,j,i*j);
            j++;
        } while (j<=10);
        i++;
    } while (i<=10);
    getchar();
}

void arbolito(void){
    int altura, espacios, asteriscos, fila;

        printf("Ingresa la altura del arbol: ");
        scanf("%d", &altura);

        // Imprime la parte triangular del árbol
        for (fila = 1; fila <= altura; fila++) {
            // Imprime los espacios en cada fila
            for (espacios = altura - fila; espacios > 0; espacios--) {
                printf(" ");
            }

            // Imprime los asteriscos en cada fila
            for (asteriscos = 1; asteriscos <= (2 * fila - 1); asteriscos++) {
                printf("\033[1;32m*\033[0m");
            }

            printf("\n");
        }

        // Imprime el tronco del árbol
        for (fila = 1; fila <= altura / 3; fila++) {
            for (espacios = 0; espacios < altura - 1; espacios++) {
                printf(" ");
            }
            printf("\033[1;39m|||\033[0m\n");
        }
    getchar();
    }

void menu(void){
    system("clear");
    int opc;
    do {
        printf("1. Promedio\n");
        printf("2. Experimentos\n");
        printf("3. tablas\n");
        printf("4. arbolito\n");
        printf("5. salir\n");
        printf("introduce la opcion deseada\n");
        scanf("%d",&opc);
        
        switch (opc) {
            case 1:
                ciclo();
                break;
            case 2:
                experimentos();
                break;
            case 3:
                tablas();
                break;
            case 4:
                arbolito();
                break;
            case 5:
                printf("hasta luego/n");
                break;
            default:
                break;
        }
        getchar();
        system("clear");
    } while (opc!=5);
    getchar();
}

int main() {
    portada();
    menu();
    return 0;
}
