#include <stdio.h>
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
/* i recorrera filas y j recorrera columnas. */
int i;
int j;
/* Mostramos la direccion de cada elemento. */
for (i = 0; i < 2; i++) {
for (j = 0; j < 3; j++) {
    printf("&m[ %d][ %d] = %p\n", i, j, (void *)&m[i][j]);
}
}
return 0;
}
