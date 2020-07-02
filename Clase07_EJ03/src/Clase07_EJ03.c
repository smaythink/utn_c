/*
 ============================================================================
 Name        : Clase07_EJ03.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define QTY_NUMEROS 5

int main(void) {
	setbuf (stdout,NULL);


// 	FUNCIONES:
//	"1-Imprimir array\n"
//	"2-Ingresar array\n"
//	"3-Borrar numeros impares\n"
//	"4-Ordenar\n"


	int numeros[QTY_NUMEROS] = {23, 4 ,8 ,42, 15};
	int opcionMenu;

//	utn_inicializarArrayInt(numeros, QTY_NUMEROS, 0);

	do
	{
		utn_getNumeroInt(&opcionMenu,	"\n---------------------------\n"
										"1-Imprimir array\n"
										"2-Ingresar array\n"
										"3-Borrar numeros impares\n"
										"4-Ordenar\n"
										"5-Salir\n"
										"---------------------------\n\n","ERROR ", 1, 5, 2);



		switch (opcionMenu)
		{
			case 1://imprimir array
			{
				printf("Imprimir array\n");
				utn_imprimirArrayInt(numeros, QTY_NUMEROS);
			}
			break;
			case 2://ingresar array
			{
				printf("Ingresar array\n");
				utn_ingresarArrayInt(numeros, QTY_NUMEROS, -100, 100);
			}
			break;
			case 3://borrar numeros impares
			{
				printf("Borrar numeros impares\n");
				utn_borrarImparesArrayInt(numeros, QTY_NUMEROS);
			}
			break;
			case 4://ordenar
			{
				printf("Ordenar\n");
				utn_ordenarArrayInt(numeros, QTY_NUMEROS);
			}
			break;
			case 5://salir
			{
				printf("Salir\n");
			}
			break;
		}
	}while (opcionMenu != 5);



	return EXIT_SUCCESS;
}






















