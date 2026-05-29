#include <stdio.h>
void mostrarArreglo(int datos[], int n) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Recorremos los n elementos recibidos. */
for (i = 0; i < n; i++) {
/* Mostramos cada elemento del arreglo. */
printf(" %d ", datos[i]);
}
/* Imprimimos un salto de linea al final. */
printf("\n");
}
int main() {
/* Declaramos un arreglo de cinco enteros. */
int datos[5] = {8, 3, 15, 6, 10};
/* Enviamos el arreglo y su cantidad de elementos. */
mostrarArreglo(datos, 5);
return 0;
}
