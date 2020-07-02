/*
 * utn.h
 *
 *  Created on: 2 jun. 2020
 *      Author: Smaythink
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumeroInt(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getNumeroFloat(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);
int utn_getCharacter(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos);

void utn_inicializarArrayInt(int arrayInt[], int len);
void utn_imprimirArrayInt(int edades[], int len);
void utn_imprimirArrayIntVacio(int array[], int len);
void utn_imprimirArrayIntLleno(int array[], int len);
int utn_cambiarValorArrayInt(int arrayInt[], int len, int indice, int valor);
int utn_burscarPrimeraOcurrencia(int arrayInt[], int len, int valor);
int utn_promediarArrayInt(float* pPromedio,int arrayInt[],int len);
int utn_sacarMaxArrayInt(int *pMaximo, int arrayInt[], int len);
int utn_sacarMinArrayInt(int* pMinimo, int arrayInt[], int len);
int utn_ordenarArrayInt(int* pArray, int limite);

void utn_inicializarArrayFloat(float arrayFloat[], int len);
void utn_imprimirArrayFloat(float array[], int len);
void utn_imprimirArrayFloatVacio(float array[], int len);
void utn_imprimirArrayFloatLleno(float array[], int len);
int utn_cambiarValorArrayFloat(float arrayFloat[], int len, int indice, float valor);

int utn_ordenarArrayChar(char* pArray, int limite);
int utn_imprimirArrayChar(char* pArray, int limite);

int utn_getWords(char* pArray, int longitud);



int utn_calcularMayorInt(int* pResultado, int num1, int num2);



#endif /* UTN_H_ */
