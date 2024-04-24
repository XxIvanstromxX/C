#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion 

void leer(void);
void descuento(float);

int main()
{
    leer();
    return 0;   
}

//Definir la funcion

void leer(void)
{
    float precio, r;
    printf("Introduce el precio\n");
    scanf("%f", &precio);
    r = precio;
    descuento(r);
    
}

void descuento(float r)
{
    if (r<800)
    {
        r = r - (r*0); //0% de descuento
        printf(" Precio con el descuento es = %.2f$\n", r);
    }
    else if ((r > 800) && (r <= 1500))
    {
        r = r - (r*0.10); //10% de descuento
        printf(" Precio con descuento es = %.2f$\n", r);
    }
    else if ((r > 1500) && (r <= 5000))
    {
        r = r - (r*0.15); // 15% de descuento
        printf(" Precio con descuento es = %.2f$\n", r);
    }
    else if (r > 5000)
    { 
        r = r - (r*0.20); // 20% de descuento
        printf("Precio con descuento es = %.2f$\n", r);
    }
    else
    {
        printf("compra no valida\n");
    }
}