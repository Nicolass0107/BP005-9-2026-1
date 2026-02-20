#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    // Se utiliza double para almacenar la suma, permitiendo decimales
    double suma; 

    // Suma de los dos enteros
    suma = num1 + num2;

    // Se usa %lf para imprimir el double
    printf("La suma de %d y %d es: %.2lf\n", num1, num2, suma);

    return 0;
}
