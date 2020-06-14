/*
 ============================================================================
 Name        : Clase06.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main(void) {
	setbuf (stdout,NULL);



	int opcion;

	//MENU
	do
	{
		printf("\t\t-----------------\n"
				"\t\tELIJA UNA OPCION:\n"
				"\t\t1 - SALIR\n"
				"\t\t2 - \n"
				"\t\t3 - \n"
				"\t\t4 - \n"
				"\t\t-----------------\n");


		if (!utn_getNumero(&opcion, "\t\t\t\t       OPCION? ", "Error ", 1, 4, 2))
		{
			switch (opcion)
			{
				case 1:
				{
					//SALIR
				}
				break;
				case 2:
				{
					printf("INGRESO OPCION 2\n");
				}
				break;
				case 3:
				{
					printf("INGRESO OPCION 3\n");
				}
				break;
				case 4:
				{
					printf("INGRESO OPCION 4\n");
				}
				break;
				default: printf("ninguna es correcta\n");
			}
		}
		else
		{
			printf("OPCION INCORRECTA\n");
		}

	}while(opcion != 1);



	printf("TERMINO PROGRAMA");




	return EXIT_SUCCESS;
}
