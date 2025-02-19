class cuentaAtras extends Programa{
    public cuentaAtras(){
        super(7);   // Uso la llamada super para llamar al constructor de la clase padre, Programa e inicializarlo con un tamaño de 7
        // Relleno el vector de instrucciones
        instrucciones[0] = new read();
        instrucciones[1] = new dup();
        instrucciones[2] = new write();
        instrucciones[3] = new push(-1);
        instrucciones[4] = new add();
        instrucciones[5] = new dup();
        instrucciones[6] = new jumpif(1);
    }
}
