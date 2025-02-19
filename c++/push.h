#pragma once
#include "Instruccion.h"
#include <stack>
#include <string>

using namespace std;

class push: public Instruccion {
    protected:
    int instruccionL;
    public:
        push(int instruccionL); // Constructor
        ~push(); // Destructor
        void ejecutar(stack<int> &pila) override;
        int modificar(int pc) override;
        string mostrar() override;
};