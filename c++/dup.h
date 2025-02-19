#pragma once
#include "Instruccion.h"
#include <stack>
#include <string>

using namespace std;

class dup: public Instruccion {
    public:
        void ejecutar(stack<int> &pila) override;
        int modificar(int pc) override;
        string mostrar() override;
};