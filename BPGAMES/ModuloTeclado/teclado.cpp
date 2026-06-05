#include "teclado.h"
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

static struct termios oldt, newt;

void configurarTeclado() {
    // Guardar configuración actual de la terminal
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    // Desactivar el modo canónico (espera de Enter) y el eco de teclas
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    
    // Hacer que la lectura de STDIN no sea bloqueante (para que el juego fluya)
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
}

void restaurarTeclado() {
    // Devolver la consola a su estado normal al salir
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

char leerTecla() {
    char ch = 0;
    if (read(STDIN_FILENO, &ch, 1) < 0) {
        return 0; // Si no hay tecla presionada, retorna 0
    }
    return ch;
}
