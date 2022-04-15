/*
 ============================================================================
 Name        : Tp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	float km = 0;
	float aer = 0;
	float latam = 0;
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


	bitcoin = 4606954.55;
	do
	{
		opcion = menu();
		switch(opcion)
		{
			case 1:
			  printf("\nUsted ha seleccionado la opcion 1.");
			  printf("\nIngrese km: ");
			  scanf("%f", &km);
			  km = validarKm(km);
			  break;
			case 2:
			  printf("\nUsted ha seleccionado la opcion 2.");
			  printf("\nIngrese precio de Aerolinea: ");
			  scanf("%f" , &aer);
			  aer = validarAer(aer);
			  printf("\nIngrese precio de Latam");
			  scanf("%f", &latam);
			  latam = validarLatam(latam);
			  break;
			  case 3:
				  if(aer == 0 || latam == 0 || km == 0)
				  {
					  printf("\nError vuelve a ingesar los datos.");
				  }
				  else
				  {
					  printf("\nUsted ha seleccionado la opcion 3.");
					  debitoAerolinea = debitoAer(aer);
					  debitoLat = debitoLatam(latam);
					  creditoAerolinea = creditoAer(aer);
					  creditoLat = creditoLatam(latam);
					  bitcoinAerolinea = bitcoinAer(aer, bitcoin);
					  bitcoinLat = bitcoinLatam(latam, bitcoin);
					  kmAerolinea = kmAer(km, aer);
					  kmLat = kmLatam(km, latam);
					  diferencia = diff(aer, latam);
				  }
		      break;
			  case 4:
				  if(aer == 0 || latam == 0 || km == 0)
				   {
				  	  printf("\nError vuelve a ingesar los datos.");
				   }
				  else
				  {
					  printf("\nUsted ha seleccionado la opcion 4.");

					  printf("\nLos kilometros ingresados son %fKm", km);

					  printf("\n\tAerolinea: \n");
					  printf("\nPrecio de Aerolinea: $%.2f", aer);
					  printf("\nPrecio con tarjeta de debito: $%.2f"
					  		"\nPrecio con tarjeta de credito: $%.2f"
					  		"\nPrecio pagando con bitcoin: %fBTC"
					  		"\nPrecio unitario: $%.2f", debitoAerolinea, creditoAerolinea, bitcoinAerolinea, kmAerolinea);

					  printf("\n\tLatam: \n");
					  printf("\nPrecio de Latam $%f", latam);
					  printf("\nPrecio con tarjeta de debito: $%.2f"
					  		"\nPrecio con tarjeta de credito: $%.2f"
					  		"\nPrecio pagando con bitcoin: %fBTC"
					  		"\nPrecio unitario: $%.2f", debitoLat, creditoLat, bitcoinLat, kmLat);
					  printf("\nLa diferencia de precio es: $%.2f", diferencia);
				  }
			  break;
			case 5:
			  printf("\nUsted ha seleccionado la opcion 5.");

			  cargaForzada();
			  break;
			case 6:
			  printf("\n Bye UwU");
		}
	}while(opcion != 6);
	return 0;
}
