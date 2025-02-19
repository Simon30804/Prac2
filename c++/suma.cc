#include "suma.h"
#include "instruccion.h"
#include "add.h"
#include "read.h"
#include "write.h"

using namespace std;

suma::suma() : Programa(4) {
    instrucciones = new Instruccion*[numInstrucciones];
    instrucciones[0] = new read();
    instrucciones[1] = new read();
    instrucciones[2] = new add();
    instrucciones[3] = new write();
}

suma::~suma(){
    delete[] instrucciones;
}