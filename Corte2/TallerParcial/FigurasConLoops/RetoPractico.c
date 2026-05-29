#include <stdio.h>

int main() {
    int n, fila, espacios, simbolos;
    printf("Ingrese el tamano del rombo: ");
    scanf("%d", &n);
    
    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf(" ");
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (fila = n - 1; fila >= 1; fila--) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf(" ");
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
