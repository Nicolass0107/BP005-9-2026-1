#include <iostream>
int sumarMatriz(int *matriz, int filas, int columnas) {
/* i y j se usaran para recorrer la matriz. */
int i;
int j;
/* suma acumulara todos los elementos. */
int suma = 0;
/* Verificamos que el puntero sea valido. */
if (matriz == nullptr) {
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
int *matriz = nullptr;
/* Reservamos memoria dinamica. */
matriz = new int[filas * columnas];
/* Llenamos la matriz con valores del 1 al 6. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
matriz[i * columnas + j] = i * columnas + j + 1;
}
}
/* Mostramos la suma calculada por una funcion. */
std::cout << "Suma = " << sumarMatriz(matriz, filas, columnas) << std::endl;
/* Liberamos la memoria dinamica. */
delete[] matriz;
matriz = nullptr;
return 0;
}
