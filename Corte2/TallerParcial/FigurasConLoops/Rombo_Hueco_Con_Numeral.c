#include <stdio.h>

int main () {
int fila , columna ;
int n = 5;
int ancho = 2 * n - 1;

for ( fila = 1; fila <= ancho ; fila ++) {
int distancia = fila <= n ? n - fila : fila - n;

for ( columna = 1; columna <= ancho ; columna ++) {
if ( columna == distancia + 1 || columna == ancho -
distancia ) {
printf ("#");
} else {
printf (" ");
}
}
printf ("\n") ;
}

return 0;
}
