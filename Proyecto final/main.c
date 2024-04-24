//
//  main.c
//  Prueba2
//
//  Created by Iván Martinéz on 28/12/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <termios.h>
#define ADMIN "USUARIO"
#define longitud 20

// función para leer una cadena y mostrar asteriscos en su lugar
void leer_con_asteriscos(char *s) {
    int i = 0;
    char c;
    struct termios old, new; // estructuras para guardar los atributos del terminal
    tcgetattr(0, &old); // obtener los atributos actuales
    new = old; // copiarlos a una nueva estructura
    new.c_lflag &= ~ECHO; // desactivar el eco
    tcsetattr(0, TCSANOW, &new); // establecer los nuevos atributos
    while ((c = getchar()) != '\n' && i < longitud - 1) {
        s[i++] = c; // guardar el carácter leído
        putchar('*'); // mostrar un asterisco
    }
    s[i] = '\0'; // terminar la cadena con un nulo
    putchar('\n'); // mostrar un salto de línea
    tcsetattr(0, TCSANOW, &old); // restaurar los atributos originales
}


void menu(void){
    printf("holi");
}

void pasword(void){
    char pin[longitud];
    char contraseña_correcta[] = "ESIME123";
    char user[20];
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
        leer_con_asteriscos(pin);
        printf("\n---------------->\n");
        getchar();
        system("clear");
    } while ((strcmp(user,ADMIN)!=0 || strcmp(pin,contraseña_correcta)!=0) && intento<=2);
    
    ingresa=1;
    
    if (ingresa==1&&intento<=2) {
        system("clear");
        menu();
    }
    
    else if(intento<2){
        printf("Intentos excedidos\n");
    }
}


int main(){
    pasword();
    return 0;
}
