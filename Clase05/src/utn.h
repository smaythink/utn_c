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
void imprimirArrayInt(int edades[], int len);
int promediarArrayInt(float* pPromedio,int arrayInt[],int len);
void inicializarArrayInt(int arrayInt[], int len);
int sacarMaxArrayInt(int *pMaximo, int arrayInt[], int len);
int sacarMinArrayInt(int* pMinimo, int arrayInt[], int len);
int cambiarValorArrayInt(int arrayInt[], int len, int indice, int valor);
#endif /* UTN_H_ */
