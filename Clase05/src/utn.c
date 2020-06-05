/*
 * utn.c
 *
 *  Created on: 2 jun. 2020
 *      Author: Smaythink
 */

//	setbuf (stdout,NULL);
//	system("pause");
//	system("cls");
//	fflush (stdin);//WINDOWS

#include <stdio.h>
#include <stdlib.h>
//0 = TODO OK
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int buffertInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		//rango

		do
		{
			printf("%s",mensaje);
			scanf("%d",&buffertInt);
			if(minimo <= buffertInt && buffertInt <= maximo)
			{
				*pResultado = buffertInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s --RANGO[%d,%d] Reintentos: %d\n",mensajeError,minimo,maximo,reintentos);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

int utn_getCharacter(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	char buffertChar;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush (stdin);//WINDOWS
			scanf("%c",&buffertChar);
			if(minimo <= buffertChar && buffertChar <= maximo)
			{
				*pResultado = buffertChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s --RANGO[%c,%c] Reintentos: %d\n",mensajeError,minimo,maximo,reintentos);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

void inicializarArrayInt(int arrayInt[], int len)
{
	for(int i=0; i<len; i++)
	{
		arrayInt[i] = 0;
	}
}

void imprimirArrayInt(int edades[], int len)
{
	for(int i=0; i<len; i++)
	{
		printf("Indice %02d: %02d\n", i, edades[i]);
	}
}

int promediarArrayInt(float* pPromedio, int arrayInt[], int len)
{
	int retorno = -1;
	int acumulador = 0;
	if(pPromedio != NULL && arrayInt != NULL && len >=0)
	{
		for(int i=0 ; i<len ; i++)
		{
			acumulador = acumulador + arrayInt[i];
		}
		*pPromedio = (float)acumulador/len;
		retorno = 0;
	}
	return retorno;
}

int sacarMaxArrayInt(int* pMaximo, int arrayInt[], int len)
{
	int retorno = -1;
	int newMaximo;
	if(pMaximo != NULL && arrayInt != NULL && len >= 0)
	{
		newMaximo = arrayInt[0];
		for(int i=0 ; i<len ; i++)
		{
			if (newMaximo < arrayInt[i])
			{
				newMaximo = arrayInt[i];
			}
		}
		*pMaximo = newMaximo;
		retorno = 0;
	}
	return retorno;
}

int sacarMinArrayInt(int* pMinimo, int arrayInt[], int len)
{
	int retorno = -1;
	int newMinimo;
	if(pMinimo != NULL && arrayInt != NULL && len >= 0)
	{
		newMinimo = arrayInt[0];
		for(int i=0 ; i<len ; i++)
		{
			if (newMinimo > arrayInt[i])
			{
				newMinimo = arrayInt[i];
			}
		}
		*pMinimo = newMinimo;
		retorno = 0;
	}
	return retorno;
}

int cambiarValorArrayInt(int arrayInt[], int len, int indice, int valor)
{
	int retorno = -1;
	if(arrayInt!=NULL && len>=0 && (len-1)>=indice)
	{
		arrayInt[indice] = valor;
		retorno = 0;
	}
	return retorno;
}

