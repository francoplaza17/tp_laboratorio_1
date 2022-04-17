/*
 * calculos.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

/**
 * @fn void calcularPrecioDebito(float*, float*, float, float)
 * @brief calcula el precio con tarjeta de debito
 *
 * @param debitoAerolineas guarda el precio debito de aerolineas
 * @param debitoLatam guarda el precio debito de latam
 * @param precioAerolineas muestra el precio ingresado de aerolineas
 * @param precioLatam muestra el precio ingresado de latam
 */
void calcularPrecioDebito(float* debitoAerolineas, float* debitoLatam, float precioAerolineas, float precioLatam);

/**
 * @fn void calcularPrecioCredito(float*, float*, float, float)
 * @brief calcula el precio con tarjeta de credito
 *
 * @param creditoAerolineas guarda el precio credito de aerolineas
 * @param creditoLatam guarda el precio credito de latamguarda el precio credito de latam
 * @param precioAerolineas muestra el precio ingresado de aerolineas
 * @param precioLatam muestra el precio ingresado de latam
 */
void calcularPrecioCredito(float* creditoAerolineas, float* creditoLatam, float precioAerolineas, float precioLatam);

/**
 * @fn void calcularPrecioBitcoin(float*, float*, float, float)
 * @brief calcula el precio en bitcoin
 *
 * @param precioBitcoinAerolineas guarda el precio en bitcoin de aerolineas
 * @param precioBitcoinLatam guarda el precio en bitcoin de latam
 * @param precioAerolineas muestra el precio ingresado de aerolineas
 * @param precioLatam muestra el precio ingresado de latam
 */
void calcularPrecioBitcoin(float* precioBitcoinAerolineas, float* precioBitcoinLatam, float precioAerolineas, float precioLatam);

/**
 * @fn void calcularPrecioUnitarioPorKm(float*, float*, float, float, float)
 * @brief calcula el precio unitario por kilometro
 *
 * @param precioUnitarioAerolineas guarda el precio unitario por kilometro de aerolineas
 * @param precioUnitarioLatam guarda el precio unitario por kilometro de latam
 * @param km muestra los kilometros ingresados
 * @param precioAerolineas muestra el precio ingresado de aerolineas
 * @param precioLatam muestra el precio ingresado de latam
 */
void calcularPrecioUnitarioPorKm(float* precioUnitarioAerolineas, float* precioUnitarioLatam, float km, float precioAerolineas, float precioLatam);

/**
 * @fn void calcularDiferenciaDePrecio(float*, float, float)
 * @brief calcula la diferencia de precio entre latam y aerolineas
 *
 * @param diferencia guarda la diferencia de precio
 * @param precioAerolineas muestra el precio ingresado de aerolineas
 * @param precioLatam muestra el precio ingresado de latam
 */
void calcularDiferenciaDePrecio(float* diferencia, float precioAerolineas, float precioLatam);

#endif /* CALCULOS_H_ */
