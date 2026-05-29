#include <iostream>
const int COLUMNAS = 3;
void incrementarMatriz(int m[][COLUMNAS], int filas) {
/* i recorrera las filas y j recorrera las columnas. */
int i;
int j;
/* Aumentamos cada elemento de la matriz en una unidad. */
for (i = 0; i < filas; i++) {
for (j = 0; j < COLUMNAS; j++) {
m[i][j] = m[i][j] + 1;
}
}
}
void mostrarMatriz(int m[][COLUMNAS], int filas) {
/* i recorrera las filas y j recorrera las columnas. */
int i;
int j;
/* Mostramos la matriz en forma de tabla. */
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
/* Mostramos la matriz antes del cambio. */
std::cout << "Antes:" << std::endl;
mostrarMatriz(m, 2);
/* Modificamos la matriz original desde una funcion. */
incrementarMatriz(m, 2);
/* Mostramos la matriz despues del cambio. */
std::cout << "Despues:" << std::endl;
mostrarMatriz(m, 2);
return 0;
}
