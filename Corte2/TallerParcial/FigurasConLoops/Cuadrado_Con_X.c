#include <stdio.h>

int main () {
int fila = 1;
int columna ;

while ( fila <= 4) {
columna = 1;

while ( columna <= 4) {
printf ("X ");
columna ++;
}

printf ("\n") ;
fila ++;
}

return 0;
}
