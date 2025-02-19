#include "push.h"
#include <iostream>

using namespace std;

push::push(int valor){
    this->valor = valor;
}

push::~push() {
}


void push::ejecutar(stack<int>& pila){
    pila.push(valor);
}

int push::modificar(int pc){
    return pc + 1;
}

std::string push::mostrar(){
    return " push" ;
}
