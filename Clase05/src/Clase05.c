/*
 ============================================================================
 Name        : Clase05_Aux.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define EDADES_LEN 5


int main(void) {
	setbuf (stdout,NULL);


	int edades [EDADES_LEN];
	int edad;
	float promedioEdad;
	int maximoEdad;
	int minimoEdad;
	int indiceArray;


	//INICIALIZAR ARRAY
	inicializarArrayInt(edades, EDADES_LEN);
	imprimirArrayInt(edades, EDADES_LEN);
	printf("--------------\n");
//	system("pause");


	//CARGAR ARRAY E IMPRIMIR
	for(int i=0;i<EDADES_LEN;i++)
	{
		if(!utn_getNumero(&edad,"\t\t\tIngrese EDAD: ","ERROR",0,35,3))
		{
			edades[i] = edad;
		}
	}
	printf("--------------\n");
	imprimirArrayInt(edades, EDADES_LEN);
	printf("--------------\n");


	//PROMEDIAR
	if(!promediarArrayInt(&promedioEdad,edades,EDADES_LEN))
	{
		printf("Edad PROMEDIO: %05.2f\n",promedioEdad);
	}
	else
	{
		printf("ERROR PROMEDIO\n");
	}


	//SACAR MAXIMO Y MINIMO
	sacarMaxArrayInt(&maximoEdad, edades, EDADES_LEN);
	printf ("Edad MAXIMA: %02d\n",maximoEdad);
	sacarMinArrayInt(&minimoEdad, edades, EDADES_LEN);
	printf ("Edad MINIMA: %02d\n",minimoEdad);


	//CAMBIAR VALOR DE UN INDICE E IMPRIMIR
	printf("--------------\n");
	printf("Cambiar un Valor\n");
	utn_getNumero(&indiceArray,"\t\t\tIngrese INDICE: ","ERROR",0,(EDADES_LEN-1),3);
	utn_getNumero(&edad,"\t\t\tIngrese EDAD: ","ERROR",0,35,3);
	printf("--------------\n");
	cambiarValorArrayInt(edades, EDADES_LEN, indiceArray, edad);
	imprimirArrayInt(edades, EDADES_LEN);


	printf("\n\n");
//	system("pause");
	return EXIT_SUCCESS;
}



