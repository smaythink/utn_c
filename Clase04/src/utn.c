/*
 * utn.c
 *
 *  Created on: 2 jun. 2020
 *      Author: Smaythink
 */


#include <stdio.h>
#include <stdlib.h>

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
