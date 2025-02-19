#pragma once
#include "Instruccion.h"
#include <stack>
#include <string>

using namespace std;

class jumpif : public Instruccion {
    protected:
        int instruccionL;
        bool hacerSalto;
    public:
        jumpif(int instruccionL); // Constructor
        ~jumpif(); // Destructor
        void ejecutar(stack<int> &pila) override;
        int modificar(int pc) override;
        string mostrar() override;
};