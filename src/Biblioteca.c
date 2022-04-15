/*
 * Biblioteca.c
 *
 *  Created on: 14 abr. 2022
 *      Author: liang
 */

#include <stdio.h>
int menu(void)
{
	int opcion;

	printf("\n1. Ingresar kilometros");
	printf("\n2. Ingresar precio de vuelos");
	printf("\n3. Calcular todos los costos");
	printf("\n4. Informar resultados");
	printf("\n5. Carga forzada de datos");
	printf("\n6. Salir\n");
	printf("\nElija una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}
float validarKm(float km)
{
	while(km <= 0)
	{
		printf("\nError, vuelva ingresar km.");
		scanf("%f", &km);
	}

	return km;
}
float validarAer(float aer)
{
	while(aer <= 0)
	{
		printf("\nError, vuelva ingresar otro precio.");
		scanf("%f", &aer);
	}

	return aer;
}
float validarLatam(float latam)
{
	while(latam <= 0)
	{
		printf("\nError, vuelva ingresar otro precio.");
		scanf("%f", &latam);
	}

	return latam;
}
float debitoAer(float aer)
{
	aer = aer - (aer * 0.10);

	return aer;
}
float debitoLatam(float latam)
{
	latam = latam - (latam * 0.10);

	return latam;
}
float creditoAer(float aer)
{
	aer = aer + (aer * 0.25);

	return aer;
}
float creditoLatam(float latam)
{
	latam = latam + (latam * 0.25);

	return latam;
}
float bitcoinAer(float aer, float bitcoin)
{
	aer = aer / bitcoin;

	return aer;
}
float bitcoinLatam(float latam, float bitcoin)
{
	latam = latam / bitcoin;

	return latam;
}
float kmAer(float km, float aer)
{
	aer = aer / km;

	return aer;
}
float kmLatam(float km, float latam)
{
	latam = latam / km;

	return latam;
}
float diff(float aer, float latam)
{
	float diferencia;

	if(aer > latam)
	{
		diferencia = aer - latam;
	}
	else
	{
		diferencia = latam - aer;
	}

	return diferencia;
}
void cargaForzada(void)
{
	float km;
	float aer;
	float latam;
	float debitoAerolinea;
	float debitoLat;
	float creditoAerolinea;
	float creditoLat;
	float bitcoin;
	float bitcoinAerolinea;
	float bitcoinLat;
	float kmAerolinea;
	float kmLat;
	float diferencia;
	float validarKilometros;
	float validarAerolinea;
	float validarLat;


	km = 7090;
	aer = 162965;
	latam = 159339;
	bitcoin = 4606954.55;

	validarKilometros = validarKm(km);
	validarAerolinea = validarAer(aer);
	validarLat = validarLatam(latam);

	debitoAerolinea = aer - (aer * 0.10);
	debitoLat = latam - (latam * 0.10);
	creditoAerolinea = aer + (aer * 0.25);
	creditoLat = latam + (latam * 0.25);
	bitcoinAerolinea = aer / bitcoin;
	bitcoinLat = latam / bitcoin;
	kmAerolinea = aer / km;
	kmLat = latam / km;
	if(latam > aer)
	{
		diferencia = latam - aer;
	}
	else
	{
		diferencia = aer - latam;
	}

	  printf("\nLos kilometros ingresados son %.2fKm", validarKilometros);

	  printf("\n\tAerolinea: \n");
	  printf("\nPrecio de Aerolinea: $%.2f", validarAerolinea);
	  printf("\nPrecio con tarjeta de debito: $%.2f"
	  		"\nPrecio con tarjeta de credito: $%.2f"
	  		"\nPrecio pagando con bitcoin: %fBTC"
	  		"\nPrecio unitario: $%.2f", debitoAerolinea, creditoAerolinea, bitcoinAerolinea, kmAerolinea);

	  printf("\n\tLatam: \n");
	  printf("\nPrecio de Latam $%.2f", validarLat);
	  printf("\nPrecio con tarjeta de debito: $%.2f"
	  		"\nPrecio con tarjeta de credito: $%.2f"
	  		"\nPrecio pagando con bitcoin: %fBTC"
	  		"\nPrecio unitario: $%.2f", debitoLat, creditoLat, bitcoinLat, kmLat);
	  printf("\nLa diferencia de precio es: $%.2f", diferencia);
}
