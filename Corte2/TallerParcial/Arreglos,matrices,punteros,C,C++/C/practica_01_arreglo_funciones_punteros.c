#include <stdio.h>
void leerArreglo(int *datos, int n) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que el puntero sea valido. */
if (datos == NULL) {
return;
}
/* Leemos cada elemento del arreglo. */
for (i = 0; i < n; i++) {
printf("Ingrese datos[ %d]: ", i);
scanf(" %d", &datos[i]);
}
}
void mostrarArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que el puntero sea valido. */
if (datos == NULL) {
return;
}
/* Mostramos cada elemento del arreglo. */
for (i = 0; i < n; i++) {
printf(" %d ", datos[i]);
}
printf("\n");
}
void analizarArreglo(int *datos, int n, int *suma, float *promedio) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que las direcciones sean validas. */
if (datos == NULL || suma == NULL || promedio == NULL) {
return;
}
/* Inicializamos la suma. */
*suma = 0;
/* Acumulamos todos los elementos. */
for (i = 0; i < n; i++) {
*suma = *suma + datos[i];
}
/* Calculamos el promedio. */
*promedio = (float)(*suma) / n;
}
int main() {
/* Declaramos un arreglo de cinco enteros. */
int datos[5];
/* Variables para resultados. */
int suma;
float promedio;
/* Leemos, mostramos y analizamos el arreglo. */
leerArreglo(datos, 5);
mostrarArreglo(datos, 5);
analizarArreglo(datos, 5, &suma, &promedio);
/* Mostramos los resultados. */
printf("Suma = %d\n", suma);
printf("Promedio = %.2f\n", promedio);
return 0;
}
