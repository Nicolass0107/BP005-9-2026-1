#include <stdio.h>

int main () {
int fila = 1;
int columna ;

do {
columna = 1;

do {
printf ("= ");
columna ++;
} while ( columna <= 6) ;

printf ("\n") ;
fila ++;
} while ( fila <= 3) ;

return 0;
}
