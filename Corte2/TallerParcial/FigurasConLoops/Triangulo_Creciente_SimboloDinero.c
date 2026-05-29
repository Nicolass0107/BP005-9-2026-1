#include <stdio.h>

int main () {
int fila = 1;
int columna ;

do {
columna = 1;

do {
printf ("$ ");
columna ++;
} while ( columna <= fila ) ;

printf ("\n") ;
fila ++;
} while ( fila <= 5) ;

  return 0;
}
