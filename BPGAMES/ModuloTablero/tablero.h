#ifndef TABLERO_H
#define TABLERO_H

#include "entidades.h"

// Dimensiones de la matriz conceptual (Requisito 129)
const int FILAS = 12;
const int COLUMNAS = 20;

void limpiarTablero(char tablero[FILAS][COLUMNAS]);
void colocarElementos(char tablero[FILAS][COLUMNAS], Nave* n, Bala balas[], int tB, Enemigo enemigos[], int tE);
void mostrarTablero(char tablero[FILAS][COLUMNAS]);

#endif
