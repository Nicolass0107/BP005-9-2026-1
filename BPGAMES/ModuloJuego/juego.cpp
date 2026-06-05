#include "juego.h"
#include "tablero.h"
#include <iostream>

void inicializarJuego(Juego* j) {
    if (j != nullptr) {
        j->puntaje = 0;
        j->enemigosDestruidos = 0;
        j->terminado = false;
        j->victoria = false;
    }
}

void detectarColisiones(Bala balas[], int tB, Enemigo enemigos[], int tE, Juego* j) {
    if (j == nullptr) return;

    for (int b = 0; b < tB; b++) {
        if (!balas[b].activa) continue;

        for (int e = 0; e < tE; e++) {
            if (!enemigos[e].vivo) continue;

            // Si coinciden en la misma coordenada de la matriz (Requisito 66, 249)
            if (balas[b].fila == enemigos[e].fila && balas[b].columna == enemigos[e].columna) {
                balas[b].activa = false;       // Desaparece bala
                enemigos[e].vivo = false;       // Muere enemigo (Requisito 67)
                j->puntaje += 10;              // Suma puntaje (Requisito 70)
                j->enemigosDestruidos++;       // Modifica múltiples resultados vía puntero (Requisito 171)
            }
        }
    }
}

void verificarVictoria(Juego* j, int totalEnemigos) {
    if (j == nullptr) return;
    if (j->enemigosDestruidos >= totalEnemigos) {
        j->victoria = true;
        j->terminado = true; // Fin de partida por victoria (Requisito 71)
    }
}

void reiniciarPartida(Juego* j, Nave* n, Bala balas[], int tB, Enemigo enemigos[], int tE) {
    inicializarJuego(j);
    inicializarNave(n, FILAS - 2, COLUMNAS / 2);
    inicializarBalas(balas, tB);
    inicializarEnemigos(enemigos, tE);
}
