#include "entidades.h"
#include <iostream>

void inicializarNave(Nave* n, int f, int c) {
    if (n != nullptr) { // Verificación de puntero (Requisito 172)
        n->fila = f;
        n->columna = c;
        n->vidas = 3;
    }
}

void moverNave(Nave* n, char dir, int limCols) {
    if (n == nullptr) return;
    if (dir == 'a' && n->columna > 1) { // Límite izquierdo (Requisito 61)
        n->columna--;
    } else if (dir == 'd' && n->columna < limCols - 2) { // Límite derecho (Requisito 61)
        n->columna++;
    }
}

void inicializarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        balas[i].activa = false;
    }
}

void dispararBala(Bala balas[], int tam, Nave* n) {
    if (n == nullptr) return;
    // Buscar la primera bala inactiva en el arreglo para activarla (Requisito 134)
    for (int i = 0; i < tam; i++) {
        if (!balas[i].activa) {
            balas[i].fila = n->fila - 1; // Sale arriba de la nave
            balas[i].columna = n->columna;
            balas[i].activa = true;
            break; // Solo dispara una por pulsación
        }
    }
}

void actualizarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (balas[i].activa) {
            balas[i].fila--; // La bala sube en pantalla
            if (balas[i].fila < 0) {
                balas[i].activa = false; // Desactivar si sale del tablero (Requisito 134)
            }
        }
    }
}

void inicializarEnemigos(Enemigo enemigos[], int tam) {
    // Colocar enemigos en una fila fija en la parte superior
    for (int i = 0; i < tam; i++) {
        enemigos[i].fila = 2;
        enemigos[i].columna = 3 + (i * 3); // Separados horizontalmente
        enemigos[i].vivo = true;
    }
}
