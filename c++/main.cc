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


using namespace std;

int main () {
    cout << "Primer programa: suma de dos números: " << endl;
    Programa sumar = Programa::Suma();
    sumar.listar();
    sumar.ejecutar();
    cout << "Ejecucion: " << endl;

    cout << "Segundo programa: Cuenta atrás: " << endl;
    Programa cuentaAtras = Programa::CuentaAtras();
    cuentaAtras.listar();
    cuentaAtras.ejecutar();
    cout << "Ejecucion: " << endl;

    cout << "Tercer programa: Factorial" << endl;
    Programa factorial = Programa::Factorial();
    factorial.listar();
    factorial.ejecutar();
    cout << "Ejecucion: " << endl;
    
    return 0;
}