#include <stdio.h>
#include <stdlib.h>

//prototipo de la funcion

void menu(void);
void vegetariano(void);
void carnes(void);
void ninos(void);
void bebidas(void);
void dia(void);
void tacos(void);
void enchiladas(void);
void pozole(void);


int main()
{
    menu();
    return 0;
}

//definicion de funciones

void menu(void)
{
    int opc;
    printf("1 menu ensaladas\n");
    printf("2 menu carnes\n");
    printf("3 menu de niños\n");
    printf("4 menu bebidas\n");
    printf("5 menu del dia\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        vegetariano();
        break;
    case 2:
        carnes();
        break;
    case 3:
        ninos();
        break;
    case 4:
        bebidas();      
        break;
    case 5:
        dia();
        break;
    default:
        printf("opcion no valida\n");
        break;
    }
}    
//definir las funciones

void vegetariano()
{
    int opc;
    printf("\n1 Ensalada primavera\n");
    printf("2 Ensalada frutos del bosque\n");
    printf("3 Ensalada parmesana\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\nENSALADA PRIMAVERA (320g): \n");
        printf("Sobre unsa canasta de queso con manzana, queso de cabra, nuez, ajonjoli caramelizadas con aderezo turco\n");
        printf("$119.00\n\n");
        break;
    case 2:
        printf("\nENSALADA FRUTOS DEL BOSQUE (280g): \n");
        printf("Mezcla de lechugas y espinaca, nuez caramelizada, ajonjolí acaramelado, queso parmesano y roquefort con aderezo turco\n");
        printf("$159.00\n\n");
        break;
    case 3:
        printf("\nENSALDA PARMESANA (300g)\n");
        printf("Con cebolla morada y aderezo turco\n");
        printf("$115.00\n\n");
        break;
    default:
        printf("Platillo no valido");
        break;
    }
}
void carnes()
{
    int opc;
    printf("\n1 Filete Mignon\n");
    printf("2 Suprema de pollo\n");
    printf("3 Arrachera\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\nFILETE MIGNON (200g): \n");
        printf("Con salsa de chamìñones, papas a la francesa y ensalada de la casa \n");
        printf("$280.0\n\n");
        break;
    case 2:
        printf("\nSUPREMA DE POLLO (180g): \n");
        printf("Con enchilada de queso, rajas poblanas a la crema, frijoles refritos y guacamole \n");
        printf("$220.00\n\n");
        break;
    case 3:
        printf("\nARRACHERA (200g):\n");
        printf("Con papas a la francesa y guacamole, acompañada con frijoles refritos y guacamole\n");
        printf("$289.00\n\n");
        break;
    default:
        printf("Platillo no valido");
        break;
    }
}
  

void ninos()
{
    int opc;
    printf("\n1 Piñatita Macarron\n");
    printf("2 Hamburgatito\n");
    printf("3 Nidito de Pomodoro\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\nPIÑATITA MACARRON (250g): \n");
        printf("Macarrones con queso y pan tostado \n");
        printf("$105.00\n\n");
        break;
    case 2:
        printf("\nHAMBURGATITO (100g): \n");
        printf("Hamburguesa con queso \n");
        printf("$110.00\n\n");
        break;
    case 3:
        printf("\nNIDITO DE POMODDORO (240g): \n");
        printf("Albondigas de res cos salda de queso y espagueti a la italiana \n");
        printf("$115.00\n\n");
        break;
    default:
        printf("Platillo no valido");
        break;
    }
}


void bebidas()
{
    int opc;
    printf("\n1 con alcohol\n");
    printf("2 sin alcohol\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\nMojito\n");
        printf("Carajillo\n");
        printf("Paloma\n\n");
        break;
    case 2:
        printf("\nLimonada\n");
        printf("Naranjada\n");
        printf("Agua de Jamaica\n\n");
        break;
    default:
        printf("Platillo no valido");
        break;
    }
}
 
void dia()
{
    int opc;
    printf("\n1 Enchiladas\n");
    printf("2 Pozole\n");
    printf("3 Tacos\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        enchiladas();
        break;
    case 2:
        pozole();
        break;
    case 3:
       tacos();
        break;
    default:
        printf("Platillo no valido");
        break;
    }
}

void tacos()
{
 int opc;
    printf("\n1 Pastor\n");
    printf("2 Suadero\n");
    printf("3 Chorizo\n");
    printf("4 Campechano\n");
    printf("5 Arrachera\n");
    printf("6 Cochinita Pibil\n");
    printf("\n introduce la opcion deseada\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("\nTACOS PASTOR (3pzas): \n");
        printf("Con cilantro, cebolla y cebollitas\n");
        printf("$120.00\n\n");
        break;
    case 2:
        printf("\nTACOS SUADERO (3pzas): \n");
        printf("Con cilantro, cebolla y cebollitas\n");
        printf("$120.00\n\n");
        break;
    case 3:
        printf("\nTACOS CHORIZO (3pzas): \n");
        printf("Con cilantro, cebolla y cebollitas\n");
        printf("$120.00\n\n");
        break;
    case 4:
        printf("\nTACOS CAMPECHANOS (3pzas): \n");
        printf("Con cilantro, cebolla y cebollitas\n");
        printf("$120.00\n\n"); 
        break;
    case 5:
        printf("\nTACOS DE ARRACHERA (3pzas): \n");
        printf("A la parrilla con guacamole y cebollitas\n");
        printf("$220.00\n\n");
        break;
    case 6:
        printf("\nTACOS DE COCHINITA PIBIL (3pzas): \n");
        printf("Con cebolla morada en escabeche, salsa pibil, frijoles refritos, queso y totopos\n");
        printf("$159.00\n\n");
        break;
    default:
        printf("opcion no valida\n");
        break;
    }
}

void enchiladas()
{
    int opc;
    printf("\n1 Verdes\n");
    printf("2 Rojas\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\nENCHILADAS VERDES (3pzas): \n");
        printf("Con pollo, salsa suiza, gratinadas con queso y frijoles refritos\n");
        printf("$160.00\n\n");
        break;
    case 2:
        printf("\nENCHILADAS ROJAS (3pzas): \n"); 
        printf("Con pollo, salsa suiza, gratinadas con queso y frijoles refritos\n");
        printf("$160.00\n\n");
        break;
    default:
        break;
    }
}

void pozole()
{
    int opc;
    printf("\n1 Rojo\n");
    printf("2 Blanco\n");
    printf("3 Verde\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\nPOZOLE ROJO (550g): \n");
        printf("Estilo jalisiense con carne de cerdo o pollo deshebrado\n");
        printf("$159.00\n\n");
        break;
    case 2:
        printf("\nPOZOLE BLANCO (550g): \n");
        printf("Con carne de cerdo o pollo deshebrado\n");
        printf("$150.00\n\n");
        break;
    case 3:
        printf("\nPOZOLE VERDE (550g): \n");
        printf("Estilo guerrero con carne de cerdo o pollo deshebrado y aguacate\n");
        printf("$150.00\n\n");
        break;
    default:
        break;
    }
}