#include "mul.h"
#include <iostream>

using namespace std;

void mul::ejecutar(stack<int>& pila){
    int valor1 = pila.top();
    pila.pop();
    int valor2 = pila.top(); 
    pila.pop();
    pila.push(valor1 * valor2);
}

int mul::modificar(int pc){
    return pc + 1;
}

std::string mul::mostrar() {
    return " mul" ;
}
