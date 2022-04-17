/*
 * mostrar y carga forzada.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mostrarResultados(float km, float precioVueloAerolineas, float precioVueloLatam, float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBitcoinAerolineas, float precioUnitarioAerolineas, float precioDebitoLatam, float precioCreditoLatam, float precioBitcoinLatam, float precioUnitarioLatam, float diferenciaDePrecio)
{
    printf("KMs Ingresados: %.2f km\n", km);
    printf("\nPrecio Aerolineas: $ %.2f\n", precioVueloAerolineas);
    printf("Precio con tarjeta de debito: $ %.2f", precioDebitoAerolineas);
    printf("\nPrecio con tarjeta de credito: $ %.2f", precioCreditoAerolineas);
    printf("\nPrecio pagando con bitcoin: %.8f BTC", precioBitcoinAerolineas);
    printf("\nPrecio unitario: $ %.2f", precioUnitarioAerolineas);
    printf("\n\nPrecio LATAM: $ %.2f*\n", precioVueloLatam);
    printf("Precio con tarjeta de debito: $ %.2f", precioDebitoLatam);
    printf("\nPrecio con tarjeta de credito: $ %.2f", precioCreditoLatam);
    printf("\nPrecio pagando con bitcoin: %.8f BTC", precioBitcoinLatam);
    printf("\nPrecio unitario: $ %.2f", precioUnitarioLatam);
    printf("\nLa diferencia de precio es: $ %.2f\n", diferenciaDePrecio);

    system("pause");
}

void cargaForzada(float* km, float* precioVueloAerolineas, float* precioVueloLatam)
{
    *km = 7090;
    *precioVueloAerolineas = 162965;
    *precioVueloLatam = 159339;
}
