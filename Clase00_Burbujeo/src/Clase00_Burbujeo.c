/*
 ============================================================================
 Name        : Clase00_Burbujeo.c
 Author      : Martin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 9
#define TEXTO_LEN 50


int printArrayInt(int* pArray, int limite);
int ordenarArrayInt(int* pArray, int limite);
int ordenarArrayChar(char* pArray, int limite);
int printArrayChar(char* pArray, int limite);

int main(void) {
	int edades[QTY_EMPLEADOS]={54,26,93,17,77,31,44,55,27};
	printArrayInt(edades,QTY_EMPLEADOS);
	printf("---------------------------\n");
	ordenarArrayInt(edades,QTY_EMPLEADOS);
	printArrayInt(edades,QTY_EMPLEADOS);
	printf("---------------------------\n");




	char letras[QTY_EMPLEADOS]={'g','w','k','c','r','a','o','h','s'};
	printArrayChar(letras,QTY_EMPLEADOS);
	printf("---------------------------\n");
	ordenarArrayChar(letras,QTY_EMPLEADOS);
	printArrayChar(letras,QTY_EMPLEADOS);
	printf("---------------------------\n");





	return EXIT_SUCCESS;
}




/**
 * \biref ORDENA un Array de CARACTERES Ascendente
 * \param pArray Es el puntero alarray a ser ordenado
 * \param size Es la longitud del array
 * \return '0' = OK | '-1' = ERROR
 */
int ordenarArrayChar(char* pArray, int limite)
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
int printArrayChar(char* pArray, int limite)
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

/**
 * \biref Ordena un Array de enteros Descendente
 * \param pArray Es el puntero alarray a ser ordenado
 * \param size Es la longitud del array
 * \return Cantidad de interacciones necesarias para ordenar'0' = OK | '-1' = ERROR
 */
int ordenarArrayInt(int* pArray, int limite)
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



//
///**
// * \biref Ordena un Array de enteros Descendente con comentarios y pruebas
// * \param pArray Es el puntero alarray a ser ordenado
// * \param size Es la longitud del array
// * \return Cantidad de interacciones necesarias para ordenar'0' = OK | '-1' = ERROR
// */
//int ordenarArrayInt(int* pArray, int limite)
//{
//	int retorno = -1;
//	int flagSwap;
//	int buffer;
//	int cantVuelta = 0;
//	int menosVuelta = 0;
//
//
//	if(pArray != NULL && limite >=0)
//	{
//		retorno = 0;
//		printf("SWAP: ");
//		do
//		{
//			flagSwap = 0;
//			for(int i=0; i<limite-1-menosVuelta; i++)
//			{
//				if(pArray[i] < pArray[i+1]) //HAGO SWAP
//				{
//					flagSwap++;
//					buffer = pArray[i];
//					pArray[i] = pArray[i+1];
//					pArray[i+1] = buffer;
//				}
//				cantVuelta++;
//			}
////			printArrayInt(pArray,limite);
////			printf("---------------------------\n");
//			printf("%d | ",flagSwap);
//			menosVuelta++;
//		}while(flagSwap>0);
//		printf("\nCANT VUELTAS: %d\n",cantVuelta);
//	}
//	return retorno;
//}
//




/**
 * \biref Imprime un Array
 * \param
 * \param
 * \return '0' = OK | '-1' = ERROR
 */
int printArrayInt(int* pArray, int limite)
{
	int retorno = -1;

	if(pArray != NULL && limite >=0)
	{
		retorno = 0;
		for(int i=0;i<limite;i++)
		{
			printf("[DEBUG] Indice %d - Valor %d\n",i,pArray[i]);
		}
	}
	return retorno;
}























