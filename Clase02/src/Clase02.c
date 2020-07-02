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

float promediar (void);

int main(void) {
	setbuf (stdout,NULL);
	fflush (stdin);//WINDOWS
	//__fpurge(stdin);//LINUX
	float resultado;


	resultado = promediar();
	printf ("el promedio es %.2f",resultado);


	return 0;
}


float promediar (void)
{
	int bufferInt;
	int promedio=0;
	int contMax=0;
	int contMin=0;
	int i=0;

	printf("INGRESE num %d: ",i);
	scanf("%d",&bufferInt);
	contMax = bufferInt;
	contMin = bufferInt;

	while (bufferInt != 888)
	{
		promedio = promedio + bufferInt;
		i++;

		if (contMax < bufferInt)
		{
			contMax = bufferInt;
		}

		if (contMin > bufferInt)
		{
			contMin = bufferInt;
		}

		printf("INGRESE num %d: ",i);
		fflush (stdin);//WINDOWS
		//__fpurge(stdin);//LINUX
		scanf("%d",&bufferInt);
	}


	//printf("Promedio: \t %d  i:%d\n",promedio,i);
	//printf("Promedio: \t %+04.2f\n",(float)promedio/i);
	printf("contMax: \t %+04d\n",contMax);
	printf("contMin: \t %+04d\n",contMin);

	return (float)promedio/i;

}






//	EL CODIGO DE ABAJO FUNCIONA MAL
//	LA VARIABLE I CUENTA DE MAS, Y SE CALCULA MAL EL PROMEDIO
//	HAY QUE EVALUAR EL INGRESO DE 888 EN VARIOS CONDICIONALES
//
//	do
//	{
//		printf("ingrese num %d: ",i);
//		scanf("%d",&bufferInt);
//
//		if (bufferInt != 888)
//		{
//			promedio = promedio + bufferInt;
//		}
//
//		if (i==0)
//		{
//			contMax = bufferInt;
//			contMin = bufferInt;
//		}
//
//		if (contMax < bufferInt && bufferInt!= 888)
//		{
//			contMax = bufferInt;
//		}
//
//		if (contMin > bufferInt && bufferInt!= 888)
//		{
//			contMin = bufferInt;
//		}
//		i++;
//		printf("%d\n",i);
//	}while(bufferInt != 888);
//
//	printf("Promedio: \t %d  i:%d\n",promedio,i);
//	printf("Promedio: \t %+04.2f\n",(float)promedio/i);
//	printf("contMax: \t %+04d\n",contMax);
//	printf("contMin: \t %+04d\n",contMin);


