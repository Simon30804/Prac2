#include "swap.h"
#include <iostream>

using namespace std;

void swap::ejecutar(stack<int>& pila){
    int valor1 = pila.top();
    pila.pop();//distinto a java, aquí el popo no returnea, tengo que mirarlo antes de hacer el pop
    int valor2 = pila.top(); 
    pila.pop();
    pila.push(valor1);
    pila.push(valor2);
}

int swap::modificar(int pc){
    return pc + 1;
}

std::string swap::mostrar(){
    return " swap";
}