#include <iostream>
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
/* i recorrera las filas y j recorrera las columnas. */
int i;
int j;
/* Recorremos cada fila. */
for (i = 0; i < 2; i++) {
/* Recorremos cada columna de la fila actual. */
for (j = 0; j < 3; j++) {
std::cout << m[i][j] << " ";
}
std::cout << std::endl;
}
return 0;
}
