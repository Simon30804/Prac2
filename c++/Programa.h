#pragma once
#include <iostream>
#include <stack>
#include "Instruccion.h"

using namespace std;

class Programa{
    protected: 
    Instruccion** instrucciones; // Puntero a instrucciones, con doble ** marco que
    // instrucciones es un puntero a un objeto Instruccion y además es el objeto en si, para tener así array dinámico
    int numInstrucciones; // Número de instrucciones
    int pc; // Contador de programa
    stack<int> pila; // Pila de la máquina

    public:
        Programa(int numInstrucciones);
        //Por si se quiere todo en programa:
            // static Programa Factorial();//insertaré aqui las instrucciones del factorial
            // static Programa Suma();
            // static Programa CuentaAtras();
        // Mientras haya instrucciones por ejecutar, ejecuto la instrucción en la posición pc del vector de instrucciones e incremento el contador de programa
        ~Programa();
        void ejecutar();
        // Muestro por pantalla las instrucciones del programa, junto a su número de línea
        void listar();
};
