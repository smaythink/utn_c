/*
 ============================================================================
 Name        : Clase04.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf (stdout,NULL);
	fflush (stdin);//WINDOWS
	//__fpurge(stdin);//LINUX
	int respuesta;
	int resultadoInt;
	char resultadoChar;

	respuesta = utn_getNumero(&resultadoInt,"Ingrese NUMERO: \n","ERROR!! \n",10,20,3);


	if (respuesta == 0)
	{
		printf ("salio bien, numero es: %d\n",resultadoInt);
	}
	else
	{
		printf ("salio MALLLL\n");
	}

	respuesta = utn_getCharacter(&resultadoChar,"Ingrese LETRA: \n","ERROR!! \n",'A','C',3);

	if (respuesta == 0)
	{
		printf ("salio bien, letra es: %c\n",resultadoChar);
	}
	else
	{
		printf ("salio MALLLL\n");
	}






	return EXIT_SUCCESS;
}
