#include <stdio.h>

int main () {
int fila , columna ;

for ( fila = 1; fila <= 5; fila ++) {
for ( columna = 1; columna <= 8; columna ++) {
if (( fila + columna ) % 2 == 0) {
printf ("* ");
} else {
printf ("o ");
}
}
printf ("\n") ;
}

return 0;
}
