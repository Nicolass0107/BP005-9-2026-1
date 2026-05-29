#include <stdio.h>
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
/* p apunta al primer entero de la matriz. */
int *p = &m[0][0];
/* total indica cuantos elementos tiene la matriz. */
int total = 2 * 3;
/* k recorre la matriz como una secuencia lineal. */
int k;
/* Mostramos todos los elementos usando *(p + k). */
for (k = 0; k < total; k++) {
printf(" %d ", *(p + k));
}
printf("\n");
return 0;
}
