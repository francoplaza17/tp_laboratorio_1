/*
 * ingresos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void ingreseKilometros(float* x, int* pFlag)
{
    printf("Por favor, ingrese los kilometros: ");
    fflush(stdin);
    scanf("%f", x);

    while(*x<1)
    {
        printf("\nERROR. Ingrese los kilometros correctamente: ");
        fflush(stdin);
        scanf("%f", x);
        system("pause");
    }
    *pFlag = 1;
    system("pause");
}

void ingresePrecioVueloAerolineas(float* y, int* pFlag, int pFlagKm)
{
    if(pFlagKm == 0)
    {
        printf("No se puede ingresar el precio, primero debe ingresar los kilometros.\n");
        system("pause");
    }
    else
    {
        printf("Por favor, ingrese el precio: ");
        fflush(stdin);
        scanf("%f", y);

        while(*y<1)
        {
            printf("\nERROR. Ingrese el precio correctamente: ");
            fflush(stdin);
            scanf("%f", y);
            system("pause");
        }
        *pFlag = 1;
        system("pause");
    }
}

void ingresePrecioVueloLatam(float* z, int* pFlag, int pFlagKm)
{
    if(pFlagKm == 0)
    {
        printf("No se puede ingresar el precio, primero debe ingresar los kilometros.\n");
        system("pause");
    }
    else
    {
        printf("Por favor, ingrese el precio: ");
        fflush(stdin);
        scanf("%f", z);

        while(*z<1)
        {
            printf("\nERROR. Ingrese el precio correctamente: ");
            fflush(stdin);
            scanf("%f", z);
            system("pause");
        }
        *pFlag = 1;
        system("pause");
    }
}
