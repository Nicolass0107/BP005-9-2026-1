#include "memoria.h"
#include <iostream>

void mostrarReporteMemoria(int tB, int tE) {
    std::cout << "\n=========================================\n";
    std::cout << "          REPORTE DE MEMORIA (sizeof)    \n";
    std::cout << "=========================================\n";
    // Impresión obligatoria usando sizeof en tiempo de ejecución (Requisitos 94, 190)
    std::cout << "Tamano de estructura Nave:       " << sizeof(Nave) << " bytes\n";
    std::cout << "Tamano de estructura Bala:       " << sizeof(Bala) << " bytes\n";
    std::cout << "Tamano de estructura Enemigo:    " << sizeof(Enemigo) << " bytes\n";
    std::cout << "Tamano de estructura Juego:      " << sizeof(Juego) << " bytes\n";
    std::cout << "-----------------------------------------\n";
    std::cout << "Tamano aprox. arreglo de balas:  " << sizeof(Bala) * tB << " bytes\n";
    std::cout << "Tamano aprox. arreglo enemigos:  " << sizeof(Enemigo) * tE << " bytes\n";
    std::cout << "Tamano de la matriz del tablero: " << sizeof(char) * FILAS * COLUMNAS << " bytes\n";
    std::cout << "=========================================\n";
    std::cout << "Presione cualquier tecla de juego para continuar...";
}
