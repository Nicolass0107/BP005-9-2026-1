#include <stdio.h>
#include <stdlib.h>
int main() {
/* filas y columnas definen el tamano de la matriz. */
int filas = 2;
int columnas = 3;
/* i y j se usaran para recorrer filas y columnas. */
int i;
int j;
/* matriz apuntara al primer elemento del bloque dinamico. */
int *matriz = NULL;
/* Reservamos memoria para filas * columnas enteros. */
matriz = malloc(filas * columnas * sizeof(int));
/* Verificamos si la reserva fue exitosa. */
if (matriz == NULL) {
printf("No se pudo reservar memoria.\n");
return 1;
}
/* Llenamos la matriz con valores sencillos. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
matriz[i * columnas + j] = (i + 1) * 10 + j;
}
}
/* Mostramos la matriz usando la formula i * columnas + j. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
printf(" %d ", matriz[i * columnas + j]);
}
printf("\n");
}
/* Liberamos la memoria dinamica. */
free(matriz);
/* Evitamos dejar un puntero colgante. */
matriz = NULL;
return 0;
}
