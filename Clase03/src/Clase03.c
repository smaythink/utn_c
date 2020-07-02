/*
 ============================================================================
 Name        : Clase02.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "utn.h"



int main(void) {
	setbuf (stdout,NULL);
	fflush (stdin);//WINDOWS
	//__fpurge(stdin);//LINUX

	float resultado;
	int aux;

	aux = calcular (30,'+',20,&resultado);

	if(aux == 0)
	{
		printf ("IF resultado es: %f",resultado);
	}

	if(aux == -1)
	{
		printf ("ERRORRRRRRRRRR");
	}


	return 0;
}


