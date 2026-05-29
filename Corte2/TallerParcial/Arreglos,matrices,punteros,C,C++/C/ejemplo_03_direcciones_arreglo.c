#include <stdio.h>
int main() {
/* Declaramos un arreglo de cinco enteros. */
int datos[5] = {8, 3, 15, 6, 10};
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Mostramos el valor y la direccion de cada elemento. */
for (i = 0; i < 5; i++) {
printf("datos[ %d] = %d, direccion = %p\n",
i, datos[i], (void *)&datos[i]);
}
return 0;
}
