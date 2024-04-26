//
//  final.c
//  Proyecto_Final
//
//  Created by Iván Martinéz.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <termios.h>
#include <math.h>
#define ADMIN "USUARIO"
#define longitud 20
#define alum 30
#define eval 3

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void cal_prom(int cal[][eval])/**invocando la funcion*/
{
    /**cometarios para no perderme*/
    int opc;
    int apro = 0;/**aprobados*/
    int repro = 0;/**reprobados*/
    float promedios[alum];/**hace la sumatoria*/
    float prom_eva[eval] = {0};/**promedio de evaluaciones*/
    float prom_gen = 0;/**promedio general*/
    float prommax = 0;/**promedio maximo*/
    float prommin = 10;/**promedio minimo*/
    int alum_maxprom = 0;/**generaliza alumnos*/
    int alum_minprom = 0;/**generaliza alumnos*/

    for (int i = 0; i < alum; i++)
        {
            float prom = 0;/**valor del promedio*/
            for (int j = 0; j < eval; j++)
            {
                prom += cal[i][j];
                prom_eva[j] += cal[i][j];
            }
            prom /= eval;
            promedios[i]/**inicializando para que vaya incrementando los promedios*/ = prom;
            prom_gen += prom;
            if (prom >= 6){
                apro++;
            }
            else{
                repro++;
            }
            if (prom > prommax){
                prommax = prom;
                alum_maxprom = i + 1;
            }
            if (prom < prommin){
                prommin = prom;
                alum_minprom = i + 1;
            }
        }
    prom_gen /= alum;
    
    do {
        system("clear");
        printf("Selecciona tu opcion:\n");
        printf("1. Promedio de cada alumno\n");
        printf("2. Alumnos aprobados y reprobados\n");
        printf("3. Promedio por evaluacion\n");
        printf("4. Mayor promedio\n");
        printf("5. Menor promedio\n");
        printf("6. Regresar\n");
        printf("\nOpcion: ");
        scanf("%d",&opc);
        switch (opc) {
            case 1:
                printf("Promedio de cada alumno:\n");
                for (int i = 0; i < alum; i++)
                {
                    printf("Alumno %d: %.2f\n", i + 1, promedios[i]);
                }
                getchar();
                break;
            case 2:
                printf("Cantidad de alumnos aprobados: %d\n", apro);/**imprime los alumnos que aprobaron*/
                getchar();
                printf("Cantidad de alumnos reprobados: %d\n", repro);/**imprime los alumnos que reprobaron*/
                getchar();
                break;
            case 3:
                printf("Promedio por evaluacion:\n");
                for (int i = 0; i < alum; i++)
                {
                    printf("Evaluacion %d: %.1f\n", i, promedios[i] / eval);
                }
                getchar();
                break;
            case 4:
                printf("Alumno con el mayor promedio: Alumno %d\n", alum_maxprom);
                getchar();
                break;
            case 5:
                printf("Alumno con el menor promedio: Alumno %d\n", alum_minprom);
                getchar();
                break;
            case 6:
                printf("regresando...\n");
                getchar();
                break;
            default:
                break;
        }
        getchar();
        system("clear");
    } while (opc!=6);
}

void des_cal(int cal[][eval])/**invocando la funcion*/
{
    printf("Calificaciones de los alumnos:\n");
    for (int i = 0; i < alum; i++)
    {
        printf("Alumno %d:\n", i + 1);
        for (int j = 0; j < eval; j++)
        {
            printf("%d\n", cal[i][j]);
        }
    }
    getchar();
}

void cap_cal(int cal[][eval])/**invocando la funcion*/
{
    for (int i = 0; i < alum; i++)
    {
        printf("Ingrese las calificaciones del alumno %d:\n", i + 1);
        for (int j = 0; j < eval; j++)
        {
            printf("Calificacion %d: \n", j + 1);
            scanf("%d", &cal[i][j]);
        }
        system("clear");
    }
}

