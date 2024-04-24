//
//  main.c
//  VECTORES1
//
//  Created by Iván Martinéz on 05/12/23.
//

//EJERICCIO PASAR ARREGLOS A FUNCIONES

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#define TAM 5
#define ADMIN "USUARIO"
#define CONTRA "ESIME123"

//definicion de funciones

int i; /**v global*/

void portada(void)
{
    system("clear");
    printf("\n\n\n\t\t\t      \033[1;33m |ESIME ZACATENCO| \033[0m\n\n\n");
    printf("\t\t\t\t \033[1;33m GRUPO:1CM16 \033[0m\n\n\n");
    printf("\t\t\t    \033[1;31m INTEGRANTES DEL EQUIPO:  \033[0m\n\n");
    printf("\t\t\t \033[1;32m MEMBRILLO MARTINEZ AXEL IVAN  \033[0m\n\n");
    getchar();
    system("clear");
}

//la funcion rand genera numero aleatorios en un rango de 0-30

void genera_vector(float num[TAM])
{
    for(i=0;i<TAM;i++)
    {
        num[i]=rand()%30;
    }
}

void imprime_vector(float num[TAM])
{
    for(i=0;i<TAM;i++)
    {
        printf("%f\n",num[i]);
        sleep(1); //velocidad para imprimir las filas
    }
}

float media_vector(float num[TAM])
{
    float suma=0.0;
    for(i=0;i<TAM;i++)
    {
        suma+=num[i];
    }
    return(suma/TAM);
}

float desviacion_vector(float m, float num[TAM])
{
    float suma2=0.0;
    for(i=0;i<TAM;i++)
    {
        suma2+=pow(num[i]-m,2);
    }
    return(sqrt(suma2/(TAM-1)));
}

void maximo_vector(float num[])
{
    float max=num[0];
    for (i=1;i<TAM;i++)
    {
        if (max<num[i])
        max=num[i];
    }
    printf("El numero maximo del vector es = %0.f\n", max);
}

void minimo_vector(float num[])
{
    float min=num[0];
    for (i=1;i<TAM;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("El numero minimo del vestor es = %.1f\n", min);
}

void ordenar_vector(float num[]){
    int aux, i, j;
    int opc;
    do {
    printf("\nElije una opcion: \n");
    printf("1. Asendente\n");
    printf("2. Desendente\n");
    printf("3. Regresar\n");
    scanf("%d",&opc);
    
    switch (opc) {
        case 1:
            for (i=0; i<5; i++) {
                for (j=0; j<5; j++) {
                    if (num[j]<num[j+1]) {
                        aux=num[j+1];
                        num[j+1]=num[j];
                        num[j]=aux;
                    }
                }
            }
            for (i=0; i<5; i++) {
                printf("%f\t",num[i]);
            }
            break;
        case 2:
            for (i=1; i<=5; i++) {
                for (j=0; j<5-1; j++) {
                    if (num[j]>num[j+1]) {
                        aux=num[j+1];
                        num[j+1]=num[j];
                        num[j]=aux;
                    }
                }
            }
            for (i=0; i<5; i++) {
                printf("%f\t",num[i]);
            }
            break;
        case 3:
            printf("Regresando\n");
            break;
        default:
            break;
    }
    } while (opc!=3);

}

void menu(void)
{
    float numeros[TAM],m = 0.0,d;
    char resp;
    int opc;
    do
    {
        printf("1. Genera vector aleatorio\n");
        printf("2. Imprime Vector\n");
        printf("3. Media del vector\n");
        printf("4. Desviacio estandar\n");
        printf("5. El elemento maximo del vector\n");
        printf("6. El elemento minimo del vector\n");
        printf("7. Ordenar vector\n");
        printf("8. Salida\n");
        printf("Introduce la opcion deseada (1-8)\n");
        scanf("%d",&opc);
        switch(opc)
        {
        case 1:
            genera_vector(numeros);
            break;
        case 2:
            imprime_vector(numeros);
            break;
        case 3:
            m=media_vector(numeros);
            printf("Media del vector = %.2f\n",m);
            break;
        case 4:
            d=desviacion_vector(m,numeros);
            printf("Desviacion del vector = %.2f\n",d);
            break;
        case 5:
            maximo_vector(numeros);
            break;
        case 6:
            minimo_vector(numeros);
            break;
        case 7:
            ordenar_vector(numeros);
            break;
        case 8:
            printf("Hasta luego...\n");
            exit(0);
        }
        fflush(stdin);
        printf("Deseas otra opcion(S/N)\n");
        scanf("%c",&resp);
        resp=toupper(resp);
        getchar();
        system("clear");
    }while(resp=='S');
}

void pasword(void){
    getchar();
    system("clear");
    getchar();
    char pin[20],user[20];
    int ingresa, intento=0;
    do {
        intento++;
        printf("\n\t\t\t*******INICIO DE SESION*******");
        printf("\t Intento No. %d:\t\n\n\n",intento);
        printf("\t\t\t    |INTROCUDECE USUARIO|\n");
        printf("\t\t\t    ---------------------\n");
        printf("\n\tUSUARIO:  ");
        gets(user);
        printf("\t\t\t   |INTROCUDECE CONTRASEÑA|\n");
        printf("\t\t\t   ------------------------\n");
        printf("\n\tCONTRASEÑA:  ");
        gets(pin);
        printf("\n---------------->\n");
        getchar();
        system("clear");
    } while ((strcmp(user,ADMIN)!=0 || strcmp(pin,CONTRA)!=0) && intento<=2);
    
    ingresa=1;
    
    if (ingresa==1&&intento<=2) {
        system("clear");
        menu();
    }
    
    else if(intento<2){
        printf("Intentos excedidos\n");
    }
}

void logo(void){
    system("clear");
    char *logo[] = {
        "\n\n\n\t\t\t\t░░░░░░░░░░░░░░░░░░░░░░░░░",
        "\t\t\t\t░░░░░░▄█░░░░░░░░░░░░██░░",
        "\t\t\t\t░░░░░▄██░░░░░░░░░░░███░░░",
        "\t\t\t\t░░░░░███░░░░░░░░░░████░░░",
        "\t\t\t\t░░░░████░░▄▄▄▄░░░█████░░░",
        "\t\t\t\t░░░███████████████████░░░",
        "\t\t\t\t░░░███████████████████░░░",
        "\t\t\t\t░▄█████████████████████░░",
        "\t\t\t\t░██████████████████████░░",
        "\t\t\t\t░██████████████████████░░",
        "\t\t\t\t░█░▀████████▀░▄████████░░",
        "\t\t\t\t▄██▄▄█████▄▄▄██████████▄░",
        "\t\t\t\t██▀███████▀▀█▀▀░░███████░",
        "\t\t\t\t░█░░░░░░░░░░░░░░░███████░",
        "\t\t\t\t░█░░░████▄░░░░░░░████████",
        "\t\t\t\t░█░░░░░░░░░░░░░░░████████",
        "\t\t\t\t░██░░░░░░░░░░░░░░████████",
        "\t\t\t\t░▀█░░░░░░░░░░░░▄█████████",
    };
    int i;
    for (i = 0; i < 17; i++) {
        printf("%s\n", logo[i]);
        usleep(200000);
        
    }
    getchar();
}


int main()
{
    portada();
    logo();
    pasword();
    return 0;
}
