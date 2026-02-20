#include <stdio.h>

int main() {
    int num1, num2;
    float suma; // La variable de resultado es float

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    // Suma automática: int + int = float
    suma = (float)num1 + num2; 

    printf("La suma de %d + %d es: %.2f\n", num1, num2, suma);

    return 0;
}
