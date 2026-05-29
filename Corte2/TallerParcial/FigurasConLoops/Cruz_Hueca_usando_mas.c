#include <stdio.h>

int main() {
    int fila = 1;
    int columna;
    int n = 9;
    int centro = 5;
    do {
        columna = 1;
        do {
            if (fila == centro || columna == centro) {
                printf("+");
            } else {
                printf(" ");
            }
            columna++;
        } while (columna <= n);
        printf("\n");
        fila++;
    } while (fila <= n);
    return 0;
}
