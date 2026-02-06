#include <iostream>

int main() {
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero entero: ";
    std::cin >> num2;

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

    return 0;
}

