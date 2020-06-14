/*
 * utn.h
 *
 *  Created on: 2 jun. 2020
 *      Author: Smaythink
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getCharacter(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos);
void utn_imprimirArrayInt(int edades[], int len);
int utn_promediarArrayInt(float* pPromedio,int arrayInt[],int len);
void utn_inicializarArrayInt(int arrayInt[], int len);
int utn_sacarMaxArrayInt(int *pMaximo, int arrayInt[], int len);
int utn_sacarMinArrayInt(int* pMinimo, int arrayInt[], int len);
int utn_cambiarValorArrayInt(int arrayInt[], int len, int indice, int valor);
int utn_ordenarArrayInt(int* pArray, int limite);
int utn_ordenarArrayChar(char* pArray, int limite);
int utn_imprimirArrayChar(char* pArray, int limite);
int utn_getWords(char* pArray, int longitud);
#endif /* UTN_H_ */
