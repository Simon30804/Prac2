#include "Instruccion.h"
#include <string>

using namespace std;


Instruccion::Instruccion(){
}
//Cada clase add, write, etc. tendrá su propia implementación de estos métodos (por eso el virtual)
void ejecutar(stack<int> &pila);
int modificar(int pc);
string mostrar();
