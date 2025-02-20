#include "read.h"
#include <iostream>

using namespace std;

void read::ejecutar(stack<int>& pila){
    cout << "? ";
    int valor;
    cin >> valor;
    pila.push(valor);
}
int read::modificar(int pc){
    return pc + 1;
}

std::string read::mostrar() {
    return "    read" ;
}