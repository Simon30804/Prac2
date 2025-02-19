#pragma once
#include "Instruccion.h"
#include <stack>

using namespace std;

class read : public Instruccion {
    public:
        void ejecutar(stack<int> &pila) override;
        int modificar(int pc) override;
        string mostrar() override;
};