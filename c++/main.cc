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
    cout << "Primer programa: suma de dos números: " << endl;
    suma sumar;
    sumar.listar();
    cout << "Ejecucion: " << endl;
    sumar.ejecutar();

    cout << "Segundo programa: Cuenta atrás: " << endl;
    cuentaAtras cuentaAtras;
    cuentaAtras.listar();
    cout << "Ejecucion: " << endl;
    cuentaAtras.ejecutar();

    cout << "Tercer programa: Factorial" << endl;
    cout << "Ejecucion: " << endl;
    factorial factorial;
    factorial.listar();
    cout << "Ejecucion: " << endl;
    factorial.ejecutar();
    
    return 0;
}