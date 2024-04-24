#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ADMIN "USUARIO"
#define CONTRA "ESIME123"

void menu(void){
    printf("holi");
}

void pasword(void){
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


int main(){
    pasword();
    return 0;
}