void calificaciones(void){
    system("clear");
    int cal[alum][eval];
    int opc;
    do
    {
        printf("Selecciona tu opcion:\n");
        printf("1. Captura de calificaciones\n");
        printf("2. Despliegue las calificaciones\n");
        printf("3. Calculo del promedio\n");
        printf("4. Salir\n");
        printf("\nOpcion: ");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
                system("clear");
                cap_cal(cal);/**poniendo la funcion para que la lea*/
                printf("\n");/**imprime*/
                break;
            case 2:
                des_cal(cal);/**poniendo la funcion para que la lea*/
                printf("\n");/**imprime*/
                break;
            case 3:
                cal_prom(cal);/**poniendo la funcion para que la lea*/
                printf("\n");/**imprime*/
                break;
            case 4:
                printf("Hasta luego...\n");
                getchar();
                break;
            default:
                break;
        }
        getchar();
        system("clear");
    }while(opc!=4);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void quiz(void){
    char preguntas[][100] = {"1. ¿Cuál es el instrumento más antiguo del mundo?: ",
                             "      2. ¿Dónde nació Albert Einstein?:",
                             "3. ¿Donde está el rascacielos más grande del mundo?: ",
                             " 4. ¿Cuál es el punto de ebullición del agua?: ",
                             "5. ¿Nombre de la capa de gases que rodea a la tierra?"};

    char opciones[][100] = {"A. Tambor", "B. Guitarra", "C. Piano", "D. Flauta",
                            "A. Estados Unidos", "B. Suiza", "C. Alemania", "D. Reino Unido",
                            "A. Barcelona", "B. Dubai", "C. Nueva York", "D. Shangai",
                            "A. 80º", "B. 75º", "C. 100º", "D. 65º",
                            "A. Hidrosfera", "B. Atmosfera", "C. litosfera", "D. Mesosfera"};
    char respcorrectas[] = {'D', 'C', 'B' , 'C' , 'B'};
    int numdepreguntas = sizeof(preguntas)/sizeof(preguntas[0]);
    char respuesta;
    int puntuacion=0;
    
    for(int i = 0; i < numdepreguntas; i++){
        printf("\n\t    ▀▄▀▄▀▄【Q】【U】【I】【Z】 【G】【A】【M】【E】▄▀▄▀▄▀\n\n");
        printf("\t**************************************************************\n");
        printf("\t\t%s\n", preguntas[i]);
        printf("\t**************************************************************\n\n");
        
        for(int j = (i * 4); j < (i * 4) + 4; j++){
            printf("%s\n", opciones[j]);
            }

        printf("\nRespuesta: ");
        fflush(stdin);
        scanf("%c", &respuesta);
        scanf("%*c"); //clear \n from input buffer

            respuesta = toupper(respuesta);
        
        if(respuesta == respcorrectas[i]){
            printf("CORRECTO!\n");
            getchar();
            system("clear");
            puntuacion++;
        }
        else{
            printf("INCORRECTO!\n");
        }
        getchar();
        system("clear");
    }
    printf("\t\t\t  ************************\n");
    printf("\t\t\t   PUNTUACION FINAL: %d/%d\n", puntuacion, numdepreguntas);
    printf("\t\t\t  ************************\n");
    getchar();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu(void){
    int opc;
    do {
        printf("Selecciona tu opcion\n");
        printf("1. QUIZ\n");
        printf("2. CALIFICACIONES\n");
        printf("3. SALIDA\n");
        scanf("%d",&opc);
        switch (opc) {
            case 1:
                system("clear");
                quiz();
                getchar();
                break;
            case 2:
                calificaciones();
                getchar();
                break;
            case 3:
                printf("hasta luego...\n");
                getchar();
                system("clear");
                break;
            default:
                break;
        }
        getchar();
        system("clear");
    } while (opc!=3);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void logo(void){
    system("clear");
    char *logo[] = {
        "\n\n\n\t\t\t\t░░░░░░░░░░░░░░░░░░░░░░░░░",
        "\t\t\t\t░░░░░░▄█░░░░░░░░░░░░██░░░",
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

void pasword(void){
    system("clear");
    char pin[longitud];
    char contraseña_correcta[] = "ESIME123";
    char user[20];
    int ingresa = 1, intento=0;
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
    
    if (ingresa==1&&intento<=2) {
        system("clear");
        menu();
    }
    
    else if(intento<2){
        printf("Intentos excedidos\n");
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    portada();
    logo();
    pasword();
    return 0;
}
