#include <stdio.h>

int main() {
    int num1, num2, suma; // Declaración de variables enteras

    // Solicitar al usuario que ingrese los números
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Calcular la suma
    suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %d + %d es: %d\n", num1, num2, suma);

    return 0;
}