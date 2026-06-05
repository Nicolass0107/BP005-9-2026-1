#include "tablero.h"
#include <iostream>
#include <cstdlib>

void limpiarTablero(char tablero[FILAS][COLUMNAS]) {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            if (c == 0 || c == COLUMNAS - 1 || f == 0 || f == FILAS - 1) {
                tablero[f][c] = '#'; // Bordes del mapa
            } else {
                tablero[f][c] = ' '; // Espacio vacío
            }
        }
    }
}

void colocarElementos(char tablero[FILAS][COLUMNAS], Nave* n, Bala balas[], int tB, Enemigo enemigos[], int tE) {
    // 1. Colocar enemigos '0' (Requisito 64, 153)
    for (int i = 0; i < tE; i++) {
        if (enemigos[i].vivo) {
            tablero[enemigos[i].fila][enemigos[i].columna] = '0';
        }
    }

    // 2. Colocar balas '1' (Requisito 62, 152)
    for (int i = 0; i < tB; i++) {
        if (balas[i].activa) {
            tablero[balas[i].fila][balas[i].columna] = '1';
        }
    }

    // 3. Colocar nave 'X' (Requisito 59, 151)
    if (n != nullptr) {
        tablero[n->fila][n->columna] = 'X';
    }
}

void mostrarTablero(char tablero[FILAS][COLUMNAS]) {
    // Comando para limpiar pantalla en consolas Unix (Requisito 28)
    std::system("clear"); 
    
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            std::cout << tablero[f][c];
        }
        std::cout << "\n";
    }
}
