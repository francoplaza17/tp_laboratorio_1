/*
 * calculos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void calcularPrecioDebito(float* debitoAerolineas, float* debitoLatam, float precioAerolineas, float precioLatam)
{
    float descuentoAerolineas;
    float descuentoLatam;

    descuentoAerolineas = precioAerolineas * 10 / 100;
    descuentoLatam = precioLatam * 10 / 100;

    *debitoAerolineas = precioAerolineas - descuentoAerolineas;

    *debitoLatam = precioLatam - descuentoLatam;
}

void calcularPrecioCredito(float* creditoAerolineas, float* creditoLatam, float precioAerolineas, float precioLatam)
{
    float interesAerolineas;
    float interesLatam;

    interesAerolineas = precioAerolineas * 25 / 100;
    interesLatam = precioLatam * 25 / 100;

    *creditoAerolineas = precioAerolineas + interesAerolineas;

    *creditoLatam = precioLatam + interesLatam;
}

void calcularPrecioBitcoin(float* precioBitcoinAerolineas, float* precioBitcoinLatam, float precioAerolineas, float precioLatam)
{
    *precioBitcoinAerolineas = precioAerolineas / 4606954.55;
    *precioBitcoinLatam = precioLatam / 4606954.55;
}

void calcularPrecioUnitarioPorKm(float* precioUnitarioAerolineas, float* precioUnitarioLatam, float km, float precioAerolineas, float precioLatam)
{
    *precioUnitarioAerolineas = precioAerolineas / km;
    *precioUnitarioLatam = precioLatam / km;
}

void calcularDiferenciaDePrecio(float* diferencia, float precioAerolineas, float precioLatam)
{
    if(precioAerolineas>precioLatam)
    {
        *diferencia = precioAerolineas - precioLatam;
    }
    else
    {
        *diferencia = precioLatam - precioAerolineas;
    }
}
