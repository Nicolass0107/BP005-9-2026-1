#include <stdio.h>

int main() {
    int fila, espacios, numero;
    int n = 5;
    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            printf(" ");
        }
        for (numero = 1; numero <= fila; numero++) {
            printf("%d", numero);
        }
        for (numero = fila - 1; numero >= 1; numero--) {
            printf("%d", numero);
        }
        printf("\n");
    }
    return 0;
}
