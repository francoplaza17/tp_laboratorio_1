/*
 ============================================================================
 Name        : TP.c
 Author      : Franco Ezequiel Plaza
 Version     :
 Copyright   : Your copyright notice
 Description : Trabajo practico Laboratorio 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menus y submenus.h"
#include "ingresos.h"
#include "calculos.h"
#include "mostrar y carga forzada.h"

int main(void) {
	setbuf(stdout, NULL);

	char salirMenu = 'n';
	char salirSubmenu = 'n';
	float kilometrosIngresados = 0;
	float precioVueloAerolineasIngresado = 0;
	float precioVueloLatamIngresado = 0;
	float precioTarjetaDebitoAerolineas = 0;
	float precioTarjetaDebitoLatam = 0;
	float precioTarjetaCreditoAerolineas = 0;
	float precioTarjetaCreditoLatam = 0;
	float precioBitcoinAerolineas = 0;
	float precioBitcoinLatam = 0;
	float precioUnitarioPorKmAerolineas = 0;
	float precioUnitarioPorKmLatam = 0;
	float diferenciaDePrecio = 0;
	float kilometrosForzados = 7090;
	float precioVueloAerolineasForzado = 162965;
	float precioVueloLatamForzado = 159339;
	float precioTarjetaDebitoAerolineasForzado = 0;
	float precioTarjetaDebitoLatamForzado = 0;
	float precioTarjetaCreditoAerolineasForzado = 0;
	float precioTarjetaCreditoLatamForzado = 0;
	float precioBitcoinAerolineasForzado = 0;
	float precioBitcoinLatamForzado = 0;
	float precioUnitarioPorKmAerolineasForzado = 0;
	float precioUnitarioPorKmLatamForzado = 0;
	float diferenciaDePrecioForzado = 0;
	int flagKilometrosIngresados = 0;
	int flagPrecioVueloAerolineas = 0;
	int flagPrecioVueloLatam = 0;
	int flagCostos = 0;

	do
	{
		switch(menu(kilometrosIngresados, precioVueloAerolineasIngresado, precioVueloLatamIngresado)){
			case 1:
				ingreseKilometros(&kilometrosIngresados, &flagKilometrosIngresados);
				break;
			case 2:
				while(salirSubmenu != 's')
				{
					switch(submenuPrecioVuelos())
						{
						 case 1:
								ingresePrecioVueloAerolineas(&precioVueloAerolineasIngresado, &flagPrecioVueloAerolineas, flagKilometrosIngresados);
								//fflush(stdin);
								break;
						 case 2:
								ingresePrecioVueloLatam(&precioVueloLatamIngresado, &flagPrecioVueloLatam, flagKilometrosIngresados);
								//fflush(stdin);
								break;
						 case 3:
								printf("\nVolviendo al menu principal...\n");
								salirSubmenu = 's';
								system("pause");
								break;
						 default:
								printf("ERROR. Ingrese una opción correcta.\n");
								//fflush(stdin);
								system("pause");
								break;
						}
				}
				break;
			case 3:
				if(flagPrecioVueloAerolineas == 0 || flagPrecioVueloLatam == 0)
				{
					printf("ERROR. Primero debe ingresar los precios.\n");
					system("pause");
				}
				else
				{
					calcularPrecioDebito(&precioTarjetaDebitoAerolineas, &precioTarjetaDebitoLatam, precioVueloAerolineasIngresado, precioVueloLatamIngresado);
					calcularPrecioCredito(&precioTarjetaCreditoAerolineas, &precioTarjetaCreditoLatam, precioVueloAerolineasIngresado, precioVueloLatamIngresado);
					calcularPrecioBitcoin(&precioBitcoinAerolineas, &precioBitcoinLatam, precioVueloAerolineasIngresado, precioVueloLatamIngresado);
					calcularPrecioUnitarioPorKm(&precioUnitarioPorKmAerolineas, &precioUnitarioPorKmLatam, kilometrosIngresados, precioVueloAerolineasIngresado, precioVueloLatamIngresado);
					calcularDiferenciaDePrecio(&diferenciaDePrecio, precioVueloAerolineasIngresado, precioVueloLatamIngresado);
					flagCostos = 1;
					printf("Se calcularon los costos.\n");
					system("pause");
				}
				break;
			case 4:
				if(flagCostos == 0)
				{
					printf("ERROR. Primero debe calcular los costos.\n");
					system("pause");
				}
				else
				{
					mostrarResultados(kilometrosIngresados, precioVueloAerolineasIngresado, precioVueloLatamIngresado, precioTarjetaDebitoAerolineas, precioTarjetaCreditoAerolineas, precioBitcoinAerolineas, precioUnitarioPorKmAerolineas, precioTarjetaDebitoLatam, precioTarjetaCreditoLatam, precioBitcoinLatam, precioUnitarioPorKmLatam, diferenciaDePrecio);
				}
				break;
			case 5:
				cargaForzada(&kilometrosForzados, &precioVueloAerolineasForzado, &precioVueloLatamForzado);
				calcularPrecioDebito(&precioTarjetaDebitoAerolineasForzado, &precioTarjetaDebitoLatamForzado, precioVueloAerolineasForzado, precioVueloLatamForzado);
				calcularPrecioCredito(&precioTarjetaCreditoAerolineasForzado, &precioTarjetaCreditoLatamForzado, precioVueloAerolineasForzado, precioVueloLatamForzado);
				calcularPrecioBitcoin(&precioBitcoinAerolineasForzado, &precioBitcoinLatamForzado, precioVueloAerolineasForzado, precioVueloLatamForzado);
				calcularPrecioUnitarioPorKm(&precioUnitarioPorKmAerolineasForzado, &precioUnitarioPorKmLatamForzado, kilometrosForzados, precioVueloAerolineasForzado, precioVueloLatamForzado);
				calcularDiferenciaDePrecio(&diferenciaDePrecioForzado, precioVueloAerolineasForzado, precioVueloLatamForzado);
				mostrarResultados(kilometrosForzados, precioVueloAerolineasForzado, precioVueloLatamForzado, precioTarjetaDebitoAerolineasForzado, precioTarjetaCreditoAerolineasForzado, precioBitcoinAerolineasForzado, precioUnitarioPorKmAerolineasForzado, precioTarjetaDebitoLatamForzado, precioTarjetaCreditoLatamForzado, precioBitcoinLatamForzado, precioUnitarioPorKmLatamForzado, diferenciaDePrecioForzado);
				break;
			case 6:
				printf("\nSaliendo...\n");
				salirMenu = 's';
				system("pause");
				break;
			default:
				printf("\n ERROR. Opcion invalida.\n");
				system("pause");
				break;
		}

	}while(salirMenu != 's');


	return EXIT_SUCCESS;
}
