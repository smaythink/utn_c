/*
 ============================================================================
 Name        : Clase07.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define MES 31


// ALMACENA LA TEMPERATURA DE CADA DIA DURANTE UN MES


int main(void) {
	setbuf (stdout,NULL);


	int opcion;
	float dias[MES];
	int indice;
	float valor;


	utn_inicializarArrayFloat(dias, MES);


	do
	{
		if(!utn_getNumeroInt(&opcion, 	"\n\n------ MENU ------\n\n"
										"1: Imprimir Array?\n"
										"2: Cargar Array?\n", "ERROR ", 1, 2, 2)	)
		{
			switch(opcion)
					{
						case 1:
						{
							//IMPRIMIR ARRAY
							utn_imprimirArrayFloat(dias, MES);
						}
						break;
						case 2:
						{
							//CARGAR ARRAY
							if(!utn_getNumeroInt(&opcion, 	"   1: Imprimir Vacio?\n"
															"   2: Imprimir Lleno?\n"
															"   3: Ingresar indice y valor?\n" , "ERROR ", 1, 3, 2)	)
							{
								switch(opcion)
								{
									case 1:
									{
										utn_imprimirArrayFloatVacio(dias, MES);
									}
									break;

									case 2:
									{
										utn_imprimirArrayFloatLleno(dias, MES);
									}
									break;

									case 3:
									{
										//INGRESAR INDICE Y EL VALOR
										if(		!utn_getNumeroInt(&indice, "Ingrese Indice: ", "ERROR ", 0, MES-1, 2)
											&&	!utn_getNumeroFloat(&valor, "Ingrese Valor: ", "ERROR ", -50, 99.99,2)	)
										{
											utn_cambiarValorArrayFloat(dias, MES, indice, valor);
										}
										else
										{
											printf("ERROR --NO SE PUDO CARGAR EL VALOR\n");
										}
									}
									break;
									default: printf("NINGUNA OPCION ES CORRECTA");
								}
							}
						}
						break;
					}
		}
	}while(1);


	return EXIT_SUCCESS;
}

