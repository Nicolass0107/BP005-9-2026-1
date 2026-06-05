#ifndef JUEGO_H
#define JUEGO_H

#include "entidades.h"

// Estructura obligatoria para el estado global (Requisito 8.4)
struct Juego {
    int puntaje;
    int enemigosDestruidos;
    bool terminado;
    bool victoria;
};

// Declaraciones usando punteros como canales de salida (Requisitos 167, 171)
void inicializarJuego(Juego* j);
void detectarColisiones(Bala balas[], int tB, Enemigo enemigos[], int tE, Juego* j);
void verificarVictoria(Juego* j, int totalEnemigos);
void reiniciarPartida(Juego* j, Nave* n, Bala balas[], int tB, Enemigo enemigos[], int tE);

#endif
