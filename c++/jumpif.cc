#include "jumpif.h"
#include <iostream>

using namespace std;


jumpif::jumpif(int instruccionL) : instruccionL(instruccionL), hacerSalto(false){ 
}

jumpif::~jumpif(){
}

void jumpif::ejecutar(stack<int>& pila){
    int valor = pila.top();
    pila.pop(); 
    if(valor >= 0){
       hacerSalto = true;
    }
    else{
        hacerSalto = false;
    }
}

int jumpif::modificar(int pc){
    if(hacerSalto){
        return instruccionL;
    }else{
        return pc + 1;
    }
}

std::string jumpif::mostrar(){
    return " jumpif";
}