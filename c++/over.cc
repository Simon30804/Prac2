#include "over.h"
#include <iostream>

using namespace std;

void over::ejecutar(stack<int>& pila){
    int valor = pila.top();
    pila.pop();
    int valor2 = pila.top();
    pila.pop();//2 valores desapilados
    pila.push(valor2);//apilo 2º desapilado
    pila.push(valor);//apilo 1º desapilado
    pila.push(valor2);//apilo 2º desapilado de nuevo

}

int over::modificar(int pc){
    return pc + 1;
}

std::string over::mostrar() {
    return "    over" ;
}