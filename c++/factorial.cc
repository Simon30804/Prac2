#include "factorial.h"
#include "instruccion.h"
#include "add.h"
#include "read.h"
#include "write.h"
#include "push.h"
#include "swap.h"
#include "over.h"
#include "jumpif.h"
#include "dup.h"
#include "mul.h"

using namespace std;

factorial::factorial() : Programa(14) {
    instrucciones = new Instruccion*[numInstrucciones];
    instrucciones[0] = new push(1);
    instrucciones[1] = new read();
    instrucciones[2] = new ::swap();
    instrucciones[3] = new over();
    instrucciones[4] = new mul();
    instrucciones[5] = new ::swap();
    instrucciones[6] = new push(-1);
    instrucciones[7] = new add();
    instrucciones[8] = new dup();
    instrucciones[9] = new push(-2);
    instrucciones[10] = new add();
    instrucciones[11] = new jumpif(2);
    instrucciones[12] = new ::swap();
    instrucciones[13] = new write();
}

factorial::~factorial(){}