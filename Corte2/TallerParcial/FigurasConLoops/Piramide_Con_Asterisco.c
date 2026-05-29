#include <stdio.h>
int main () {
int fila , espacios , simbolos ;
for ( fila = 1; fila <= 5; fila ++) {
for ( espacios = 1; espacios <= 5 - fila ; espacios ++) {
printf (" ") ;
}
for ( simbolos = 1; simbolos <= 2 * fila - 1; simbolos ++) {
printf ("*") ;
}
printf ("\n") ;
}
return 0;
}
