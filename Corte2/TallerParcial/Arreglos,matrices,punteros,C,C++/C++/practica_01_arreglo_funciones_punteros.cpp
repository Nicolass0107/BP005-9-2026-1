#include <iostream>
void leerArreglo(int *datos, int n) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que el puntero sea valido. */
if (datos == nullptr) {
return;
}
/* Leemos cada elemento del arreglo. */
for (i = 0; i < n; i++) {
std::cout << "Ingrese datos[" << i << "]: ";
std::cin >> datos[i];
}
}
void mostrarArreglo(int *datos, int n) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que el puntero sea valido. */
if (datos == nullptr) {
return;
}
/* Mostramos cada elemento del arreglo. */
for (i = 0; i < n; i++) {
std::cout << datos[i] << " ";
}
std::cout << std::endl;
}
void analizarArreglo(int *datos, int n, int *suma, float *promedio) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que las direcciones sean validas. */
if (datos == nullptr || suma == nullptr || promedio == nullptr) {
return;
}
/* Inicializamos la suma. */
*suma = 0;
/* Acumulamos todos los elementos. */
for (i = 0; i < n; i++) {
*suma = *suma + datos[i];
}
/* Calculamos el promedio. */
*promedio = static_cast<float>(*suma) / n;
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
std::cout << "Suma = " << suma << std::endl;
std::cout << "Promedio = " << promedio << std::endl;
return 0;
}
