/*
 ============================================================================
 Name        : Clase07_EJ04.c
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
#define QTY_LETRAS 75


int utn_sacarEspacios(char pResultadoArray[], char pArray[], int len);
int utn_insertarStringEnEspacios(char pArray[], int len, char insertarString[]);


int main(void) {
	setbuf (stdout,NULL);

//	char buffer[4096];
// 	cambiar texto por palabras


	char texto[] = {"no hay preguntas tontas, pero si puedes hacer mejores preguntas"};
	char textoModificado[QTY_LETRAS];
//	char caracteres[] = {"123"};


//	CUENTA LA CANTIDAD DE PALABRAS
	int cantEspacios = 0;
	utn_contarEspaciosArrayChar(&cantEspacios, texto, strlen(texto));
	printf("Cant de palabras: %d\n", cantEspacios+1);



// 	PENDIENTE: SACAR ESPACIOS EN UN TEXTO
//	utn_sacarEspacios(texto, strlen(texto));
//	printf("Texto2: %s\n", texto);



//	PENDIENTE: HACER UNA FUNCION QUE ME PERMITA INSERTAR UN STRING CUANDO ENCUENTRE UN ESPACIO
//	utn_insertarStringEnEspacios(texto, strlen(texto), caracteres);
//	printf("Texto4: %s\n", texto);



	printf("Texto1: %s\n", texto);
	printf("Texto5: CantCaracteres: %d  --  texto: %s\n", strlen(texto), texto);
	printf("\n-----------------\n");

	printf("\nTexto6: %s\n", textoModificado);
	utn_inicializarArrayChar('#',textoModificado, QTY_LETRAS);
	printf("\nTexto7: %s\n", textoModificado);
	printf("\n-----------------\n");

	utn_imprimirArrayChar(textoModificado, strlen(textoModificado));
	printf("\n-----------------\n");
	utn_sacarEspacios(textoModificado, texto, strlen(texto));
	printf("Texto8: %s\n", textoModificado);






//	if(!utn_getWords(buffer, strlen(buffer)))
//	{
//		printf("medio\n");
//	}
//
//
//
//
//
//	if(!utn_imprimirArrayChar(buffer, strlen(buffer)))
//	{
//		printf("despues\n");
//	}
//

	return EXIT_SUCCESS;
}



// 	PENDIENTE: SACAR ESPACIOS EN UN TEXTO
/**
 * \biref	NO FUNCIONA
 * \param	pArray  Recibe el array
 * \param	len Longitud del array
 * \return
 */
int utn_sacarEspacios(char pResultadoArray[], char pArray[], int len)
{
	int retorno = -1;

	if(pArray != NULL && len > 0)
	{
		for(int i=0; i<len && pArray[i] != '\0'; i++)
		{
			if (pArray[i] != ' ')
			{
				pResultadoArray[i] = pArray[i];
				printf("%c\n", pResultadoArray[i]);
				printf("if: %s\n", pResultadoArray);
			}
			else
			{
				printf("----------if\n");
			}
		}
		printf("sacarEspacios: %s\n", pResultadoArray);
	}
	return retorno;
}


//	PENDIENTE: HACER UNA FUNCION QUE ME PERMITA INSERTAR UN STRING CUANDO ENCUENTRE UN ESPACIO
/**
 * \biref	NO FUNCIONA
 * \param	pArray  Recibe el array
 * \param	len Longitud del array
 * \return
 */
int utn_insertarStringEnEspacios(char pArray[], int len, char insertarString[])
{
	int retorno = -1;

	if(pArray != NULL && len > 0)
	{
		for(int i=0; i<len && pArray[i] != '\0'; i++)

		{
			if(pArray[i] == ' ')
			{
				pArray[i] = '\n';
			}

			if(pArray[i] == '\n')
			{
				pArray[i+1] = insertarString[0];
				pArray[i+2] = insertarString[1];
				pArray[i+3] = insertarString[2];
			}
		}
	}
	return retorno;
}




















