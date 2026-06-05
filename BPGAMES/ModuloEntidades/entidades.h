#ifndef ENTIDADES_H
#define ENTIDADES_H

// Estructuras obligatorias (Requisitos 8.1, 8.2, 8.3)
struct Nave {
    int fila;
    int columna;
    int vidas;
};

struct Bala {
    int fila;
    int columna;
    bool activa;
};

struct Enemigo {
    int fila;
    int columna;
    bool vivo;
};

// Cantidades máximas para los arreglos
const int MAX_BALAS = 10;
const int MAX_ENEMIGOS = 5;

// Declaración de funciones usando punteros (Requisito 10 y 11)
void inicializarNave(Nave* n, int f, int c);
void moverNave(Nave* n, char dir, int limCols);

void inicializarBalas(Bala balas[], int tam);
void dispararBala(Bala balas[], int tam, Nave* n);
void actualizarBalas(Bala balas[], int tam);

void inicializarEnemigos(Enemigo enemigos[], int tam);

#endif
