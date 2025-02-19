#include "write.h"
#include <iostream>

using namespace std;

void write::ejecutar(stack<int>& pila){
    cout << "Introduce un valor: ";
    int valor;
    cin >> valor;
    pila.push(valor);
}
int write::modificar(int pc){
    return pc + 1;
}

std::string write::mostrar() {
    return " read";
}