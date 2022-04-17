/*
 * ingresos.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#ifndef INGRESOS_H_
#define INGRESOS_H_

/**
 * @fn void ingreseKilometros(float*, int*)
 * @brief se utiliza para ingresar kilometros
 *
 * @param x guarda los kilometros
 * @param pFlag guarda el valor de la bandera
 */
void ingreseKilometros(float* x, int* pFlag);

/**
 * @fn void ingresePrecioVueloAerolineas(float*, int*, int)
 * @brief se usa para tomar el precio de aerolineas
 *
 * @param y guarda el precio
 * @param pFlag guarda el valor de la bandera
 * @param pFlagKm muestra el valor de la bandera de kilometros
 */
void ingresePrecioVueloAerolineas(float* y, int* pFlag, int pFlagKm);

/**
 * @fn void ingresePrecioVueloLatam(float*, int*, int)
 * @brief se usa para tomar el precio de vuelo latam
 *
 * @param z guarda el precio
 * @param pFlag guarda el valor de la bandera
 * @param pFlagKm muestra el valor de la bandera de kilometros
 */
void ingresePrecioVueloLatam(float* z, int* pFlag, int pFlagKm);

#endif /* INGRESOS_H_ */
