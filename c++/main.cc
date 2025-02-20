#include <iostream>
#include <stack>
#include <string>
#include "Programa.h"
#include "read.h"
#include "add.h"
#include "write.h"
#include "push.h"
#include "dup.h"
#include "jumpif.h"
#include "swap.h"
#include "over.h"
#include "mul.h"
#include "suma.h"
#include "cuentaAtras.h"
#include "factorial.h"


using namespace std;

int main () {
    cout << "Programa: " << endl;
    suma sumar;
    sumar.listar();
    cout << endl;
    cout << "Ejecucion: " << endl;
    sumar.ejecutar();
    cout << endl;

    cout << "Programa: " << endl;
    cuentaAtras cuentaAtras;
    cuentaAtras.listar();
    cout << endl;
    cout << "Ejecucion: " << endl;
    cuentaAtras.ejecutar();
    cout << endl;

    cout << "Programa:" << endl;
    cout << "Ejecucion: " << endl;
    factorial factorial;
    factorial.listar();
    cout << endl;
    cout << "Ejecucion: " << endl;
    factorial.ejecutar();
    cout << endl;

    return 0;
}