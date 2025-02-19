#include "cuentaAtras.h"
#include "instruccion.h"
#include "add.h"
#include "read.h"
#include "write.h"
#include "dup.h"
#include "jumpif.h"
#include "push.h"

using namespace std;

cuentaAtras::cuentaAtras() : Programa(7) {
    instrucciones = new Instruccion*[numInstrucciones];
    instrucciones[0] = new read();
    instrucciones[1] = new dup();
    instrucciones[2] = new write();
    instrucciones[3] = new push(-1);
    instrucciones[4] = new add();
    instrucciones[5] = new dup();
    instrucciones[6] = new jumpif(1);
}

cuentaAtras::~cuentaAtras(){}
