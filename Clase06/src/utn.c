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


/**
 * \biref
 * \param
 * \return
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int getInt(int* pArray);
static int esNumerica(char* pArray);
static int myGets(char* cadena, int longitud);


/**
 * \biref
 * \param pArray
 * \return Retorna 0 (EXITO) si se obtiene un numero y -1 (ERROR) si no
 */
static int getInt(int* pArray)
{
	int retorno = -1;
	char buffer[4096];

	if(myGets(buffer, sizeof(buffer)) == 0 && esNumerica(buffer))
	{
		retorno = 0;
		*pArray = atoi(buffer);
	}
	return retorno;
}



/**
 * \biref
 * \param
 * \return
 */
static int myGets(char* cadena, int longitud)
{
	fflush (stdin);//WINDOWS
	fgets(cadena, longitud, stdin);
	cadena[strnlen(cadena, longitud)-1] = '\0';
	return 0;
}



/**
 * \biref Verifica si la cadena ingresada es numerica
 * \param pArray pArray de caracteres a ser analizados
 * \return Retorna '1'(VERDADERO) si la cadena es numerica | '0'(FALSO) si no lo es
 */
int esNumerica(char* pArray)
{
	int retorno = 1;
	int i = 0;

	if(pArray != NULL)
	{
		if(pArray[0] == '-')
		{
			i = 1;
		}

		for(  ; pArray[i] != '\0'; i++)
		{
			if(pArray[i] < '0' || '9' <pArray[i])
			{
				retorno = 0;

				break;
			}
		}
	}
	return retorno;
}





/**
 * \biref Solicita un numero al usuario, lo valida, verifica y devuelve el resultado
 * \param pResultado Puntero al resultado, alli dejara el numero ingreasdo por el usuario
 * \param mensaje Es el mensaje a ser mostrado
 * \param mensajeError Es el mensaje a ser mostrado en casa de error
 * \param minimo Valor minimo aceptado
 * \param maximo Valor maximo aceptado
 * \param reintentos Cantidad de reintentos en el caso de error
 * \return En caso de exito (0), en caso de error (-1)
 */
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		//rango
		do
		{
			printf("%s",mensaje);
			if(getInt(&bufferInt) == 0 && minimo <= bufferInt && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			printf("%s --RANGO[%d,%d] Reintentos: %d\n",mensajeError,minimo,maximo,reintentos);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}



/**
 * \biref
 * \param
 * \return
 */
//int utn_getWords(char* pArray, int longitud)
//{
//	int retorno = 0;
//	char buffer[4096];
//
//	if (myGets(buffer, sizeof(buffer)) == 0)
//	{
//		printf("FOR\n");
//		for(int i=0; i<strlen(buffer); i++)
//		{
//			if(		//buffer[i] != " "
//					(buffer[i] < 'a' || 'z' < buffer[i])
//				&&	(buffer[i] < 'A' || 'Z' < buffer[i])	)
//			{
//				break;
//				retorno = -1;
//			//	!utn_getCharacter(buffer, "", "", 'a', 'z', 2)
//			//||!utn_getCharacter(buffer, "","",'A','Z',2)
//			}
//		}
//		strncpy (pArray, buffer, sizeof(buffer));
//	}
//	return retorno;
//}




/**
 * \biref
 * \param
 * \return
 */
int utn_getCharacter(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	char bufferChar;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush (stdin);//WINDOWS
			scanf("%c",&bufferChar);
			if(minimo <= bufferChar && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
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
/**
 * \biref
 * \param
 * \return
 */
void utn_inicializarArrayInt(int arrayInt[], int len)
{
	for(int i=0; i<len; i++)
	{
		arrayInt[i] = 0;
	}
}
/**
 * \biref
 * \param
 * \return
 */
void utn_imprimirArrayInt(int edades[], int len)
{
	for(int i=0; i<len; i++)
	{
		printf("Indice %02d: %02d\n", i, edades[i]);
	}
}
/**
 * \biref
 * \param
 * \return
 */
int utn_promediarArrayInt(float* pPromedio, int arrayInt[], int len)
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
/**
 * \biref
 * \param
 * \return
 */
int utn_sacarMaxArrayInt(int* pMaximo, int arrayInt[], int len)
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
/**
 * \biref
 * \param
 * \return
 */
int utn_sacarMinArrayInt(int* pMinimo, int arrayInt[], int len)
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
/**
 * \biref
 * \param
 * \return
 */
int utn_cambiarValorArrayInt(int arrayInt[], int len, int indice, int valor)
{
	int retorno = -1;
	if(arrayInt!=NULL && len>=0 && (len-1)>=indice)
	{
		arrayInt[indice] = valor;
		retorno = 0;
	}
	return retorno;
}
/**
 * \biref Ordena un Array de enteros Descendente
 * \param pArray Es el puntero alarray a ser ordenado
 * \param size Es la longitud del array
 * \return Cantidad de interacciones necesarias para ordenar'0' = OK | '-1' = ERROR
 */
int utn_ordenarArrayInt(int* pArray, int limite)
{
	int retorno = -1;
	int flagSwap;
	int buffer;
	int newLimite = 0;


	if(pArray != NULL && limite >=0)
	{
		retorno = 0;
		newLimite = limite-1;
		do
		{
			flagSwap = 0;
			for(int i=0; i<newLimite; i++)
			{
				if(pArray[i] < pArray[i+1]) //HAGO SWAP
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			newLimite--;//DECREMENTO EL LIMITE DEL ARRAY
		}while(flagSwap);
	}
	return retorno;
}



/**
 * \biref ORDENA un Array de CARACTERES Ascendente
 * \param pArray Es el puntero alarray a ser ordenado
 * \param size Es la longitud del array
 * \return '0' = OK | '-1' = ERROR
 */
int utn_ordenarArrayChar(char* pArray, int limite)
{
	int retorno = -1;
	int flagSwap;
	char buffer;
	int newLimite = 0;


	if(pArray != NULL && limite >=0)
	{
		retorno = 0;
		newLimite = limite-1;
		do
		{
			flagSwap = 0;
			for(int i=0; i<newLimite; i++)
			{
				if(pArray[i] > pArray[i+1]) //HAGO SWAP
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			newLimite--;//DECREMENTO EL LIMITE DEL ARRAY
		}while(flagSwap);
	}
	return retorno;
}
/**
 * \biref IMPRIME un Array de ENTEROS DESCENDENTE
 * \param pArray Es el puntero alarray a ser ordenado
 * \param size Es la longitud del array
 * \return '0' = OK | '-1' = ERROR
 */
int utn_imprimirArrayChar(char* pArray, int limite)
{
	int retorno = -1;

	if(pArray != NULL && limite >=0)
	{
		retorno = 0;
		for(int i=0;i<limite;i++)
		{
			printf("Indice %02d - Valor %c\n",i,pArray[i]);
		}
	}
	return retorno;
}




