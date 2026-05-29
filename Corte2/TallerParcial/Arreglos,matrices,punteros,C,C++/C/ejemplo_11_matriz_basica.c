#include <stdio.h>
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
/* Mostramos algunos elementos de la matriz. */
printf("m[0][0] = %d\n", m[0][0]);
printf("m[0][2] = %d\n", m[0][2]);
printf("m[1][1] = %d\n", m[1][1]);
return 0;
}
