#include <iostream>
int main() {
/* Declaramos un arreglo de cinco enteros. */
int datos[5] = {8, 3, 15, 6, 10};
/* p apunta al primer elemento del arreglo. */
int *p = datos;
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Recorremos el arreglo usando aritmetica de punteros. */
for (i = 0; i < 5; i++) {
/* *(p + i) accede al elemento ubicado i posiciones despues de p. */
std::cout << "Elemento " << i << " = " << *(p + i) << std::endl;
}
return 0;
}
