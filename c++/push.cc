#include "push.h"
#include <iostream>

using namespace std;

push::push(int instruccionL) : instruccionL(instruccionL) { 
}

push::~push() {
}


void push::ejecutar(stack<int>& pila){
    pila.push(instruccionL);
}

int push::modificar(int pc){
    return pc + 1;
}

std::string push::mostrar(){
    return " push " + to_string(instruccionL);
}
