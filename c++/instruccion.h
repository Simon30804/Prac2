#pragma once
#include <stack>
#include <string>
using namespace std;

class Instruccion {
    public:
        Instruccion();
        virtual ~Instruccion() = default;  // Destructor virtual
        //Cada clase add, write, etc. tendrá su propia implementación de estos métodos (por eso el virtual)
        virtual void ejecutar(stack<int> &pila) = 0;
        virtual int modificar(int pc) = 0;
        virtual string mostrar() = 0;
};