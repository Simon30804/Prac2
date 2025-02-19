#include "dup.h"
#include <iostream>

using namespace std;

void dup::ejecutar(stack<int>& pila){
    int valor = pila.top();
    pila.pop();
    pila.push(valor);
    pila.push(valor);
}

int dup::modificar(int pc){
    return pc + 1;
}

std::string dup::mostrar(){
    return " dup";
}
