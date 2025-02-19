#include <iostream>
#include <stack>
#include "Programa.h"
#include "read.h"
#include "add.h"
#include "write.h"
#include "push.h"
#include "dup.h"
#include "jumpif.h"
#include "swap.h"
#include "over.h"
#include "mul.h"

using namespace std;


Programa::Programa(int numInstrucciones){
    instrucciones = new Instruccion*[numInstrucciones];
    this->numInstrucciones = numInstrucciones; // Inicializa el número de instrucciones
    pc = 0;     // Inicializo el contador de programa en 0
}

void Programa::setInstruccion(int i, Instruccion* instruccion){
    instrucciones[i] = instruccion;
}

// Mientras haya instrucciones por ejecutar, ejecuto la instrucción en la posición pc del vector de instrucciones e incremento el contador de programa
void Programa::ejecutar(){
    while(pc < numInstrucciones){
        instrucciones[pc]->ejecutar(pila); // Ejecuto la instrucción en la posición pc del vector de instrucciones
        pc = instrucciones[pc]->modificar(pc); // Incremento el contador de programa
    }
}

// Muestro por pantalla las instrucciones del programa, junto a su número de línea
void Programa::listar(){
    for(int i = 0; i < numInstrucciones; i++){
        cout << to_string(i) << instrucciones[i]->mostrar() << endl; 
    }
}


// Método estático para Factorial
Programa Programa::Factorial() {
    Programa prog(14);
    prog.setInstruccion(0, new push(1));
    prog.setInstruccion(1, new read());
    prog.setInstruccion(2, new ::swap());
    prog.setInstruccion(3, new over());
    prog.setInstruccion(4, new mul());
    prog.setInstruccion(5, new ::swap());
    prog.setInstruccion(6, new push(-1));
    prog.setInstruccion(7, new add());
    prog.setInstruccion(8, new dup());
    prog.setInstruccion(9, new push(-2));
    prog.setInstruccion(10, new add());
    prog.setInstruccion(11, new jumpif(2));
    prog.setInstruccion(12, new ::swap());
    prog.setInstruccion(13, new write());
    return prog;
}

// Método estático para Suma
Programa Programa::Suma() {
    Programa prog(4);
    prog.setInstruccion(0, new read());
    prog.setInstruccion(1, new read());
    prog.setInstruccion(2, new add());
    prog.setInstruccion(3, new write());
    return prog;
}

// Método estático para CuentaAtras
Programa Programa::CuentaAtras() {
    Programa prog(7);
    prog.setInstruccion(0, new read());    
    prog.setInstruccion(1, new dup());    
    prog.setInstruccion(2, new write());
    prog.setInstruccion(3, new push(-1));
    prog.setInstruccion(4, new add());
    prog.setInstruccion(5, new dup());
    prog.setInstruccion(6, new jumpif(1));
    return prog;
}

