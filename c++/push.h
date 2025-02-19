#pragma once
#include "Instruccion.h"
#include <stack>
#include <string>

using namespace std;

class push: public Instruccion {
    protected:
        int valor;
    public:
        push(int valor); // Constructor
        ~push(); // Destructor
        void ejecutar(stack<int> &pila) override;
        int modificar(int pc) override;
        string mostrar() override;
};