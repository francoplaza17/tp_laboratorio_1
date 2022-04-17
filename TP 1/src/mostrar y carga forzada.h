/*
 * mostrar y carga forzada.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#ifndef MOSTRAR_Y_CARGA_FORZADA_H_
#define MOSTRAR_Y_CARGA_FORZADA_H_

/**
 * @fn void mostrarResultados(float, float, float, float, float, float, float, float, float, float, float, float)
 * @brief muestra los resultados de lo calculado en la opcion 3
 *
 * @param km muestra los kilometros ingresados
 * @param precioVueloAerolineas muestra el precio ingresado del vuelo aerolineas
 * @param precioVueloLatam muestra el precio ingresado del vuelo latam
 * @param precioDebitoAerolineas muestra el precio del vuelo de aerolineas con tarjeta de debito
 * @param precioCreditoAerolineas muestra el precio del vuelo de aerolineas con tarjeta de credito
 * @param precioBitcoinAerolineas muestra el precio del vuelo de aerolineas en bitcoin
 * @param precioUnitarioAerolineas muestra el precio unitario por kilometro del vuelo de aerolineas
 * @param precioDebitoLatam muestra el precio del vuelo de latam con tarjeta de debito
 * @param precioCreditoLatam muestra el precio del vuelo de latam con tarjeta de credito
 * @param precioBitcoinLatam muestra el precio del vuelo de latam en bitcoin
 * @param precioUnitarioLatam muestra el precio unitario por kilometro del vuelo de latam
 * @param diferenciaDePrecio muestra la diferencia de precio entre los vuelos de latam y aerolineas
 */
void mostrarResultados(float km, float precioVueloAerolineas, float precioVueloLatam, float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBitcoinAerolineas, float precioUnitarioAerolineas, float precioDebitoLatam, float precioCreditoLatam, float precioBitcoinLatam, float precioUnitarioLatam, float diferenciaDePrecio);

/**
 * @fn void cargaForzada(float*, float*, float*)
 * @brief se cargan datos forzados
 *
 * @param km guarda los kilometros
 * @param precioVueloAerolineas guarda el precio de vuelo de aerolineas
 * @param precioVueloLatam guarda el precio de vuelo de latam
 */
void cargaForzada(float* km, float* precioVueloAerolineas, float* precioVueloLatam);

#endif /* MOSTRAR_Y_CARGA_FORZADA_H_ */
