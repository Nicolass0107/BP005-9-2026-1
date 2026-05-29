#include <iostream>
int main() {
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
/* Mostramos algunos elementos de la matriz. */
std::cout << "m[0][0] = " << m[0][0] << std::endl;
std::cout << "m[0][2] = " << m[0][2] << std::endl;
std::cout << "m[1][1] = " << m[1][1] << std::endl;
return 0;
}
