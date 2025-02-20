#include <iostream>
#include <stack>
#include "Programa.h"

using namespace std;

Programa::Programa(int numInst) : numInstrucciones(numInst), pc(0), pila() {
}

Programa::~Programa(){
    delete[] instrucciones;
}

// Mientras haya instrucciones por ejecutar, ejecuto la instrucción en la posición pc del vector de instrucciones e incremento el contador de programa
void Programa::ejecutar(){
    while(pc < numInstrucciones){
        instrucciones[pc]->ejecutar(pila); // Ejecuto la instrucción en la posición pc del vector de instrucciones
        pc = instrucciones[pc]->modificar(pc); // Incremento el contador de programa
    }
    cout << endl;
}

// Muestro por pantalla las instrucciones del programa, junto a su número de línea
void Programa::listar(){
    for(int i = 0; i < numInstrucciones; i++){
        cout << to_string(i) << instrucciones[i]->mostrar() << endl; 
    }
    cout << endl;
}

