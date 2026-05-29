#include <stdio.h>
#define COLUMNAS 3
void mostrarMatriz(int m[][COLUMNAS], int filas) {
/* i recorrera filas y j recorrera columnas. */
int i;
int j;
/* Mostramos cada elemento de la matriz. */
for (i = 0; i < filas; i++) {
for (j = 0; j < COLUMNAS; j++) {
printf(" %d ", m[i][j]);
}
printf("\n");
}
}
int sumarMatriz(int m[][COLUMNAS], int filas) {
/* i recorrera filas y j recorrera columnas. */
int i;
int j;
/* suma acumulara los elementos. */
int suma = 0;
/* Sumamos todos los elementos. */
for (i = 0; i < filas; i++) {
for (j = 0; j < COLUMNAS; j++) {
suma = suma + m[i][j];
}
}
return suma;
}
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][COLUMNAS] = {
{1, 2, 3},
{4, 5, 6}
};
/* Mostramos la matriz. */
mostrarMatriz(m, 2);
/* Mostramos la suma de sus elementos. */
printf("Suma = %d\n", sumarMatriz(m, 2));
return 0;
}
