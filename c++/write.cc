#include "write.h"
#include <iostream>

using namespace std;

void write::ejecutar(stack<int>& pila){
    int valor = pila.top();
    pila.pop();
    cout << valor << endl;
}
int write::modificar(int pc){
    return pc + 1;
}

std::string write::mostrar() {
    return " write";
}