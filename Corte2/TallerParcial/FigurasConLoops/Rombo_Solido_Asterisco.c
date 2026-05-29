#include <stdio.h>

int main () {
int fila , espacios , simbolos ;
int n = 5;

for ( fila = 1; fila <= n; fila ++) {
for ( espacios = 1; espacios <= n - fila ; espacios ++) {
printf (" ") ;
}
for ( simbolos = 1; simbolos <= 2 * fila - 1; simbolos ++) {
printf ("*") ;
}
printf ("\n") ;
}

for ( fila = n - 1; fila >= 1; fila --) {
for ( espacios = 1; espacios <= n - fila ; espacios ++) {
printf (" ") ;
}
for ( simbolos = 1; simbolos <= 2 * fila - 1; simbolos ++) {
printf ("*") ;
}
printf ("\n") ;
}

return 0;
}
