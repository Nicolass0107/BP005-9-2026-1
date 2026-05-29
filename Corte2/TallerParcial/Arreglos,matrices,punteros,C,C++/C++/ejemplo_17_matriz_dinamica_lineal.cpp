#include <iostream>
int main() {
/* filas y columnas definen el tamano de la matriz. */
int filas = 2;
int columnas = 3;
/* i y j se usaran para recorrer filas y columnas. */
int i;
int j;
/* matriz apuntara al primer elemento del bloque dinamico. */
int *matriz = nullptr;
/* Reservamos memoria para filas * columnas enteros. */
matriz = new int[filas * columnas];
/* Llenamos la matriz con valores sencillos. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
matriz[i * columnas + j] = (i + 1) * 10 + j;
}
}
/* Mostramos la matriz usando la formula i * columnas + j. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
std::cout << matriz[i * columnas + j] << " ";
}
std::cout << std::endl;
}
/* Liberamos la memoria dinamica. */
delete[] matriz;
/* Evitamos dejar un puntero colgante. */
matriz = nullptr;
return 0;
}
