/*
 * menus y submenus.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu(float km, float precioAerolineas, float precioLatam)
{
    int opcion;
    int cant;

    system("cls");
    printf("*** Menu ***\n");
    printf("1- Ingresar Kilometros. (km = %.2f)\n", km);
    printf("2- Ingresar Precio de Vuelos. (Aerolineas = %.2f, Latam = %.2f)\n", precioAerolineas, precioLatam);
    printf("3- Calcular todos los costos.\n");
    printf("4- Informar resultados.\n");
    printf("5- Carga forzada de datos.\n");
    printf("6- Salir.\n");
    printf("Ingrese una opcion: ");
    fflush(stdin);
    cant = scanf("%d", &opcion);
    if(cant == 0){
        opcion=7;
    }
    system("pause");
    return opcion;
}

int submenuPrecioVuelos()
{
    int opcion;
    int cant;

    printf("*** Submenu ***\n");
    printf("1- Precio vuelo Aerolineas.\n");
    printf("2- Precio vuelo Latam.\n");
    printf("3- Volver al menu principal.\n");
    printf("Ingrese una opcion: ");
    fflush(stdin);
    cant = scanf("%d", &opcion);
    if(cant == 0){
        opcion = 4;
    }
    system("pause");

    return opcion;
}
