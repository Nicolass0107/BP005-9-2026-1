#include <iostream>
const int COLUMNAS = 3;
void mostrarMatriz(int m[][COLUMNAS], int filas) {
  /* i recorrera las filas y j recorrera las columnas. */
int i;
int j;
/* Recorremos cada elemento de la matriz. */
for (i = 0; i < filas; i++) {
for (j = 0; j < COLUMNAS; j++) {
std::cout << m[i][j] << " ";
}
std::cout << std::endl;
}
}
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][COLUMNAS] = {
{1, 2, 3},
{4, 5, 6}
};
/* Enviamos la matriz y el numero de filas. */
mostrarMatriz(m, 2);
return 0;
}
