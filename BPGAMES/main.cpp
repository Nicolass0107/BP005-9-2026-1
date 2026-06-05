#include <iostream>
#include <unistd.h> // Para usleep (control de velocidad)
#include "entidades.h"
#include "tablero.h"
#include "juego.h"
#include "teclado.h"
#include "memoria.h"

int main() {
    // Instanciar variables locales reales en el main (Requisito 82)
    Nave jugador;
    Bala listaBalas[MAX_BALAS];
    Enemigo listaEnemigos[MAX_ENEMIGOS];
    Juego estadoJuego;
    char matrizTablero[FILAS][COLUMNAS];

    // Inicializaciones pasando direcciones de memoria (Requisito 166, 167)
    inicializarJuego(&estadoJuego);
    inicializarNave(&jugador, FILAS - 2, COLUMNAS / 2);
    inicializarBalas(listaBalas, MAX_BALAS);
    inicializarEnemigos(listaEnemigos, MAX_ENEMIGOS);

    configurarTeclado(); // Activa lectura directa sin Enter

    bool verMemoria = false;

    // Bucle Principal del Juego (Requisito 82)
    while (!estadoJuego.terminado) {
        char tecla = leerTecla();

        // Controlar Entrada
        if (tecla == '9') { // Salida ordenada (Requisito 73)
            estadoJuego.terminado = true;
        } 
        else if (tecla == 'a' || tecla == 'd') {
            moverNave(&jugador, tecla, COLUMNAS);
        } 
        else if (tecla == 'f') {
            dispararBala(listaBalas, MAX_BALAS, &jugador);
        } 
        else if (tecla == 'm') {
            verMemoria = true; // Activa flag para pintar el reporte debajo (Requisito 180)
        }
        else if (tecla == 'r' && estadoJuego.victoria) {
            reiniciarPartida(&estadoJuego, &jugador, listaBalas, MAX_BALAS, listaEnemigos, MAX_ENEMIGOS);
            verMemoria = false;
        }

        // Lógica de actualización si no se ha ganado
        if (!estadoJuego.victoria) {
            actualizarBalas(listaBalas, MAX_BALAS);
            detectarColisiones(listaBalas, MAX_BALAS, listaEnemigos, MAX_ENEMIGOS, &estadoJuego);
            verificarVictoria(&estadoJuego, MAX_ENEMIGOS);
        }

        // Dibujar en pantalla
        limpiarTablero(matrizTablero);
        colocarElementos(matrizTablero, &jugador, listaBalas, MAX_BALAS, listaEnemigos, MAX_ENEMIGOS);
        mostrarTablero(matrizTablero);

        // Interfaz de texto informativa
        std::cout << "PUNTAJE: " << estadoJuego.puntaje << " | Vidas: " << jugador.vidas << "\n";
        std::cout << "[Controles] a: Izq | d: Der | f: Disparar | m: Memoria | 9: Salir\n";

        if (estadoJuego.victoria) {
            std::cout << "\n¡¡VICTORIA!! Has destruido a todos los invasores.\n";
            std::cout << "Presione 'r' para reiniciar o '9' para salir.\n";
        }

        // Si se presionó 'm', renderizar sección de memoria abajo (Requisito 180)
        if (verMemoria) {
            mostrarReporteMemoria(MAX_BALAS, MAX_ENEMIGOS);
        }

        // Controlar la velocidad de actualización de la consola (Microsegundos)
        usleep(80000); 
    }

    restaurarTeclado(); // Dejar la consola normal
    std::cout << "\nPrograma finalizado correctamente. ¡Gracias por jugar!\n";
    return 0;
}
