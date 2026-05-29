#include <stdio.h>

int main() {
    int fila, columna;
    
    for (fila = 1; fila <= 11; fila++) {
        for (columna = 1; columna <= 11; columna++) {
            if ((fila == 1 && (columna == 3 || columna == 9)) ||
                (fila == 2 && (columna == 4 || columna == 8)) ||
                (fila == 3 && (columna >= 4 && columna <= 8)) ||
                (fila == 4 && (columna >= 2 && columna <= 10)) ||
                (fila == 5 && (columna > 3 && columna <= 9)) ||
                (fila == 6 && (columna > 4 && columna <= 8)) ||
                (fila == 7 && (columna == 2 || columna == 6 || columna == 10)) ||
                (fila == 8 && (columna == 3 || columna == 6 || columna == 9)) ||
                (fila == 9 && (columna == 4 || columna == 6 || columna == 8)) ||
                (fila == 10 && (columna == 5 || columna == 7)) ||
                (fila == 11 && columna == 6)) {
                
                printf("o");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
