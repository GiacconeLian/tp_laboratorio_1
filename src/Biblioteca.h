/*
 * Biblioteca.h
 *
 *  Created on: 14 abr. 2022
 *      Author: liang
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

int menu(void);
float validarKm(float km);
float validarAer(float aer);
float validarLatam(float latam);
float debitoAer(float aer);
float debitoLatam(float latam);
float creditoAer(float aer);
float creditoLatam(float latam);
float bitcoinAer(float aer, float bitcoin);
float bitcoinLatam(float latam, float bitcoin);
float kmAer(float km, float aer);
float kmLatam(float km, float latam);
float diff(float aer, float latam);
void cargaForzada(void);

/// @fn int menu(void)
/// @brief muestra las opciones
///
/// @param
/// @return retorna la opcion seleccionada

/// @fn float validarKm(float km)
/// @brief valida que ingrese un numero mayor a 0
///
/// @param km
/// @return retorno la variable validada

/// @fn float validarAer(float aer)
/// @brief valida que ingrese un número mayor a 0
///
/// @param aer
/// @return retorna la variable validada

/// @fn float validarLatam(float latam)
/// @brief valida que ingrese un número mayor a 0
///
/// @param latam
/// @return retorna la variable validada

/// @fn float debitoAer(float aer)
/// @brief hace un descuento del 10%
///
/// @param aer
/// @return retorna la variable con el descuento

/// @fn float debitoLatam(float latam)
/// @brief hace un descuento del 10%
///
/// @param latam
/// @return retorna la variable con el descuento

/// @fn float creditoAer(float aer)
/// @brief hace un aumento del 25%
///
/// @param aer
/// @return retorna la variable con aumento

/// @fn float creditoLatam(float latam)
/// @brief hace un aumento del 25%
///
/// @param latam
/// @return retorna la variable con aumento

/// @fn  float bitcoinAer(float aer, float bitcoin)
/// @brief calcula el precio en bitcoin
///
/// @param aer bitcoin
/// @return retorna el precio en bitcoin

/// @fn float bitcoinLatam(float latam, float bitcoin)
/// @brief calcula el precio en bitcoin
///
/// @param latam bitcoin
/// @return retorna el precio en bitcoin

/// @fn float kmAer(float km, float aer)
/// @brief calcula el precio unitario
///
/// @param  km aer
/// @return retorna el precio

/// @fn float kmLatam(float km, float latam)
/// @brief calcula el precio unitario
///
/// @param km latam
/// @return retorna el precio

/// @fn float diff(float aer, float latam)
/// @brief calcula la diferencia entre latam y aer
///
/// @param  aer latam
/// @return retorna la diferencia de precios

/// @fn void cargaForzada(void)
/// @brief ejecuta una carga forzada de datos
///
/// @param
/// @return retorna los datos de la carga forzada
#endif /* BIBLIOTECA_H_ */



