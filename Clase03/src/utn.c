/*
 * utn.c
 *
 *  Created on: 1 jun. 2020
 *      Author: Smaythink
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



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

float calcular (int operador1,char operacion,int operador2,float* pResultado)
{
	float retorno = 0;

	printf("Ingrese NUM 1: ");
	fflush(stdin);//WINDOWS
	scanf("%d",&operador1);

	printf("Ingrese Operador\n"
			"	+ = suma\n"
			"	- = resta\n"
			"	x = multiplicacion\n"
			"	/ = division\n");


	fflush(stdin);//WINDOWS
	scanf("%c",&operacion);

	printf("Ingrese NUM 2: ");
	fflush(stdin);//WINDOWS
	scanf("%d",&operador2);

	switch(operacion)
	{
		case '+':
		{
			*pResultado = operador1 + operador2;
			break;
		}
		case '-':
		{
			*pResultado = operador1 - operador2;
			break;
		}
		case 'x':
		{
			*pResultado = operador1 * operador2;
			break;
		}
		case '/':
		{
			if (operador2!=0)
			{
				*pResultado = (float)operador1 / operador2;
			}
			else
			{
				retorno = -1;
			}
			break;
		}
	}
	return retorno;
}
