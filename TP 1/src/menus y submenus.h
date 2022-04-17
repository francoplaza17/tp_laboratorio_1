/*
 * menus y submenus.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Franc
 */

#ifndef MENUS_Y_SUBMENUS_H_
#define MENUS_Y_SUBMENUS_H_
/**
 * @fn int menu(float, float, float)
 * @brief es un menu que retorna una opcion
 *
 * @param km muestra el valor de los kilometros ingresados
 * @param precioAerolineas muestra el valor del precio de Aerolineas ingresado
 * @param precioLatam muestra el valor del precio de Latam ingresado
 * @return retorna la opcion
 */
int menu(float km, float precioAerolineas, float precioLatam);

/**
 * @fn int submenuPrecioVuelos()
 * @brief submenu de precios de vuelos
 *
 *
 * @return retorna una opcion
 */
int submenuPrecioVuelos();

#endif /* MENUS_Y_SUBMENUS_H_ */
