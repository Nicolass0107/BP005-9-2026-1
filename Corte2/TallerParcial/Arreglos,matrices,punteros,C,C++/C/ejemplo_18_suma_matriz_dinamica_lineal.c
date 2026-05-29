#include <stdio.h>
#include <stdlib.h>
int sumarMatriz(int *matriz, int filas, int columnas) {
/* i y j se usaran para recorrer la matriz. */
int i;
int j;
/* suma acumulara todos los elementos. */
int suma = 0;
/* Verificamos que el puntero sea valido. */
if (matriz == NULL) {
return 0;
}
/* Recorremos la matriz como bloque lineal indexado. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
suma = suma + matriz[i * columnas + j];
}
}
/* Devolvemos el resultado mediante return. */
return suma;
}
int main() {
/* Definimos el tamano de la matriz. */
int filas = 2;
int columnas = 3;
/* Declaramos indices y el puntero dinamico. */
int i;
int j;
int *matriz = NULL;
/* Reservamos memoria dinamica. */
matriz = malloc(filas * columnas * sizeof(int));
/* Verificamos si la reserva fue exitosa. */
if (matriz == NULL) {
printf("No se pudo reservar memoria.\n");
return 1;
}
/* Llenamos la matriz con valores del 1 al 6. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
matriz[i * columnas + j] = i * columnas + j + 1;
}
}
/* Mostramos la suma calculada por una funcion. */
printf("Suma = %d\n", sumarMatriz(matriz, filas, columnas));
/* Liberamos la memoria dinamica. */
free(matriz);
matriz = NULL;
return 0;
}
